#initializes the variables GCC and CFLAGS
GCC = gcc 
CFLAGS = -Wall -std=c11

#makes the executable file math
math: math.o -lm
	@$(GCC) $(CFLAGS) -o $@ $^

#makes the output files of the above
%.o: %.c 
	@$(GCC) $(CFLAGS) -c $<

#makes the .PHONY which cleans and makes the package
.PHONY: clean package

#removes the .o files and the executable files for sec2hms, stats and loadData
clean:
	@rm -rf *.o math

#creates the program as a zip folder
package:
	@tar -czf cmpt201_lab07_JM.tar.gz *.c *.dat Makefile README