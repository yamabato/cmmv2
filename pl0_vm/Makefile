CC     = gcc
CFLAGS = -Wall -g

TARGET = pl0i
OBJS   = main.o parse.o vm.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

%.o: %.c
	$(CC) $(CFLAGS) -c $<

main.o: main.c parse.h vm.h
parse.o: parse.c parse.h vm.h
vm.o: vm.c vm.h

clean:
	rm -f *.o pl0i
