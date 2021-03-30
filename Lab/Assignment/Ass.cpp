#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void bai1_kiemTraSoNguyen1();
void bai2_timUSC_BSC2();
void bai3_karaoke3();
void bai4_tinhTienDien4();
void bai5_doiTien5();
void bai6_nganHang6();
void bai7_vayTien7();
void bai8_sinhVien8();
void bai9_polyLott9();
void bai10_phanSo10();

int main(){
	int ct;
	printf("---------------Assignment Nhap mon lap trinh---------------\n");
	printf("\t1.Kiem tra so nguyen \n");
	printf("\t2.Tim uoc so chung v� boi so chung cua 2 so \n");
	printf("\t3.Chuong trinh tinh tien cho quan Karaoke \n");
	printf("\t4.Tinh tien dien \n");
	printf("\t5.Chuc nang doi tien \n");
	printf("\t6.Xay dung chuc nang tinh lai suat vay ngan h�ng vay tra gop\n");
	printf("\t7.Xay dung chuong trinh vay tien mua xe \n");
	printf("\t8.Sap xep thong tin sinh vien \n");
	printf("\t9.Xay dung game FPOLY-LOTT (2/15) \n");
	printf("\t10.Xay dung chuong trinh tinh toan phan so \n");
	printf("-------------------------------------------------------------\n");
	printf("\tMoi ban nhap so thu tu chuc nang: ");
	scanf("%d",&ct);
	switch(ct){
		case 1:
			bai1_kiemTraSoNguyen1();
			break;
		case 2:
			bai2_timUSC_BSC2();
			break;
		case 3:
			bai3_karaoke3();
			break;
		case 4:
			bai4_tinhTienDien4();
			break;
		case 5:
			bai5_doiTien5();
			break;
		case 6:
			bai6_nganHang6();
			break;
		case 7:
			bai7_vayTien7();
			break;
		case 8:
			bai8_sinhVien8();
			break;	
		case 9:
			bai9_polyLott9();
			break;
		case 10:
			bai10_phanSo10();
			break;
		default:
		printf("Ban da nhap khong dung, moi ban nhap lai");					
	}
	return 0;
}

void bai1_kiemTraSoNguyen1(){
	int x;
	printf("\nChuong trinh kiem tra so");
	printf("\nMoi ban nhap 1 so x= ");
	scanf("%d",&x);
	if(x==(int)x){
		printf("\nX la so nguyen");
		bool nt=true;
		for(int i=2;i<x;i++)
		{
			if(x%i==0){
				nt==false;
				break;
			}
		}
		if(nt==true){
			printf("\nX la so nguyen to");
		}
		else{
			printf("\nX khong la so nguyen to");
		}
		int i=0;
		bool cp=false;
		while(i*i<x)
		{
			++i;
			if(i*i==x){
				cp=true;
			}
		}
		if(cp==true){
			printf("\nX la so chinh phuong");
		}
		else{
			printf("\nX khong la so chinh phuong");
		}
	}
}

void bai2_timUSC_BSC2(){
	int a,b;
	printf("Moi ban nhap vao so: a= "); scanf("%d",&a);
	printf("Moi ban nhap vao so: b= "); scanf("%d",&b);
	int m=a*b;
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
	}
	printf("USCLN la: %d",a);
	printf("\nBSCNN la: %d",m/a);
}

void bai3_karaoke3(){
	int batDau, ketThuc, tien=0, tongGio;
	printf("Moi ban nhap gio bat dau: "); scanf("%d",&batDau);
	printf("Moi ban nhap gio ketThuc: "); scanf("%d",&ketThuc);
	if((batDau<12)||(batDau>23)||(ketThuc<12)||(ketThuc>23)){
		printf("Gio nhap vao khong dung, moi ban nhap lai gio bat dau: "); scanf("%d",&batDau);
		printf("Gio nhap vao khong dung, moi ban nhap lai gio ket thuc: "); scanf("%d",&ketThuc);
	}
	if((batDau>=12)&&(batDau<=23)&&(ketThuc>=12)||(ketThuc<=23)){
		tongGio=ketThuc-batDau;
		if(tongGio<=3){
			tien=tongGio*150000;
		}
		else {
			tien=3*150000+(tongGio-3)*0.7*150000;
			if((batDau==12)&&(ketThuc=17)){
				tien=tien*0.9;
			}
		}
	}
	printf("Tong tien hat Karaoke la:%d",tien);
}

void bai4_tinhTienDien4(){
	double soKWH;
	printf("Xin moi nhap vao so kwh: "); scanf("%lf",&soKWH);
	double tienDien;
	double bac1=1678;
	double bac2=1734;
	double bac3=2014;
	double bac4=2536;
	double bac5=2834;
	double bac6=2927;
	if (soKWH<=50){
		tienDien=soKWH*bac1;
	}else if(soKWH<=100){
		tienDien=50*bac1+(soKWH-50)*bac2;
	}
	else if(soKWH<=200){
		tienDien=50*bac1+50*bac2+(soKWH-100)*bac3;
	}
	else if(soKWH<=300){
		tienDien=50*bac1+50*bac2+100*bac3+(soKWH-200)*bac4;
	}	
	else if(soKWH<=400){
		tienDien=50*bac1+50*bac2+100*bac3+100*bac4+(soKWH-300)*bac4;
	}
	else {
		tienDien=50*bac1+50*bac2+100*bac3+100*bac4+100*bac5*(soKWH-400)*bac6;
	}
	printf("So tien dien phai tra la:%.0lf",tienDien);
}

void bai5_doiTien5(){
	int tien[9]={500,200,100,50,20,10,5,2,1};
	int soTien,to;
	printf("Nhap so tien can doi: "); scanf("%d",&soTien);
	for(int i=0;i<9;i++){
		to=soTien/tien[i];
		if(to!=0){
			printf("%d to %d\n",to,tien[i]);
		}
		soTien=soTien-to*tien[i];
		if(soTien==0) break;
	}
}

void bai6_nganHang6(){
	double tienMuonVay;
	printf("Chao mung den voi cong ty Song Long!!!!\n");
	printf("Co vay phai co tra!!!\n");
	printf("Quy khach muon vay bao nhieu: "); scanf("%lf",&tienMuonVay);
	double tongTien;
	int kyHan=12;
	double laiSuat=0.05;
	double tienLaiHangThang;
	double tienGocHangThang=tienMuonVay/kyHan;
	double tongTienHangThang;
	int i;
	for(i=1;i<=kyHan;i++){
		tienLaiHangThang=tienMuonVay*laiSuat;
		tongTienHangThang=tienLaiHangThang+tienGocHangThang;
		tongTien+=tongTienHangThang;
		tienMuonVay=tienMuonVay-tienGocHangThang;
		printf("So tien can tra trong thang: %d\n",i);
		printf ("%.0lf\t%.0lf\t%.0lf\t%.0lf\n",tienLaiHangThang,tienGocHangThang,tongTienHangThang,tienMuonVay);
	}
	printf("Tong tien quy khach phai tra sau 12 thang la:%.2lf VND",tongTien);
}

void bai7_laiSuat7(int tienVay){
	int nam=1;
	int tienLai;
	int tienGoc = tienVay/288;
	int tienTra;
	int tienCon;
	tienCon=tienVay;
	printf("Ky han | Lai phai tra | Goc phai tra | So tien phai tra | So tien con lai| \n");
	for(int i=1; i<=288;i++){
		tienLai=tienCon*0.06;
		tienTra=tienGoc+tienLai;
		tienCon=tienCon-tienGoc;
		printf("------------------------------------------------------------------------\n");
		printf("%6d | ", i);
		printf("%12d | ",tienLai);
		printf("%12d | ",tienGoc);
		printf("%16d | ",tienTra);
		printf("%15d | ",tienCon);
		printf("\n");
		if(i%12==0){
			nam++;
			printf("//==========================Ket thuc %d nam========================\n",nam);
			printf("\n");
		}
	}
}
void bai7_vayTien7(){
	printf("Chuong trinh tra gop mua xe\n");
	printf("Nhap so tien mua xe: ");
	int tienXe; scanf("%d",&tienXe);
	int tienVay=0;
	int tienTraTruoc=0;
	tienTraTruoc=tienXe*0.2;
	tienVay=tienXe*0.8;
	
	if(tienVay>500000){
		tienVay=500000;
		tienTraTruoc=tienXe-tienVay;
		bai7_laiSuat7(tienVay);
		printf("So tien vay cua ban vuot muc han quy dinh\n");
		printf("Tien tra truoc: %d\n",tienTraTruoc);
		printf("Tien vay: %d\n",tienVay);
	}
	else {
		bai7_laiSuat7(tienVay);
		printf("So tien vay cua ban vuot muc han quy dinh\n");
		printf("Tien tra truoc: %d\n",tienTraTruoc);
		printf("Tien vay: %d\n",tienVay);
	}
}

void bai8_sinhVien8(){
	struct sinhVien{
		char hoTen[50];
		float diemTB;
	};
	struct sinhVien dsSV[5];
	int i;
	for(i=0;i<5;i++){
		printf("Nhap ho ten sinh vien thu %d: ",i+1);
		fflush(stdin);
		gets (dsSV[i].hoTen);
		printf("Nhap diem trung binh sinh vien thu %d: ",i+1);
		scanf("%f",&dsSV[i].diemTB);
		getchar();
	}
	int j;
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(dsSV[i].diemTB<dsSV[j].diemTB){
				float tg=dsSV[i].diemTB;
				dsSV[i].diemTB=dsSV[j].diemTB;
				dsSV[j].diemTB=tg;
				
				char tenTg [50];
				strcpy(tenTg,dsSV[i].hoTen);
				strcpy(dsSV[i].hoTen,dsSV[j].hoTen);
				strcpy(dsSV[j].hoTen,tenTg);
			}
		}
	}
	printf("Danh sach sinh vien!\n");
	for(i=0;i<5;i++){
		printf("Ho ten: %s\n",dsSV[i].hoTen);
		printf("diem trung binh: %f\n",dsSV[i].diemTB);
		if(dsSV[i].diemTB>=9){
			printf("Hoc luc xuat sac\n");
		}
		else if(dsSV[i].diemTB>=8){
			printf("Hoc luc gioi\n");
		}
		else if(dsSV[i].diemTB>=6.5){
			printf("Hoc luc kha\n");
		}
		else if(dsSV[i].diemTB>=5){
			printf("Hoc luc trung binh\n");
		}
		else {
			printf("Hoc luc yeu\n");
		}
	}
}

void bai9_polyLott9(){
	int so1,so2;
	printf("Moi nhap so 1: "); scanf("%d",&so1);
	printf("Moi nhap so 2: "); scanf("%d",&so2);
	int count=0;
	srand((int) time(0));
	int ketQua[2];
	for(int i=0;i<2;i++){
			int kq = rand()%15+1;
			ketQua[i]=kq;
	}
	for(int i=0;i<2;i++){
		if(so1==ketQua[i]){
			count++;
		}
		if(so2==ketQua[i]){
			count++;
		}
	}
	printf("Ket qua xo so hom nay la:\n");
	printf("So 1=%d\n",ketQua[0]);
	printf("So 2=%d\n\n",ketQua[1]);
	if(count==2){
		printf("Xin chuc mung ban da trung giai dac biet!\n");
		printf("Gia tri giai thuong: 65 ti VND\n");
	}
	else if(count==1){
		printf("Xin chuc mung ban da trung giai nhat!\n");
		printf("Gia tri giai thuong: 500 trieu VND\n");
	}
	else{
		printf("Chuc ban may man lan sau!\n");
	}
}

void bai10_phanSo10(){
	struct phanSo{
		int tuSo;
		int mauSo;
	};
	struct phanSo so1,so2;
	printf("Xin moi nhap vao phan so thu 1: ");
	scanf("%d%d",&so1.tuSo,&so1.mauSo);
	printf("Xin moi nhap vao phan so thu 2: ");
	scanf("%d%d",&so2.tuSo,&so2.mauSo);
	
	struct phanSo tong,hieu,tich,thuong;
	tich.tuSo=so1.tuSo*so2.tuSo;
	tich.mauSo=so1.mauSo*so2.mauSo;
	thuong.tuSo=so1.tuSo*so2.mauSo;
	thuong.mauSo=so1.mauSo*so2.tuSo;
	tong.mauSo=so1.mauSo*so2.mauSo;
	tong.tuSo=so1.tuSo*so2.mauSo+so2.tuSo*so1.mauSo;
	hieu.mauSo=so1.mauSo*so2.mauSo;
	hieu.tuSo=so1.tuSo*so2.mauSo-so2.tuSo*so1.mauSo;
	
	printf("Tong hai phan so: %d/%d\n",tong.tuSo,tong.mauSo);
	printf("Hieu hai phan so: %d/%d\n",hieu.tuSo,hieu.mauSo);
	printf("Tich hai phan so: %d/%d\n",tich.tuSo,tich.mauSo);
	printf("Tong hai phan so: %d/%d\n",thuong.tuSo,thuong.mauSo);
}

