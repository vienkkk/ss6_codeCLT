#include <stdio.h>
#include <math.h>

int main() {
	printf("phuong trinh bac 2 co dang ax^2 + bx + c=0");
	int a,b,c;
	printf("\nNhap a ");
	scanf("%d", &a);
	printf("\nNhap b ");
	scanf("%d", &b);
	printf("\nNhap c ");
	scanf("%d", &c);
	float denta;
	denta =b*b-4*a*c;
	float x1,x2; 
	if(denta<0) {
		printf("pt vo nghiem");
	}else if(denta=0) {
		printf("pt co nghiem kep\n");
		x1=-b/2*a;
		printf("x1=x2 %.2f",x1);
	}else {
		printf("pt co 2 nghiem\n");
		x1=(-b+sqrt(denta))/2*a;
		x2=(-b-sqrt(denta))/2*a;
		printf("x1= %.2f\n",x1);
		printf("x2= %.2f\n",x2);
	}

	return 0;
}
