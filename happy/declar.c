#include<stdio.h>
#include<math.h>
int main(){
    int age=22;
    int*ptr=&age;

    //address
    printf("%p\n",&age);
    printf("%u\n",&age);

    return 0; 
}



//printf("%p",&age); give adrees of age
//printf("%p",ptr); give stored value of ptr 
//printf("%p",&ptr); give adreess of ptr 