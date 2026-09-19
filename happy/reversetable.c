#include<stdio.h>
#include<math.h>
int main(){
    int i;
    printf("enter the number:");
    scanf("%d\n",&i);

    int product;
    for(int n=10;n>=1;n--){
        product=i*n;

        printf("%d\n",product);

        
    }
    return 0;
    
}