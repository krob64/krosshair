LIBRARY = lib/krosshair.so

CCFLAGS = -Wall -std=c99 -ggdb -fPIC -shared -I./include/
LDFLAGS = -ldl -lm

SOURCES = $(shell find src -type f -name "*.c")

.PHONY: all clean install

all:
	mkdir -p lib
	$(CC) $(LDFLAGS) $(CCFLAGS) $(SOURCES) -o $(LIBRARY)

install:
	sudo mkdir -p /usr/lib/krosshair
	sudo cp $(LIBRARY) /usr/lib/krosshair/krosshair.so

clean:
	rm -f $(LIBRARY)
