#include <stdio.h>
int main () {
	int min,max;
	int bienDem=0;
	int tong=0;
	printf ("Nhap vao min: ");
	scanf ("%d",&min);
	printf ("Nhap vao max: ");
	scanf ("%d",&max);
	int i=min;
	while (i<max){
		if(i%2==0){
			tong+=i;
			bienDem++;
			}
			i++;
		}
	float trungBinh = tong/bienDem;
	printf("Trung binh cong cac so chia het cho 2 tu %d toi %d la: %.2f",min,max,trungBinh);
	return 0;
}
