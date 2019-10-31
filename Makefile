CC = sdcc
LD = gplink

TARGET = pic18f8527
MARCH = -mpic16
MCU = -p18f8527
CFLAGS = --std-c99 --use-non-free --opt-code-size -V

# copy default linker script to local directory
# not really required
LFLAGS = -s ./18f8527_g.lkr

.PHONY: all clean

all: main.c
	$(CC) -c $(CFLAGS) $(MARCH) $(MCU) main.c -o main.o
	$(LD) $(LFLAGS) -r -m -a inhx32 -o main.hex /cygdrive/c/sdcc/lib/pic16/libsdcc.lib /cygdrive/c/sdcc/non-free/lib/pic16/libdev18f8527.lib main.o

# bash range [a-z]
# invert range [!a-z]
clean:
	rm -f main.[!c,h]* main.hex main.cod main.map *.orig


