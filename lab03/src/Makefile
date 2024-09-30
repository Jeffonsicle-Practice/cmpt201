CC = gcc
CFLAGS = -Wall -g

ascii:
	@gcc ascii.c
	@gcc ascii.c -o ascii
	@./ascii

gravity earth 0:
	@gcc gravity.c -lm
	@gcc gravity.c -lm -Wall -o gravity
	@./gravity earth 0

gravity2:
	gcc gravity2.c
	gcc gravity2.c -o gravity2
	./gravity2

#runs the clean, install and package commands
.PHONY: clean install package

#removes all .o files
clean:
	rm -f *.o loggy triggy randy

#installs the files
install:
	mv logConversion.c /workspaces/cmpt201/lab02/bin
	mv trig.c /workspaces/cmpt201/lab02/bin
	mv randRange.c /workspaces/cmpt201/lab02/bin

#creates the program as a zip folder
package:
	tar -czf tarAndcompress.tar.gz *.c *.h Makefile

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@