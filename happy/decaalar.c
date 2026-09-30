#include<stdio.h>
#include<math.h>
int main(){
    int age=22;
    int *ptr=&age;
    //value
    printf("%d\n",age);
    printf("%p\n",*ptr);
    printf("%p\n",*(&age));
    return 0;

}