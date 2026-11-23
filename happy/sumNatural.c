#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int natural(int n,int s);
    //int sum(int s);
    int n,s;
    printf("Enter number:");
    scanf("%d",&n);
    //natural(n);
    printf("sum is %d",natural(n,s));
}
 int natural(int n,int s){
    int i,p=0;
    for(i=1;i<=n;i++){
        printf("%d\n",i);
        p=p+i;
    }
    return(p);
 }
