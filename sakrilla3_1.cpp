#include <stdio.h>
#include <math.h>

int main(){
	int alas, tinggi;
	float luas, keliling;

	printf("Masukkan panjang alas segitiga : ");
	scanf("%d", &alas);
	
	printf("Masukkan panjang tinggi segitiga : ");
	scanf("%d", &tinggi);
	
	luas = 0.5 * alas * tinggi;
	printf("Luasnya adalah %2.f\n ", luas);
	
	keliling = 3*alas;
	printf("Kelilingnya adalah %2.f\n", keliling);

	return 0;
}
