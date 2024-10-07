#include <stdio.h>

int main(){
	float c, f, r;

	printf("Masukkan derajat celcius yang ingin dikonversasikan  : ");
	scanf("%f", &c);
	
	f = c*9/5+32;
	r = c*4/5;
	
	printf("Hasilnya adalah %.2f \n", f);
	printf("Hasilnya adalah %.2f \n", r);
	
	return 0;
	
}
