#include<stdio.h>
#include<math.h>
int main(){
    void factors(int n);
    int n;
    printf("Enter number\n:");
    scanf("%d",&n);
    factors(n);
}
void factors(int n){
    int i,count=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\t",i);
        }
    }
}