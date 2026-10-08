#include<stdio.h>
#include<math.h>
int main(){
    char first,middle,last;
    int pennies,nickles,dimes,quarters,dollars,change,total_dollars,total_cents;
    printf("Type in your 3 initials and press return>");
    scanf("%c %c %c",&first,&middle,&last);
    printf("\n%c%c%c, please enter your coin information\n",first,middle,last);
    printf("Number of $ coins:");
    scanf("%d",&dollars);
    printf("number of quarters:");
    scanf("%d",&quarters);
    printf("number of dimes:");
    scanf("%d",&dimes);
    printf("number of nickels:");
    scanf("%d",&nickles);
    printf("number of pennies:");
    scanf("%d",&pennies);
    total_cents=100*dollars+25*quarters+10*dimes+5*nickles+pennies;
    total_dollars=total_cents/100;
    change=total_cents%100;
    printf("\n\n%c%c%c coin credit\nDollars:%d\nChange:%d cents\n",first,middle,last,total_dollars,change);
    return(0);
}