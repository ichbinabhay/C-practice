#include<stdio.h>
#include<math.h>
int main(){
    int roll,percentage,income;
    char name;
    printf("enter name of student:\n");
    scanf("%s",&name);
    printf("enter the roll no. of student:\n");
    scanf("%d",&roll);
    printf("enter the percentage:\n");
    scanf("%d",&percentage);
    printf("enter the income:\n");
    scanf("%d",&income);
    if(percentage>=85){
        printf("criteria 1 is approved\n");
        if(income<=250000){
            printf("citeria 2 is approved\n");
            printf("!!CONGRATULATIONS YOU ARE ELLIGIBLE FOR THE SCHOLARSHIP!!");

        }else{
            printf("criteria 2 is not appproved\n");
            printf("!!SORRY YOU ARE NOT ELLIGIBLE FOR THE SCHOLARSHIP!!");
            
        }
    }
    else if(percentage<85){
        printf("criteria 1 is not approved\n");
        printf("!!SORRY YOU ARE NOT ELLIGIBLE FOR THE SCHOLARSHIP!!");
    }
    else{
        printf("invalid inputs");
    }
    return 0;

}