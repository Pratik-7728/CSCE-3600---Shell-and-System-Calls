CC = gcc
CFLAGS = -Wall
TARGET = bitwisemenu
OBJS = major1.o clz.o rotate.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

major1.o: major1.c major1.h
	$(CC) $(CFLAGS) -c major1.c

clz.o: clz.c major1.h
	$(CC) $(CFLAGS) -c clz.c

rotate.o: rotate.c major1.h
	$(CC) $(CFLAGS) -c rotate.c

clean:
	rm -f $(TARGET) *.o
