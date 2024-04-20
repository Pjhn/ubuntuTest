CC=gcc
CFLAGS=-Wall
OBJ=calculator.o add.o minus.o multi.o divide.o

calchw: $(OBJ)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

