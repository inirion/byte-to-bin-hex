#include <conio.h>
#include <stdio.h>
bool isbitset(unsigned char val, short bitnum)
{
	return ((val & (1 << bitnum)) != 0);
}
int main() {
	unsigned char c = 111;
	unsigned char lower = c << 4;
	lower >>= 4;
	unsigned char higher = c >> 4;
	unsigned char kthbit = 0;
	puts("Binary : ");
	for (short i = 7; i >= 0; i--) {
		putchar('0' + isbitset(c, i));
	}
	puts("");
	puts("Hexa : ");
	if (higher > 9)
	putchar('7' + higher);
	else putchar('0' + higher);
	if (lower > 9)
		putchar('7' + lower);
	else putchar('0' + lower);
	
	_getch();
	return 0;
}