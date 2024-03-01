avr-gcc src/uart/* src/main.c -mmcu=atmega328p -Os -g -o build/output.out &&
avr-objcopy -O ihex build/output.out build/output.hex &&
sudo avrdude -p atmega328p -c arduino -P /dev/ttyACM0 -U flash:w:build/output.hex
