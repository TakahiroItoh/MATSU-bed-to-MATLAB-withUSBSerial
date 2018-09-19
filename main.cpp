#include "mbed.h"
#include "USBSerial.h"

#define LED1 P0_29
#define LED2 P0_28
#define LED3 P0_27
#define LED4 P0_26

USBSerial pc;
BusOut myled(LED1, LED2, LED3, LED4);

int main() {
    unsigned char count=0;
    myled = 0b0000;
    while(1){
        myled = !myled;
        for(count=0;count<128;count++){
            pc.printf("%c\n",count);
            wait_ms(100);
        }
    }
}
