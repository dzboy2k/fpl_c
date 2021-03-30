#include <stdio.h>
#include  <math.h>
int main (){
	printf ("Nhap a: ");
	float a;
	scanf ("%f",&a);
	printf ("Nhap b: ");
	float b;
	scanf ("%f",&b);
	printf ("Nhap c: ");
	float c;
	scanf ("%f",&c);
    double delta = pow(b,2)-4*a*c;
    float m1= (-b + sqrt(delta))/(2*a);
	float m2=(-b- sqrt(delta) )/(2*a);
	float m3= -b/(2*a);
	if (delta>0){
		printf("X1=%.2f",m1);
		printf("\nX2=%.2f",m2);
	}
	else if (delta==0){
		printf("X=%.2f",m3);
	}
		else if (delta<0){
		printf("Phuong trinh vo nghiem");
	}
	return 0;
}


	
