###############################################################
# Makefile for 
################# Delta Programming Language ##################
#      Interpreter and Libs 
######## 
# 
# 
# NOTICE:
#    Right now only should try default target and cleaners. 
# Library targets are still in progress.
################################################################

.PHONY: all clean cleandist libstatic libdynamic libinclude

#### VARIABLES DEFINITIONS ####

CXX = g++
CC = gcc
LIBS += -lfl


#####
## Directory Names

SRCDIR ?= ./DeltaPL

BUILDDIRNAME ?= Build
SPECIFICBUILDNAME ?= specific
SPECIFICBUILDNAME := $(BUILDDIRNAME)/$(SPECIFICBUILDNAME)
BUILDDIR ?= ./$(BUILDDIRNAME)

LIBHDIR ?= include



#####
## Lists of Files


#### SPECIFIC SOURCE AND CODE FILES ####

SPECIFIC_CFILES = 
SPECIFIC_HFILES = lexer/lexer.h
SPECIFIC_OFILES = lexer.o

#### END SPECIFIC TARGETS ####



### Code files
SPECIFIC_CFILES  := $(addprefix $(SRCDIR)/, $(SPECIFIC_CFILES))
CFILES += $(wildcard $(SRCDIR)/*.cpp) $(wildcard $(SRCDIR)/*.c)

### Header files
SPECIFIC_HFILES  := $(addprefix $(SRCDIR)/, $(SPECIFIC_HFILES))
HFILES += $(wildcard $(SRCDIR)/*.h)
HFILENAMES = $(addprefix $(LIBHDIR)/,$(notdir $(HFILES)))


### Object files
SPECIFIC_OFILES  := $(addprefix ./$(SPECIFICBUILDNAME)/, $(basename $(notdir $(SPECIFIC_OFILES))))
OFILES += $(addsuffix .o, $(addprefix $(BUILDDIR)/, $(basename $(notdir $(CFILES)))))


### Object files for Dynamic Libraries
LIBSOFILES = $(filter-out $(BUILDDIR)/main.o, $(OFILES) $(SPECIFIC_OFILES))
DYLIBSOFILES = $(addsufix .pico, $(filter-out $(BUILDDIR)/main.o, $(OFILES) $(SPECIFIC_OFILES))))

#### END VARIABLES DEFINITIONS ####



#################################
######### Main targets ##########
#################################

#####
## Interpreter
all: delta

#####
## Static library
libstatic: $(LIBSOFILES) libinclude
	ar rcs libdelta.a $(LIBSOFILES)

#####
## Dynamic library
# Not working on MAC OS X, should try in Linux?
libdynamic: $(DYLIBSOFILES) libinclude
	$(CXX) -shared -Wl,-soname,-libdelta.so.1 -o libdelta.so.1.0.1 $(DYLIBSOFILES)
	rm -f $(BUILDDIR)/*.o.pico

#####
## Clean
clean:
	rm -f -r $(BUILDDIR)

#####
## Clean everything
cleandist:
	rm -f -r $(BUILDDIR)
	rm -f delta
	rm -f *.a
	rm -f *.so
	rm -f *.dylib
	rm -f -r $(LIBHDIR)


#################################
######## Helper targets #########
#################################

######
## Main program

delta: $(OFILES) $(SPECIFIC_OFILES)
	$(CXX) $(OFILES) $(SPECIFIC_OFILES) $(LIBS) -o delta

######
## Object files

## Specific ##
$(SPECIFICBUILDNAME)/lexer.o: $(SRCDIR)/lexer/lexer.h $(SRCDIR)/lexer/delta.flex
	flex -o $(SRCDIR)/lexer/lex.yy.c $(SRCDIR)/lexer/delta.flex
	$(CC) -c $(SRCDIR)/lexer/lex.yy.c -o $(SPECIFICBUILDNAME)/lexer.o -lfl



## General ##
## $(BUILDDIR)/%.o: $(CFILES) $(HFILES) | $(BUILDDIRNAME) $(SPECIFICBUILDNAME)
$(OFILES): $(CFILES) $(HFILES) | $(BUILDDIRNAME) $(SPECIFICBUILDNAME)
	$(CXX) -c $(SRCDIR)/$(*F).cpp -o $(BUILDDIR)/$(@F)



#####
## Creation of needed directories

$(BUILDDIRNAME):
	mkdir -p $(BUILDDIRNAME)

$(SPECIFICBUILDNAME):
	mkdir -p $(SPECIFICBUILDNAME)

$(LIBHDIR):
	mkdir -p $(LIBHDIR)


#####
## Copying the header files to the include dir

libinclude: $(HFILENAMES)

$(LIBHDIR)/%.h: $(SRCDIR)/%.h | $(LIBHDIR)
	cp $(SRCDIR)/$(@F) $@


#####
## Compilation of Position Independent Code Objects
##  for the Dynamic Libraries

$(BUILDDIR)/%.o.pico: $(CFILES) $(HFILES) | $(BUILDDIRNAME)
	$(CXX) -c -fPIC $(SRCDIR)/$(*F).cpp -o $(BUILDDIR)/$(@F)

