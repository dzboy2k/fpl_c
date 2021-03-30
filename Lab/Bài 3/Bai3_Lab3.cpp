#include <stdio.h>
int main () {
	printf ("Nhap so dien tieu thu hang thang: ");
	int sodien ;
	scanf ("%d",&sodien);
	int m1=1678*sodien;
	int m2=1678*50+(sodien-50)*1734;
	int m3=1678*50+50*1734+(sodien-100)*2014;
	int m4=1678*50+50*1734+100*2014+(sodien-200)*2536;
	int m5=1678*50+50*1734+100*2014+100*2536+(sodien-300)*2834;
	int m6=1678*50+50*1734+100*2014+100*2536+100*2834+2927*(sodien-400);
	if (sodien<=50){
		printf ("Tien phai dong: %d ",m1);
		}
	else if (sodien>=50){
		printf ("Tien phai dong: %d ",m2);
		}
	else if (sodien>=100){
		printf ("Tien phai dong: %d ",m3);
		}
	else if (sodien>=200){
		printf ("Tien phai dong: %d ",m4);
		}
	else if (sodien>=300){
		printf ("Tien phai dong: %d ",m5);
		}
	else if (sodien>=400){
		printf ("Tien phai dong: %d ",m6);
		}
	return 0;
}
