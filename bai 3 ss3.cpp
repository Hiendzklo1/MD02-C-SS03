#include<stdio.h>
int main(){
	float diemToan, diemVan, diemAnh, tongDiem, diemTrungBinh;
	printf("nhap diem toan:");
	scanf("%f", &diemToan);
	
	printf("nhap diem van:");
	scanf("%f", &diemVan);
	
	printf("nhap diem anh:");
	scanf("%f", &diemAnh);
	tongDiem = diemToan + diemVan + diemAnh;
	diemTrungBinh = (diemToan + diemVan + diemAnh) / 3;
	printf("tong diem la:%.2f\n", tongDiem);
	printf("diem trung binh la:%.2f\n", diemTrungBinh);
}

