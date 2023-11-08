#include<stdio.h>
int main(){
	int namSinh;
	printf("Nhap nam sinh cua ban : ");
	scanf("%d",&namSinh);
	int soTuoi = 2023 - namSinh;
	printf("Tuoi cua ban la: %d\n",soTuoi);
 if (soTuoi%2)
 printf("Tuoi cua ban la so le");
 else
 printf("Tuoi cua ban la so chan");
}
