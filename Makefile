CC=gcc
CFLAGS=-Wall -Werror
BIN=hdc
OBJECTS=hdc.o

all: ${BIN}

hdc.o: hdc.h

${BIN}: ${OBJECTS}
	${CC} ${CFLAGS} -o ${BIN} ${OBJECTS}

clean:
	rm -f hdc.o
	rm -f hdc

.PHONY: all clean