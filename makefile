CC = gcc               
CFLAGS = -Wall -g       
TARGET = main            
OBJS = vector.o main.o   

RM = rm -f              # UNIX
ifeq ($(OS),Windows_NT) # если Windows
    RM = del /Q         
endif

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

vector.o: vector.c
	$(CC) $(CFLAGS) -c vector.c

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

clean:
	$(RM) -f $(OBJS) $(TARGET)
