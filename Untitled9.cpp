#include <stdio.h>

int main(){
	int a,b,c,d ,i;
	for(i=100;i<1000;i++){
		a=i/100;
		b=(i/10)%10;
		c=i%10; 
		d=a*a*a+b*b*b+c*c*c;
		if(d==i){
			printf("%d\n", d); 
		}		
	} 
	return 0; 
} 
