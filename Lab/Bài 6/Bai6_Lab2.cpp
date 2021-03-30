#include<stdio.h>
int main(){
	printf ("Moi ban nhap so phan tu mang[n]: ");
	int n=0; scanf("%d",&n);
	int mang[n];
	for(int i=0;i<n;i++){
		printf("Moi ban nhap phan tu mang[%d]: ",i); 
		scanf("%d",&mang[i]);
	}
	int max=0, min=mang[0];
	for(int i=0;i<n;i++){
		if(mang[i]>max){
			max=mang[i];
		}
		if(mang[i]<min){
			min=mang[i];
		}
	}
	printf("Gia tri lon nhat:%d\n",max);
	printf("Gia tri nho nhat:%d ",min);
}
