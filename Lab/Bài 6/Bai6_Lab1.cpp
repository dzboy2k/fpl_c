#include<stdio.h>
int main(){
	printf("Nhap so phan tu mang a[n]= ");
	int n; scanf("%d",&n);
	int mang[n];
	int tong=0,j=0;
	for(int i=0;i<n;i++){
		printf("Nhap phan tu a[%d]: ",i); scanf("%d",&mang[i]);
		if (mang[i]%3==0){
			tong+=mang[i];
			++j;
		}
	}
	float tb=(float)tong/j;
	printf("%.2f",tb);
}

