#include<stdio.h>
#include<string.h>
int main(){
    char password[100];
    char salt[]="baby";
    gets(password);
    strcat(password,salt);
    puts(password);

    
}