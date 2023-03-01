CC=gcc
CFLAGS=-g -Wall
TARGET=ysms
OBJS=check.o main.o game.o
 
$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

check.o : check.c
	$(CC) -c -o check.o check.c

game.o : game.o
	$(CC) -c -o game.o game.c

main.o : main.c
	$(CC) -c -o main.o main.c

clean:
	rm $(OBJS) $(TARGET)