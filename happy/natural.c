#include<stdio.h>
#include<math.h>
int main(){
    int number;
    printf("enter number");
    scanf("%d", &number);

    if(number>0){
        printf("it is a natural number");
    }else {
        printf("it is not a natural number");

    }
    return 0;

    
}