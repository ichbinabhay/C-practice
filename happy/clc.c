#include<stdio.h>
#include<math.h>
float summation(float marks);
int main(){
    float sum=summation(278);
    printf("percentage is %f\n",sum);
    return 0;
}
float summation(float marks){
    float sum=(marks/300)*100;
    return sum;
}


