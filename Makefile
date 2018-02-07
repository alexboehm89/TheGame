PROG    = TheGame
CC      = g++
CPPFLAGS = -g -Wall -I/home/alex/privat/code/TheGame/include -std=c++11
OBJS = main.o card_deck.o

all : $(PROG)

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS) 
main.o :
	$(CC) $(CPPFLAGS) -c src/main.cpp
card_deck.o :
	$(CC) $(CPPFLAGS) -c src/card_deck.cpp

clean :
	rm -f core $(PROG) $(OBJS)
