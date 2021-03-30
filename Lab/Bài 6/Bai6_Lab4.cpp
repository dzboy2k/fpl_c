#include<stdio.h>
int main(){
	printf("Moi ban nhap so cot cua mang: ");
	int m; scanf("%d",&m);
	printf("Moi ban nhap so hang cua mang: ");
	int n; scanf("%d",&n);
	int mang[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Nhap gia tri cho mang[%d][%d]: ",i,j); 
			scanf("%d",&mang[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for (int j=0;j<n;j++){
			printf("Xuat mang binh phuong:%d  ",mang[i][j]*mang[i][j]);
		}
		printf("\n");
	}
}
