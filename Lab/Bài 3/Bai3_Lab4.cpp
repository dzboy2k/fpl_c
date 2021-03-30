#include <stdio.h>
#include<math.h>
void Bai1 (){
	float a;
	printf ("Nhap vao diem cua sinh vien: ");
	scanf ("%f",&a);
	if (a>=9){
		printf ("Hoc sinh xuat sac");
	}
	else if (a>=8){
		printf ("Hoc sinh gioi");
	}
	else if (a>=6.5){
		printf ("Hoc sinh kha");
	}
	else if (a>=5){
		printf ("Hoc sinh trung binh");
	}
	else if (a>=3.5){
		printf ("Hoc sinh yeu");
	}
	else {
		printf ("Hoc sinh kem");
	}
}

void Bai2 (){
	int a;
	printf ("Nhap he so a: ");
	scanf ("%d",&a);
	int b;
	printf ("Nhap he so b: ");
	scanf ("%d",&b);
	int c=-b/a;
	if (a==0&&b==0){
		printf ("Phuong trinh co vo so nghiem");
	}
	else if (a==0&&b!=0){
		printf ("Phuong trinh vo nghiem");
	}
	else {
		printf ("Phuong trinh co nghiem: x=%d",c);
	}
}

void Bai3 () {
	int a;
	printf ("Nhap he so a: ");
	scanf ("%d",&a);
	int b;
	printf ("Nhap he so b: ");
	scanf ("%d",&b);
	int c;
	printf ("Nhap he so c: ");
	scanf ("%d",&c);
	double delta;
	delta=pow(b,2)-4*a*c;
	float x1,x2 ;
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
	float x;
	x=-b/(2*a);
	if(delta>0){
		printf("Phuong trinh co nghiem: X1=%.2f",x1);
		printf("\nPhuong trinh co nghiem: X2=%.2f",x2);
	}
	else if(delta==0){
		printf("Phuong trinh co nghiem kep:x=%.2f",x);
	}
	else {
		printf ("Phuong trinh vo nghiem");
	}
}

void Bai4() {
	int a;
	int b,c,d,e,f;
	b=1678*50+1734*(a-50);
	c=1678*50+1734*50+2014*(a-100);
	d=1678*50+1734*50+2014*100+2536*(a-200);
	e=1678*50+1734*50+2014*100+2536*100+2834*(a-300);
	f=1678*50+1734*50+2014*100+2536*100+2834*100+2927*(a-400);
	printf("Nhap vao so dien tieu thu hang thang: ");
	scanf("%d",&a);
	if (a<=50){
		printf("So tien phai dong:%d",1678*a);
	}
	else if (a<=100){
		printf("So tien phai dong:%d",b);
	}
	else if (a<=200){
		printf("So tien phai dong:%d",c);
	}
	else if (a<=300){
		printf("So tien phai dong:%d",d);
	}
	else if (a<=400){
		printf("So tien phai dong:%d",e);
	}
	else {
		printf("So tien phai dong:%d",f);
	}
}

int main (){
	char ChuongTrinh;
	printf ("Menu");
	printf ("\n1.Xep loai hoc sinh \n2.Giai phuong trinh bac 1 \n3.Giai phuong trinh bac 2 \n4.Tinh gia dien\n");
	printf ("Xin moi ban chon chuc nang: ");
	scanf ("%s",&ChuongTrinh);
	switch (ChuongTrinh) {
		case '1':
			Bai1 ();
			break;
		
		case '2':
			Bai2 ();
			break;
		
		case '3':
			Bai3 ();
			break;
		
		case '4':
			Bai4();
			break;
	} 
}

	
