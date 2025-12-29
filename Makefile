YACC   = bison
LEX    = flex
CC     = gcc
CFLAGS = -Wall -g
LIBS   = -ly -lfl

TARGET = cmm
OBJS    = main.o show.o ast.o gentac.o hash.o symbol.o y.tab.o

TEST_PROG = sample/test.cmm

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

y.tab.c y.tab.h: cmm.y
	$(YACC) -o y.tab.c cmm.y

lex.yy.c: cmm.l
	$(LEX) cmm.l

%.o: %.c
	$(CC) $(CFLAGS) -c $<

main.o: main.c node.h parser.h gentac.h y.tab.h
ast.o: ast.c ast.h node.h
show.o: show.h show.c
gentac.o: hash.h tac.h gentac.h symbol.h gentac.c
hash.o: hash.h hash.c
symbol.o: symbol.h hash.h symbol.c
y.tab.o: y.tab.c lex.yy.c node.h
lex.yy.o: lex.yy.c

run: $(TARGET)
	./$(TARGET) $(TEST_PROG)

clean:
	rm -f *~ *.tab.* *.o lex.yy.c

cleanall: clean
	rm -f cmm code.output
