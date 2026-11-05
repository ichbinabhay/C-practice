#include<stdio.h>
#include<math.h>
void printString(char arr[]); 
int main(){
    char firstName[]="SHRADHA";
    char lastName[]="KHAPARA";
    printString(firstName);
    printString(lastName);
    return 0;
}
void printString(char arr[]){
    for(int i=0;arr[i] !='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}