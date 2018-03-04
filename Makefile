PROG    = TheGame
CC      = g++
CPPFLAGS = -g -Wall -I./include -std=c++11
OBJS = main.o deck.o stack.o card.o

all : $(PROG)

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS) 
main.o : src/main.cpp 
	$(CC) $(CPPFLAGS) -c src/main.cpp
deck.o : src/deck.cpp include/deck.h
	$(CC) $(CPPFLAGS) -c src/deck.cpp
stack.o : src/stack.cpp include/stack.h
	$(CC) $(CPPFLAGS) -c src/stack.cpp
card.o : src/card.cpp include/card.h
	$(CC) $(CPPFLAGS) -c src/card.cpp

clean :
	rm -f core $(PROG) $(OBJS)
