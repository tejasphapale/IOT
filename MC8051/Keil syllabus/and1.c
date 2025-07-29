#include<reg51.h>
void main()
{
unsigned char a=0*02;
unsigned char b=0*02;
unsigned char result_and;
result_and=(a&b);
P1=0*00;
P1=result_and;
while(1)
}