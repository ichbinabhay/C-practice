#include<stdio.h>
#include<math.h>
void hello(char a);
int main(){
     char a;
     hello(a);
}
void hello(char a){
    int i;
    for(i=0;i<5;i++){
        printf("HELLO WORLD\n");
    }
}