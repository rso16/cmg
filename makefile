OBJS = bin/main.o bin/node.o
CC = gcc
CFLAGS = -Wall -c
LFLAGS = -Wall
NAME = bin/xmake


all: $(OBJS)
	$(CC) $(LFLAGS) $(OBJS)  -o $(NAME)
run: all
	$(NAME) "init" "c.template"
clean : 
	\rm bin/*.o $(NAME)
bin/main.o : src/main.c src/node/node.h src/fHandler/fHandler.h 
	$(CC) $(CFLAGS) src/main.c -o bin/main.o
bin/node.o : src/node/node.c src/node/node.h
	$(CC) $(CFLAGS) src/node/node.c -o bin/node.o
bin/fHandler.o : src/fHandler/fHandler.c src/fHandler/fHandler.h src/node/node.h
	$(CC) $(CFLAGS) src/fHandler/fHandler.c -o bin/fHandler.o
