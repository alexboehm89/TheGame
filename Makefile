PROG    = TheGame
CC      = g++
CPPFLAGS = -g -Wall -I./include -std=c++11
OBJS = main.o deck.o card.o

all : $(PROG)

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS) 
main.o : src/main.cpp 
	$(CC) $(CPPFLAGS) -c src/main.cpp
deck.o : src/deck.cpp include/deck.h
	$(CC) $(CPPFLAGS) -c src/deck.cpp
card.o : src/card.cpp include/card.h
	$(CC) $(CPPFLAGS) -c src/card.cpp

clean :
	rm -f core $(PROG) $(OBJS)
