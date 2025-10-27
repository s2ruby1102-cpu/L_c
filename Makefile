CC = gcc
CFLAGS = -Wall
OBJS = ex1_a.o ex1_b.o
TARGET = hello

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

ex1_a.o: ex1_a.c
	$(CC) -c $(CFLAGS) ex1_a.c

ex1_b.o: ex1_b.c
	$(CC) -c $(CFLAGS) ex1_b.c

clean:
	rm -f $(OBJS) $(TARGET)

