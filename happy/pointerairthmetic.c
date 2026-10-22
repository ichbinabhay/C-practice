#include<stdio.h>
#include<math.h>
int main(){
    int age = 22;
    int _age = 23;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("%u,%u,difference = %u\n",ptr,_ptr,ptr-_ptr);
    _ptr = &age;//we are doing this to equate ptr and _ptr and then check in next statement whether they are equal or not
    printf("comparison = %u\n",ptr == _ptr);
    return 0;
}