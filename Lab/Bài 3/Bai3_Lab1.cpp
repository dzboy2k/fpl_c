#include <stdio.h>
int main () {
	double a;
	printf ("Nhap vao diem cua ban: ");
	scanf ("%lf", &a);
	if (a>=9){
		printf ("Hoc luc xuat sac");
	}
	else if(a>=8){
		printf ("Hoc luc gioi");
	}
	else if (a>=6.5){
		printf ("Hoc luc kha");
	}
	else if (a>=5){
		printf ("Hoc luc trung binh");
	}
	else if (a>=3.5){
		printf ("Hoc luc yeu");
	}
	else {
		printf ("Hoc luc kem");
		}
	return 0;
	}
