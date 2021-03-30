#include<stdio.h>
int main (){
	int so;
	int a=2;
	int b=0;
	printf ("Nhap so nguyen to X: ");
	scanf("%d",&so);
	do {
		if(so%a==0){
			b++;
		}
		a++;
	}
	while(so>a);
	if (b==0){
		printf("X la so nguyen to");
	}
	else {
		printf("X khong la so nguyen to");
	}
	return 0;
}
