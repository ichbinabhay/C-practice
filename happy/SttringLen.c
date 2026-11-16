#include<stdio.h>
#include<math.h>
int countLength(char arr[]);
int main(){
    char name[100]; 
    printf("Enter Name of user");
    fgets(name,100,stdin);
    puts(name);
    printf("Length is %d",countLength(name));
    return 0;
}
int countLength(char arr[]){
    int count=0;
    for(int i=0;arr[i] !='\0';i++){
        count++;
       
    }
   return count-1;


}