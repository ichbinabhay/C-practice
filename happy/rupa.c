#include<stdio.h>
#include<math.h>
int main(){
    int units;
    float bill;
    printf("enter units used:\n");
    scanf("%d",&units);
    switch(units){
        case 100 :bill=200;
        printf("the total bill is %f",bill);
        break;
        case 101 ...150 :bill=200+((units-100)*0.60);
        printf("the total bill is %f",bill);
        break;
        case 151 ...200 :bill=200+50*0.60+((units-150)*0.50);
        printf("the total bill is %f",bill);
        break;
        default :
        if(units>200){
            bill=200+50*0.60+(50*0.50)+((units-200)*0.40);
        printf("the total bill is %f",bill);
        break;
        }else{
            printf("invalid");
            
        }


        
    }
}