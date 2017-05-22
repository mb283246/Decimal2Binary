/*Melanie Borgeest
CSI333 Lab 7*/
#include <stdio.h>
#include <math.h>

//declare functions
unsigned int reverse_bits(unsigned int n);
int dec2bin(unsigned int);
int bin2dec(unsigned int); 

int main(void){
	unsigned int n1;
	int i;

	printf("Enter an unsigned integer:   ");
	scanf("%u", &n1);
	//print the conversion of  decimal to binary
	printf("%016u\n", dec2bin(n1));
	
	//assign n to the conversion of n1, the decimal number
	unsigned int n = (dec2bin(n1));
	
	//call function that reverses bits of n 
	unsigned int n2 = (reverse_bits(n));
	printf("\n");
	
	return 0;

}
int dec2bin(unsigned int n1){

	if(n1 != 0){
		return (dec2bin(n1/2)*10)+(n1%2);
	}
	return 0;
}
unsigned int reverse_bits(unsigned int n){
	int rem;
	int reverse = 0;
	
	while(n != 0){
		rem = n%10;
		reverse = reverse * 10 +rem;
		n /= 10;
	}
	int i;
	int len = printf("%d", reverse);
	for (i = 0; i < 16-len; ++i){
		printf("0");
	}
	return n;
	reverse_bits(n);
}
int bin2dec(unsigned int n2){
	int rem;
	int dec = 0;
	int base=1;
	
	while(n2 != 0){
		rem = n2 % 10;
		dec = dec + rem *base;
		n2 = n2 / 10;
		base = base *2;
	}
	return 0;
}
	
	


