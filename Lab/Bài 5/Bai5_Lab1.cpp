#include<stdio.h>
void soMax (){
	int a,b,c;
	printf("Nhap vao so a: ");
	scanf("%d",&a);	
	printf("Nhap vao so b: ");
	scanf("%d",&b);
	printf("Nhap vao so c: ");
	scanf("%d",&c);
	if (a>b&&a>c){
		printf("So lon nhat:%d",a);
	}
	else if (b>a&&b>c){
		printf("So lon nhat:%d",b);
	}
	else {
		printf("So lon nhat:%d",c);
	}
}

int main(){
	soMax();
	return 0;
}
