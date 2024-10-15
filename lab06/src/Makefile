#initializes the variables GCC and CFLAGS
GCC = gcc 
CFLAGS = -Wall -std=c11

#makes the executable file randomSentence
sec2hms: sec2hms.o
	@$(GCC) $(CFLAGS) -o $@ $^

stats: stats.o
	@$(GCC) $(CFLAGS) -o $@ $^

loadData: loadData.o
	@$(GCC) $(CFLAGS) -o $@ $^

#makes the output files of the above
%.o: %.c 
	@$(GCC) $(CFLAGS) -c $<

#makes the .PHONY which cleans and makes the package
.PHONY: clean package

#removes the .o files and the executable files for strlength, lawn, base2dec and randomSentence
clean:
	@rm -rf *.o sec2hms stats loadData

#creates the program as a zip folder
package:
	@tar -czf cmpt201_lab05_JM.tar.gz *.c *.h *.txt Makefile README