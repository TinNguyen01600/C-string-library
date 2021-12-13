all: compile run

compile:
	gcc strings_test.c string.c string.h -lm -o main -I.
run:
	./main

clean:
	rm -f compile run

