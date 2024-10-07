#include <stdio.h>
#include <math.h>

int main(){

	float alas, tinggi, miring;

	printf("Masukkan panjang alas segitiga : ");
	scanf("%f", &alas);
	
	printf("Masukkan panjang tinggi segitiga : ");
	scanf("%f", &tinggi);
	
	miring = sqrt ((alas*alas)+(tinggi*tinggi));
	
	printf("Panjang sisi miring segitiga siku-siku adalah %.2f cm\n", miring);

	return 0;
}
