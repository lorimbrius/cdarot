CFLAGS ?= -O3
PREFIX  = /usr/local
BINDIR  = /games
MANDIR  = /share/man/man6

all: dtarot man

dtarot: dtarot.o
	$(CC) $(LDFLAGS) -o $@ $^

man: dtarot.6.gz

dtarot.6.gz:
	gzip < dtarot.6 > dtarot.6.gz

clean:
	$(RM) dtarot dtarot.o dtarot.6.gz

install: all
	mkdir -p $(DESTDIR)$(PREFIX)$(BINDIR)
	mkdir -p $(DESTDIR)$(PREFIX)$(MANDIR)
	install -m 0755 -s dtarot $(DESTDIR)$(PREFIX)$(BINDIR)
	install -m 0644 dtarot.6.gz $(DESTDIR)$(PREFIX)$(MANDIR)

deinstall:
	$(RM) $(DESTDIR)$(PREFIX)$(BINDIR)/dtarot
	$(RM) $(DESTDIR)$(PREFIX)$(MANDIR)/dtarot.6.gz

.c.o:
	$(CC) $(CFLAGS) -c $<

.SUFFIXES: .c