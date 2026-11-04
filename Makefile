LIBRARY = lib/krosshair.so

CCFLAGS = -Wall -std=c99 -ggdb -fPIC -shared -I./include/
LDFLAGS = -ldl -lm

SOURCES = $(shell find src -type f -name "*.c")

.PHONY: all clean install

all:
	mkdir -p lib
	$(CC) $(LDFLAGS) $(CCFLAGS) $(SOURCES) -o $(LIBRARY)

install:
	install -Dm755 $(LIBRARY) /usr/lib/krosshair/krosshair.so
	install -Dm644 krosshair.json /usr/share/vulkan/implicit_layer.d/krosshair.json

clean:
	rm -f $(LIBRARY)
