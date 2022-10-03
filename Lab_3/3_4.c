// 3.4
#include <stdio.h>
#include <stdint.h>

uint16_t mult(uint8_t x, uint8_t y) {
	return (uint16_t)(x * y);
}

int main(){
	unsigned char a, b;
	unsigned short c;

	printf("Input 8-bit integers a,b:\n");
	scanf_s("%hhu,%hhu", &a, &b);

	c = mult(a, b);
	printf("c=%hu", c);
}