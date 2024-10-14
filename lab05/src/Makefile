#initializes the variables GCC and CFLAGS
GCC = gcc 
CFLAGS = -Wall -std=c11

#makes the executable file randomSentence
randomSentence: randomSentence.o
	@$(GCC) $(CFLAGS) -o $@ $^

#makes the executable file base2dec
base2dec: base2dec.o -lm
	@$(GCC) $(CFLAGS) -o $@ $^

#makes the executable file strlength
strlength: strlength.o
	@$(GCC) $(CFLAGS) -o $@ $^

#make the executable file lawn
lawn: lawn.o -lm
	@$(GCC) $(CFLAGS) -o $@ $^

#makes the output files of the above
%.o: %.c 
	@$(GCC) $(CFLAGS) -c $<

#makes the .PHONY which cleans and makes the package
.PHONY: clean package

#removes the .o files and the executable files for strlength, lawn, base2dec and randomSentence
clean:
	@rm -rf *.o strlength lawn base2dec randomSentence

#creates the program as a zip folder
package:
	@tar -czf cmpt201_lab05_JM.tar.gz *.c *.h *.txt Makefile README