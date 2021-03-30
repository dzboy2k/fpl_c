#include<stdio.h>
#include<string.h>
int main(){
	char taiKhoan[100];
	char matKhau[100];
	printf("Moi ban nhap tai khoan: ");
	gets(taiKhoan);
	printf("Moi ban nhap mat khau: ");
	gets(matKhau);
	if(strcmp(taiKhoan,"DzBoy2K") == 0 && strcmp(matKhau,"Fpoly.Ph12649") == 0){
		printf("Ban da dang nhap thanh cong");
	}
	else{
		printf("Ban da dang nhap that bai");
	}
}
