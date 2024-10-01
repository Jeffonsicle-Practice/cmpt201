GCC = gcc
CFLAGS = -std=c11 -Wall

checkFilename: checkFilename.o
	@$(GCC) $(CFLAGS) -o $@ $^

checkformat: checkformat.o
	@$(GCC) $(CFLAGS) -o $@ $^

contains: contains.o
	@$(GCC) $(CFLAGS) -o $@ $^

%.0: %.c
	@$(GCC) $(CFLAGS) -c $<

.PHONY: clean package

clean:
	@rm -r *.o checkFilename checkformat contains