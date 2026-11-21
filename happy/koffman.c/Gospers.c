#include<stdio.h>
#include<math.h>
int main(){
    float f,n,e=2.7182,l;
    printf("Enter n:");
    scanf("%f",&n);
    l=((1/3.0)+2*n)*3.1412;
    f=pow(n,n)*pow(e,-n)*sqrt(l);
    printf("the factorial of %f is %f ",n,f);
}