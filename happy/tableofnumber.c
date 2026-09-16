#include<stdio.h>
#include<math.h>
int main(){
    int i;
    printf("enter the number");
    scanf("%d",&i);

    for(int n=1;n<=10;n++){
        printf("%d\n", i*n);
    }
    return 0;
}