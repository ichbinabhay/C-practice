#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    void natural(int n);
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    natural(n);
}
 void natural(int n){
    int i;
    for(i=1;i<=n;i++){
        printf("%d\n",i);
    }
 }
