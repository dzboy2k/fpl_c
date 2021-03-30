#include<stdio.h>
int main(){
	char chuoi[100];
	printf ("Xin moi nhap vao mot chuoi: ");
	gets(chuoi);
	int i=0;
	int n=0; //dem nguyen am
	int p=0; //dem phu am
	while(chuoi[i++]!='\0'){
		if(chuoi[i]=='a'||chuoi[i]=='e'||chuoi[i]=='i'||chuoi[i]=='u'||chuoi[i]=='o'){
			n++;
		}
		else{
			p++;
		}
	}
	printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.",chuoi, n, p); 
}
