#include<stdio.h>
#include<math.h>
int main(){
    int price[3],total,finalGst;
    int st,nd,rd;
    printf("enter price of 1st item:\n");
    scanf("%d", &price[0]);
    printf("price of 2nd item:\n");
    scanf("%d", &price[1]);
    printf("price of 3rd item is:\n");
    scanf("%d", &price[2]);
    total = price[0] + price[1] + price[2];
    st=(price[0]+(price[0]*0.18));
    nd=(price[1]+(price[1]*0.18));
    rd=(price[2]+(price[2]*0.18));
    finalGst = total + (total * 0.18);
    printf("total amount of 1st is %d\n",st);
    printf("total amount of 2nd is %d\n",nd);
    printf("total amount of 3rd is %d\n",rd);
    printf("total amount is: %d\n", total);
    printf("final amount with GST is: %d\n", finalGst);

    return 0;
    printf("")


}