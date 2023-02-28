CC=gcc
CFLAGS=-g -Wall
TARGET=ysms
OBJS=check.o main.o
 
$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

check.o : check.c
	$(CC) -c -o check.o check.c

main.o : main.c
	$(CC) -c -o main.o main.c

clean:
	rm $(OBJS) $(TARGET)