#initializes the variables GCC and CFLAGS
GCC = gcc 
CFLAGS = -Wall -std=c11

#makes the executable file sec2hms
test_pointerFun: test_pointerFun.o
	@$(GCC) $(CFLAGS) -o $@ $^

#makes the output files of the above
%.o: %.c 
	@$(GCC) $(CFLAGS) -c $<

#makes the .PHONY which cleans and makes the package
.PHONY: clean package

#removes the .o files and the executable files for sec2hms, stats and loadData
clean:
	@rm -rf *.o test_pointerFun

#creates the program as a zip folder
package:
	@tar -czf cmpt201_lab07_JM.tar.gz *.c *.h *.txt Makefile README