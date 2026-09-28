#include<stdio.h>
#include<math.h>
int main(){
    int chocolate,oatmeal,cookies,x,y,N;
    printf("Enter chocolate per teacher:");
    scanf("%d",&x);
    printf("Enter oatmeal per teacher:");
    scanf("%d",&y);
    cookies=((25*x)+(25*y));
    N=cookies/6;
    printf("enter total cookies are %d\n",cookies);
    printf("enter total no. of boxes are %d\n",N);
    return 0;
}
