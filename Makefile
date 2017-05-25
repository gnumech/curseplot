CC=gcc
OBJ=curseplot
CFLAGS=-g -lncurses -lm
SRC=src/main.c

$(OBJ) : src/
	$(CC) -o $(OBJ) $(CFLAGS) $(SRC)

clean: 
	rm -f $(OBJ)
