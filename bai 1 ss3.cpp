#include<stdio.h>
int main(){
	float r;
	printf("nhap ban kinh hinh tron:");
	scanf("%f", &r);
	float PI = 3.14;
	float d = 2*PI*r;
	float a = PI*r*r;
	printf("chu vi hinh tron la:%.2f\n", d);
	printf("dien tich hinh tron la:%.2f\n", a);
}
