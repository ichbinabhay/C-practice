#include<stdio.h>
#include<math.h>
int main(){
    printf("%d\n",4!=4);
    printf("%d\n",4==4);
    printf("%d\n",6>4 && 5>2);
    printf("%d\n",5>3 && 7>10);
    printf("%d\n",6>5 && 8>18);
    printf("%d\n",6>5 && 5>3);
    printf("%d\n",5>2 && 3>1);
    printf("%d\n",8>9 && 9>10);
    printf("%d\n",!((5>1) && (3>4)));  
    return 0;
}