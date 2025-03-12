#include <femtorv32.h>

int main(){
    while (1)
    {
        printf("Hello World!\n");
        printf("Freq: %d MHz\n", FEMTORV32_FREQ);
        *(volatile uint32_t*)(0x400004) = 3;
        delay(500);
        *(volatile uint32_t*)(0x400004) = 0;
        delay(500);
    }
    return 0;
}