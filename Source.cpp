#include <conio.h>
#include <stdio.h>
int main() {
	unsigned char c = 122;
	unsigned char lower = c << 4;
	lower >>= 4;
	unsigned char higher = c >> 4;
	puts("Binary : ");
	for (short i = 0; i <= 7; i++) {
		if(c >> 7 == 1)
		putchar('1');
		else putchar('0');
		c <<= 1;
	}
	puts("");
	puts("Hexa : ");
	if (higher > 9)
		putchar('7' + higher);
	else 
		putchar('0' + higher);
	if (lower > 9)
		putchar('7' + lower);
	else 
		putchar('0' + lower);
	_getch();
	return 0;
}