PROG = main.exe 
SRC = main.c module01.c
#CFLAGS = -g
CFLAGS = -wall -werror
LIBS = 

all: $(PROG)

$(PROG): $(SRC)
	$(CC) -o $@ $(CFLAGS) $(LDFLAGS) $(SRC)  $(LIBS) 

clean:
	rm -f $(PROG)

.PHONY: all clean