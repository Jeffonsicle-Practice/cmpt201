GCC = gcc 
CFLAGS = -Wall -std=c11

randomSentence: randomSentence.o
	@$(GCC) $(CFLAGS) -o $@ $^

base2dec: base2dec.o -lm
	@$(GCC) $(CFLAGS) -o $@ $^

strlength: strlength.o
	@$(GCC) $(CFLAGS) -o $@ $^

lawn: lawn.o -lm
	@$(GCC) $(CFLAGS) -o $@ $^

%.o: %.c 
	@$(GCC) $(CFLAGS) -c $<

.PHONY: clean package

clean:
	@rm -rf *.o strlength lawn base2dec

#creates the program as a zip folder
package:
	@tar -czf cmpt201_lab05_JM.tar.gz *.c *.h Makefile README