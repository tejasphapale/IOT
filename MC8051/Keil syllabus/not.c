#include<reg51.h>


void main() {
    while (1) {
        P2_0 = ~P1_0;  
    }
}
