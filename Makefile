CC = gcc
CFLAGS = -shared -fPIC -Wall -Wextra -Werror -O2

SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:src/%.c=bin/%.so)
BIN = bin


.PHONY: all clean

all: $(BIN) $(OBJS)

bin:
	mkdir -p $@

bin/%.so: src/%.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(BIN)
