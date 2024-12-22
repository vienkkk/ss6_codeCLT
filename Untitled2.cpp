#include <stdio.h>

int main() {
	int a,i;
	int sole=0; 
	int sochan=0; 
	while( i<5) {
		printf("nhap vao so ");
		scanf("%d", &a);
		if(a%2!=0) {
			sole+=1; 
		}else{
			sochan+=1; 
		} 
		i++; 
	}
printf("co %d so le ",sole); 
printf("co %d so chan ",sochan); 
	return 0;
}
