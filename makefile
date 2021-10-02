TARGET=main
CFLAGS=-Wall

.PHONY: all clean

main: $(TARGET)

$(TARGET):

clean:
	rm -f $(TARGET)