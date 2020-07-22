IDIR =../include
ODIR=obj
LDIR =../lib

CC=gcc
CFLAGS=-I$(IDIR)

LIBS=

TARGET=args_c

#include here any header files which, when changed, will cause a recompile of the software.
_DEPS = app_argument_parser.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o app_argument_parser.o 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

#this is included incase a file called "clean" is included in the build!
.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ $(TARGET).exe