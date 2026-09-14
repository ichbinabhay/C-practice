#include<stdio.h>
#include<math.h>
int main(){
    char alphabet;
    printf("enter the alphabet:");
    scanf("%s", &alphabet);

    if(alphabet>'A' && alphabet<'Z'){
        printf("upper case");
    }
    else if(alphabet>= 'a' && alphabet <='z'){
        printf("lower case");
    }     
    return 0;



    }

