#include<stdio.h>
int main (){
	float x;
	printf("Nhap so X: "); scanf("%f",&x);
	int i=0;
	bool cp=false;
	while(i*i<x){
		++i;
		if(i*i==x){
		cp=true;
		}
	}
	if(cp==true){
		printf("X la so chinh phuong");
		}
	else{
		printf("X khong la so chinh phuong");
	}
}

