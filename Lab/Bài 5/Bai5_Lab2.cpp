#include<stdio.h>
void namNhuan(){
	int nam;
	printf("NHap vao nam: ");
	scanf("%d",&nam);
	if(nam%400==0){
			printf("Nam %d la nam nhuan",nam);
		}
	if(nam%4==0&&nam%100!=0){
		    printf("Nam %d la nam nhuan",nam);
	}
	else {
		printf("Nam %d khong la nam nhuan",nam);
	}
}

int main(){
	namNhuan();
}
