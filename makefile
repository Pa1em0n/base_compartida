SOURCES=main.c

all:
	gcc $(SOURCES) -std=gnu99 -Wall -lm -g -o main

default:

chido:
	gcc $(SOURCES) -std=gnu99 -Wall -lm -O3  -o main

run:
	./main

clean:
	rm -f main