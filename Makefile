PROG    = TheGame
CC      = g++
CPPFLAGS = -g -Wall -I/home/alex/privat/code/TheGame/include -std=c++11
OBJS = main.o card_deck.o

all : $(PROG)

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS) 
main.o : src/main.cpp 
	$(CC) $(CPPFLAGS) -c src/main.cpp
card_deck.o : src/card_deck.cpp include/card_deck.h
	$(CC) $(CPPFLAGS) -c src/card_deck.cpp

clean :
	rm -f core $(PROG) $(OBJS)
