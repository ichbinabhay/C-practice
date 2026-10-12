#include<stdio.h>
#include<math.h>
int main(){
    int percentage,fine,book;
    char name,ID;
    printf("enter students name:\n");
    scanf("%s",&name);
    printf("enter student ID:\n");
    scanf("%s",&ID);
    printf("enter students percentage:\n");
    scanf("%d",&percentage);
    printf("enter students library fine:\n");
    scanf("%d",&fine);
    if(percentage>=75){
        printf("condition 1 is passed\n");
        printf("checking 2nd condition\n");
        if(fine==0){
            printf("!!you are elligible for premium membership!!\n");
            printf("enter no. of books you want:\n");
            scanf("%d",&book);
            if(book<=10){
                printf("you can take %d books\n",book);

            }
            else{
                printf("you can't take %d books",book);

            }
        }
        else{
            printf("!!YOU ARE NOT ELLIGIBLE FOR PREMIUM MEMBERSHIP!!\n");
            printf("enter no. of books you want:\n");
            scanf("%d",&book);
            if(book<=5){
                printf("you can take %d books\n",book);

            }
            else{
                printf("you can't take %d books",book);

            }

        }

    }else{
        printf("!!YOU ARE NOT ELLIGIBLE FOR PREMIUM MEMBERSHIP!!\n");
        printf("enter no. of books you want:\n");
            scanf("%d",&book);
            if(book<=5){
                printf("you can take %d books\n",book);

            }
            else{
                printf("you can't take %d books",book);

            }
        
    }
    return 0;


}