CFLAGS ?= -O3
PREFIX  = /usr/local
BINDIR  = /games
MANDIR  = /share/man/man6

all: dtarot dtarot.6.gz

dtarot: dtarot.o

dtarot.6.gz:
	gzip < dtarot.6 > dtarot.6.gz

deinstall:
	$(RM) $(DESTDIR)$(PREFIX)$(BINDIR)/dtarot
	$(RM) $(DESTDIR)$(PREFIX)$(MANDIR)/dtarot.6.gz

clean:
	rm -f dtarot dtarot.6.gz dtarot.o