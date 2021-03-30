#include<stdio.h>
void hoanVi(int *a,int *b){
	int hoanDoi=*a;
	*a=*b;
	*b=hoanDoi;
}

int main(){
	int a,b;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	printf("Truoc hoan doi, gia tri cua a=%d",a);
	printf("\nTruoc hoan doi, gia tri cua b=%d",b);
	hoanVi(&a,&b);
	printf("\nSau hoan doi, gia tri cua a=%d",a);
	printf("\nSau hoan doi, gia tri cua b=%d",b);
}
