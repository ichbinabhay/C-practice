#include<stdio.h>
#include<math.h>
int main(){
    int i;
    printf("Enter the number:");
    scanf("%d \n",&i);
    if(i>=0){
        while(i<1000){
            printf("%d \n",i);
            i++;
        } 
        

    }else{
        printf("invalid number");

    }
    return 0;


}