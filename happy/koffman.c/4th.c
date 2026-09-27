#include<stdio.h>
#include<math.h>
int main(){
    int side,area;
    printf("enter side of the square");
    scanf("%d",&side);
    printf("the side of square is %d\n",side);
    area=side*side;
    printf("area of square whose side is %d %d\n",side,area);
    return 0;

}