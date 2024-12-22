#include <stdio.h>
#include <math.h>

int main() {
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	if(n<2) {
		printf("khong phai la so nguyen to\n");
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			printf("khong phai la so nguyen to\n");
			break;
		}
	}

	printf("la so nguyen to\n");

	return 0;
}

