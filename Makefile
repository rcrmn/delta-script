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

#####
## Directory Names

SRCDIR ?= ./DeltaPL

BUILDDIRNAME ?= Build
BUILDDIR ?= ./$(BUILDDIRNAME)

LIBHDIR ?= include

#####
## Lists of Files

### Code files
CFILES = $(wildcard $(SRCDIR)/*.cpp) $(wildcard $(SRCDIR)/*.c)

### Header files
HFILES = $(wildcard $(SRCDIR)/*.h)
HFILENAMES = $(addprefix $(LIBHDIR)/,$(notdir $(HFILES)))

### Object files
OFILES = $(addsuffix .o, $(addprefix $(BUILDDIR)/, $(basename $(notdir $(CFILES)))))

### Object files for Dynamic Libraries
LIBSOFILES = $(filter-out $(BUILDDIR)/main.o, $(OFILES))
DYLIBSOFILES = $(addsufix .pico, $(filter-out $(BUILDDIR)/main.o, $(OFILES)))

#### END VARIABLES DEFINITIONS ####

#### MAIN TARGETS ####

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

delta: $(OFILES)
	$(CXX) $(OFILES) -o delta

######
## Object files

$(BUILDDIR)/%.o: $(CFILES) $(HFILES) | $(BUILDDIRNAME)
	$(CXX) -c $(SRCDIR)/$(*F).cpp -o $(BUILDDIR)/$(@F)

#####
## Creation of needed directories

$(BUILDDIRNAME):
	mkdir -p $(BUILDDIRNAME)

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

