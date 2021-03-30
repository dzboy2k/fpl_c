#include <stdio.h>
int main () {
	double a;
	double b;
	double c;
	printf ("Toan: ");
	scanf ("%lf",&a);
	printf ("Ly: ");
	scanf ("%lf",&b);
	printf ("Hoa: ");
	scanf ("%lf",&c);
	printf ("Diem trung binh: %lf ",(a*3+b*2+c)/5);
	return 0;
}
