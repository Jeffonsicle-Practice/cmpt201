#variables:

CC = gcc
CFLAGS = -Wall -g
log = logConversion
rand = randRange

#loggy compiles and runs the logConversion.c file
loggy: $(log).o
	@gcc $(log).c -lm
	@gcc $(log).c -lm -o $(log).o
	@./$(log).o

#triggy compiles and runs the trig.c file
triggy: trig.o
	@gcc trig.c -lm
	@gcc trig.c -lm -o trig.o
	@./trig.o

#randy compiles and runs the randRange.c file
randy: $(rand).o
	@gcc $(rand).c -lm
	@gcc $(rand).c -lm -o $(rand).o
	@./$(rand).o

#checks to see if a .o file of logConversion is created
$(log).o: $(log.c)
	@$(CC) $(CFLAGS) -c $(log).c

#checks to see if a .o file of trig is created
trig.o: trig.c
	@$(CC) $(CFLAGS) -c trig.c

#checks to see if a .o file of randRange is created
$(rand).o: $(rand).c
	@$(CC) $(CFLAGS) -c $(rand).c

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