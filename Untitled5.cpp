#include <stdio.h>

int main() {
	int nam,thang;
	printf("nhap nam ");
	scanf("%d",&nam);
	printf("nhap thang ");
	scanf("%d",&thang);
	switch(thang) {
case1:
			printf("thang 1 co 31 ngay") ;
		case 2:
			if(nam%4==0&&nam%100!=0||nam%400==0) {
				printf("thang 2 co 28 ngay");
				break;
			}
			printf("thang 2 co 30 ngay");
			break;
		case 3:
			printf("thang 1 co 31 ngay") ;
			break;
		case 4:
			printf("thang 1 co 30 ngay") ;
			break;
		case 5:
			printf("thang 1 co 31 ngay") ;
			break;
		case 6:
			printf("thang 1 co 30 ngay") ;
			break;
		case 7:
			printf("thang 1 co 31 ngay") ;
			break;
		case 8:
			printf("thang 1 co 31 ngay") ;
			break;
		case 9:
			printf("thang 1 co 30 ngay") ;
			break;
		case 10:
			printf("thang 1 co 31 ngay") ;
			break;
		case 11:
			printf("thang 1 co 30 ngay") ;
			break;
		case 12:
			printf("thang 1 co 31 ngay") ;
			break;
		default:
			printf("khong hop le");
	}
	return 0;
}
