#include <stdio.h>

int main(void){
    int n, ans;
    int i, sum = 1;
    do {
        printf("Input value : ");
        scanf("%d", &n);
        if(n < 1 || n > 12){
            printf("ERROR : Invalid value.\n");
        }
    }while (n < 1 || n > 12);
    while(i <= n){
        sum *= i;
        i++;
    }   
    printf("%d! = %d\n",n,sum);
}