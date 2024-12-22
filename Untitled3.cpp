#include <stdio.h>

int main(){
	int matkhau=123;
	int n;
	while(n!=matkhau){
		printf("nhap mat khau ");
		scanf("%d",&n);
		if(n==matkhau){
			break; 
		} 
	} 
	printf("dung"); 
	return 0; 
} 
