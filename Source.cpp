#include <conio.h>
#include <stdio.h>
bool isbitset(unsigned char val, short bitnum)
{
	return ((val & (1 << bitnum)) != 0);
}
unsigned short get_nbytes(unsigned char c) {
	unsigned short sum = 0;
	for (short i = 0, pow = 1; i <= 3; i++, pow *= 2) {
		if (isbitset(c, i)) {
			sum += pow;
		}
	}
	 return sum;
}
int main() {
	unsigned char c = 222;
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
	unsigned short value = get_nbytes(higher);
	if (value > 9)
	putchar('7' + value);
	else putchar('0' + value);
	value = get_nbytes(lower);
	if (value > 9)
		putchar('7' + value);
	else putchar('0' + value);
	
	_getch();
	return 0;
}