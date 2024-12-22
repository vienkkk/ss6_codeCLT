#include <stdio.h>

int main() {
	int a,i;
	int tong=0; 
	while( i<5) {
		printf("nhap vao so le ");
		scanf("%d", &a);
		if(a%2!=0) {
			i++;
			tong+=a; 
		}
	}
printf("%d",tong); 
	return 0;
}
