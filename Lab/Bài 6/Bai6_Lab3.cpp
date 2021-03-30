#include<stdio.h>
int main(){
	printf("Nhap so phan tu mang a[n]= ");
	int n; scanf("%d",&n);
	int mang[n];
	int tong=0,j=0;
	for(int i=0;i<n;i++){
		printf("Nhap phan tu a[%d]: ",i); 
		scanf("%d",&mang[i]);
		}
	for(int i=0;i<n;i++){
		for(j=0;j<n;j++){
			int tg=0;
			if(mang[i]>mang[j]){
				tg=mang[i];
				mang[i]=mang[j];
				mang[j]=tg;
			}
		}
	}
	printf("Mang sau khi sap xep: \n");
	for(int i=0;i<n;i++){
		printf("Phan tu %d:%d \n",i,mang[i]);
	}
}
