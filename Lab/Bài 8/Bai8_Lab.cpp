#include <stdio.h>
#include <string.h>
#include <conio.h>
	struct sinhVien {
		char mssv [50];
		char tenSV [50];
		char nganh [50];
		float dtb;
	}sv[50];


void nhapsv (sinhVien sv[], int n){
	
	for (int i = 0; i < n; i++){
		printf ("\nSinh vien %d:", i + 1);
		printf ("\nMSSV: ");
		fflush (stdin);
		gets (sv[i].mssv);
		
		printf ("\nHo va ten: ");
		fflush (stdin);
		gets (sv[i].tenSV);
		
		printf ("\nNganh hoc: ");
		fflush (stdin);
		gets (sv[i].nganh);
		
		printf ("\nDiem trung binh:");
		scanf ("%f", &sv[i].dtb);
	}
}

void xuatsv (sinhVien sv[], int n){
	printf ("\nThong tin sinh vien:\n");
	for (int i = 0; i < n; i++){
		
		printf ("\n%-10s\t%-15s\t%-15s\t%.0f\t", sv[i].mssv,sv[i].tenSV,sv[i].nganh,sv[i].dtb);
	}
	printf ("\n=============================================================\n");
}

void sapxep (sinhVien sv[], int n){
	sinhVien temp;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++ ){
			if (sv[i].dtb > sv[j].dtb){
				temp = sv [i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
}

void timkiem (sinhVien sv[], int n){
	char mssvf [50];
	printf ("\nNhap mssv can tim kiem: ");
	fflush (stdin);
	gets (mssvf);
	for (int i = 0; i < n; i++){
		if ( strcmp (mssvf, sv[i].mssv) == 0){
		printf ("\n%-10s\t%-20s\t%-15s\t%.0f\t", sv[i].mssv,sv[i].tenSV,sv[i].nganh,sv[i].dtb);
		}
			
	}
}

int main (){	
	int i, n;
	printf ("\nNhap so sinh vien muon them: ");
	scanf ("%d", &n);
	nhapsv (sv,n);
	xuatsv (sv,n);
	sapxep (sv,n);
	printf ("\nSap xep diem tang dan:\n");
	xuatsv (sv,n);
	timkiem (sv,n);
	
	
	
}
