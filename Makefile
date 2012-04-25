#
# Makefile for Delta Programming Language
#

.PHONY: all clean libstatic libdynamic libinclude

CXX = g++


SRCDIR ?= ./DeltaPL

BUILDDIRNAME ?= Build
BUILDDIR ?= ./$(BUILDDIRNAME)

LIBHDIR ?= include


CFILES = $(wildcard $(SRCDIR)/*.cpp) $(wildcard $(SRCDIR)/*.c)

HFILES = $(wildcard $(SRCDIR)/*.h)
HFILENAMES = $(addprefix $(LIBHDIR)/,$(notdir $(HFILES)))

OFILES = $(addsuffix .o, $(addprefix $(BUILDDIR)/, $(basename $(notdir $(CFILES)))))


LIBSOFILES = $(filter-out $(BUILDDIR)/main.o, $(OFILES))
DYLIBSOFILES = $(addsufix .pico, $(filter-out $(BUILDDIR)/main.o, $(OFILES)))

# Interpreter
all: delta

# Static library linking
libstatic: $(LIBSOFILES) libinclude
	ar rcs libdelta.a $(LIBSOFILES)


# Not working on MAC OS X, should try in Linux
libdynamic: $(DYLIBSOFILES) libinclude
	$(CXX) -shared -Wl,-soname,-libdelta.so.1 -o libdelta.so.1.0.1 $(DYLIBSOFILES)
	rm -f $(BUILDDIR)/*.o.pico

#################################
######## Helper targets #########
#################################

delta: $(OFILES)
	$(CXX) $(OFILES) -o delta


$(BUILDDIR)/%.o: $(CFILES) $(HFILES) | $(BUILDDIRNAME)
	$(CXX) -c $(SRCDIR)/$(*F).cpp -o $(BUILDDIR)/$(@F)


$(BUILDDIRNAME):
	mkdir -p $(BUILDDIRNAME)

clean:
	rm -f -r $(BUILDDIR)

cleandist:
	rm -f -r $(BUILDDIR)
	rm -f delta

$(LIBHDIR):
	mkdir -p $(LIBHDIR)

libinclude: $(HFILENAMES)


$(LIBHDIR)/%.h: $(SRCDIR)/%.h | $(LIBHDIR)
	cp $(SRCDIR)/$(@F) $@


# For the dynamic libraries

$(BUILDDIR)/%.o.pico: $(CFILES) $(HFILES) | $(BUILDDIRNAME)
	$(CXX) -c -fPIC $(SRCDIR)/$(*F).cpp -o $(BUILDDIR)/$(@F)

