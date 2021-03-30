#include <stdio.h>
int main () {
	int a;
	int b;
	printf ("Chieu dai: ");
	scanf ("%d",&a);
	printf ("Chieu rong: ");
	scanf ("%d",&b);
	int chuvi = (a+b)*2;
	int dientich = a*b;
	printf ("Chu vi=%d",chuvi);
	printf ("\nDien tich=%d ",dientich);
	return 0;
}
