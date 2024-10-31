PROG = main.exe 
SRC = main.c funk2.c funk1.c
#CFLAGS = -g
CFLAGS =-g -Wall -Werror
LIBS = 

all: $(PROG)

$(PROG): $(SRC)
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $(SRC)  $(LIBS) 

clean:
	rm -f $(PROG)

.PHONY: all clean