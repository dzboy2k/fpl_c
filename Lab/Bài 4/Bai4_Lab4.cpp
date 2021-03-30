#include<stdio.h>
void Bai1 (){
	int min,max;
	int tong;
	int b=0;
	printf ("Nhap vao min: ");
	scanf ("%d",&min);
	printf ("Nhap vao max: ");
	scanf ("%d",&max);
    for(tong=0;min<max;min++){
    	if(min%2==0){
    		tong+=min;
    		b++;
		}
	}
	float c=tong/b;
	printf("Tong cac so chia het cho 2 tu min den max la:%.2f",c);
}

void Bai2(){
	int a;
	int b;
	int c=0;
	printf ("Nhap so X: ");
	scanf ("%d",&a);
	for(b=2;b<a;b++){
		if(a%b==0){
			c++;
		}
	}
	if(c==0){
		printf("X la so nguyen to");
	}
	else {
		printf ("X khong la so nguyen to");
	}
}

void Bai3 () {
	int a;
	int b;
    printf ("Nhap so X: ");
	scanf("%d",&a);
	for(b=1;b<a;b++){
		if(b*b==a){
			printf ("X la so chinh phuong");
			break;
		}
	}
}

int main (){
	int a;
	printf ("Chuc nang 1: Tim trung binh tong");
	printf ("\nChuc nang 2: Tim so nguyen to");
	printf ("\nChuc nang 3: Tim so chinh phuong");
	printf ("\nChuc nang 4: Thoat");
	printf ("\nXin moi chon chuc nawng (1,2,3,4): ");
	scanf ("%d",&a);
	switch (a){
		case 1:
			Bai1 ();
			break;
		case 2:
			Bai2();
			break;
		case 3:
			Bai3();
			break;
		case 4:
			printf("Thoat chuong trinh");
			break;
		default:
			printf ("Chuc nang 1: Tim trung binh tong");
	        printf ("\nChuc nang 2: Tim so nguyen to");
	        printf ("\nChuc nang 3: Tim so chinh phuong");
	        printf ("\nChuc nang 4: Thoat");
	        printf ("\nXin moi chon chuc nawng (1,2,3,4): ");
	}
}
