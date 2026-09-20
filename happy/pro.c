#include<stdio.h>
#include<math.h>
int product(int x,int y);
int main(){
    int a,b;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);


    int p=product(a,b);
    printf("product is %d\n",p);

   return 0; 
}

int product(int x,int y){
    return x*y;
}