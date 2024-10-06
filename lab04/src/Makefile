GCC = gcc
CFLAGS = -std=c11 -Wall

#create the checkFilename executable file
checkFilename: checkFilename.o
	@$(GCC) $(CFLAGS) -o $@ $^

#create the checkformat executable file
checkformat: checkformat.o
	@$(GCC) $(CFLAGS) -o $@ $^

#create the contains executable file
contains: contains.o
	@$(GCC) $(CFLAGS) -o $@ $^

#create .o files for the above executable files
%.0: %.c
	@$(GCC) $(CFLAGS) -c $<

#create .PHONY target to clean and create a package
.PHONY: clean package

#clean the folder by removing the .o files, and the executable files
clean:
	@rm -r *.o checkFilename checkformat contains

#creates the program as a zip folder
package:
	@tar -czf cmpt201_lab04_JM.tar.gz *.c *.h Makefile README