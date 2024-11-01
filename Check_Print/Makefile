PROG = main.exe 
SRC = main.c
#CFLAGS = -g
CFLAGS =-g -wall -werror
LIBS = 

all: $(PROG)

$(PROG): $(SRC)
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $(SRC)  $(LIBS) 

clean:
	rm -f $(PROG)

.PHONY: all clean