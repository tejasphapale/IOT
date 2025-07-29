#include<reg51.h>
unsigned char bcd(unsigned char binary_value)
{
unsigned char bcd_value;
bcd_val=(binary_value/10)<<4;
bcd_value 1=(binary_value %10);
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