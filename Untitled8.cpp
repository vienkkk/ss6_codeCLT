#include <stdio.h>
#include <math.h> 

int main() {
    float tienbandau, laisuat, lai, tong;
    int time; 
    printf("Tien gui: ");
    scanf("%f", &tienbandau);
    
    printf("Lai suat (theo thang, vd: 0.01 cho 1%%): ");
    scanf("%f", &laisuat);
    
    printf("So thang gui: ");
    scanf("%d", &time);

    lai = tienbandau * laisuat * time;
    tong = tienbandau + lai;
    
    printf("\nSo tien lai sau %.0f thang: %.2f\n", time, lai);
    printf("Tong so tien nhan duoc: %.2f\n", tong);
    
    return 0;
}

