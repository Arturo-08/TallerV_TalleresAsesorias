
#include <stdint.h>

unsigned char variable1;
uint8_t variable2;
uint32_t variable3;
uint16_t variable4;

uint8_t x,y,z;
int16_t m=2,n=3,l=-5;

char miPrimerString[120]="Linux es el mejor SO del universo";
char miPrimerCaracter ='A';

uint8_t variable5; int32_t variable6;

int main(void)
{
	char sizeChar=sizeof(char);
	char sizeMiPrimerString=sizeof(miPrimerString);
	(void) sizeChar;

	m=m+n;
	m+=n;
	m+=1;
	m++;

	m*=n;
	m/=n;
	m%=n;

	m<<=n;
	m>>=n;

	for(;;);
}
