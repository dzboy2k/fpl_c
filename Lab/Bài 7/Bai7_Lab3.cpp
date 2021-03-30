#include<stdio.h>
#include<string.h>
char s[5][20];
char t[100];
int main(){
	printf("Nhap xau ky tu \n");
	for(int i=0;i<5;i++){
		printf("Xau[%d]: ",i);
		scanf("%s",s[i]);
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(strcmp(s[j-1],s[j])>0){
				strcpy(t,s[j-1]);
				strcpy(s[j-1],s[j]);
				strcpy(s[j],t);
			}
		}
	}
	printf("\nXau sau khi sap xep tu A-Z");
	for(int i=0;i<5;i++){
		printf("\nXau[%d]: %s",i, s[i]);
	}
}
