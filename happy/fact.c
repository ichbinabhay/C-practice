#include<stdio.h>
#include<math.h>
int factorial(int p);
int main(){
    printf("factorial of %d\n",factorial(8));

}
int factorial(int p){
    if(p==0){
        return 1;
    }
    int num1=factorial(p-1);
    int num=num1*p;

}