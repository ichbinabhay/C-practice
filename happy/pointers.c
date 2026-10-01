#include<stdio.h>
#include<math.h>
int main(){
    int age=22;
    int *ptr=&age;
    int _age=*ptr;
    printf("%p\n",*ptr);
    printf("%d\n",_age);
    return 0;



    
}