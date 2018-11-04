OBJS = bin/main.o 
CC = gcc
CFLAGS = -Wall -c
LFLAGS = -Wall
NAME = bin/xmake


all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS)  -o $(NAME)
	$(NAME)
bin/main.o : src/main.c 
	$(CC) $(CFLAGS) src/main.c -o bin/main.o
clean : 
	\rm bin/*.o $(NAME)
