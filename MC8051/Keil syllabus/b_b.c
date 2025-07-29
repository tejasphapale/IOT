//BCD to the binary value
#include<reg51.h>
unsigned char bcd(unsigned char binary_val)
{
unsigned char bcd_val;
bcd_val=(binary_val / 10) << 4;
bcd_val =(binary_val %10);
return bcd_val;
}
void main()
{
unsigned char binary_num=25;
unsigned char bcd_num;
binary_num=bcd(binary_num);
P1=bcd_num;
while(1);
}