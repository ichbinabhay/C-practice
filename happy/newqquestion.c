#include<stdio.h>
#include<math.h>
int main(){
    int days,priceECOI,priceECOID,pricePECOID,pricePECOI,priceBC,priceBCD,priceFC,priceFCD,priceECOL,priceECOLD,pricePELD,pricePEL,priceBCLD,priceBCL,priceLFCD,priceLFC;
    char type,seat;
    printf("INTERNATIONAL-I,DOMESTIC-D,ECONOMY-E,PREMIUM ECONOMY-P,BUISNESS-B,FIRSTCLASS-F\n");
    printf("select flight type:\n");
    scanf("%c",&type);
    if(type=='I'){
        printf("Enter type of seat:\n");
        scanf("%s",&seat);
        if(seat=='E'){
            printf("Thank you for choosing economy flight\n");
            priceECOI=24600;
            printf("How many days before you are booking:\n");
            scanf("%d",&days);
            if(days>=30){
                priceECOID=priceECOI-(priceECOI)*0.2;
                printf("Discounted price for Economy in INTERNATIONAL flight is %d\n",priceECOID);
                
            }else{
                printf("price for Economy in INTERNATIONAL flight is %d\n",priceECOI);
            }
        }else if(seat=='P'){
            printf("Thank you for choosing Premium Economy flight\n");
            pricePECOI=27475;
            printf("How many days before you are booking:\n");
            scanf("%d",&days);
            if(days>=30){
                pricePECOID=pricePECOI-(pricePECOI)*0.2;
                printf("Discounted price for Economy in INTERNATIONAL flight is %d\n",pricePECOID);
                
            }else{
                printf("price for Economy in INTERNATIONAL flight is %d\n",pricePECOI);
            }
        }else if(seat=='B'){
            printf("Thank you for choosing BUisness class flight\n");
            priceBC=30600;
            printf("How many days before you are booking:\n");
            scanf("%d",&days);
            if(days>=30){
                priceBCD=priceBC-(priceBC)*0.2;
                printf("Discounted price for Economy in INTERNATIONAL flight is %d\n",priceBCD);
                
            }else{
                printf("price for Economy in INTERNATIONAL flight is %d\n",priceBC);
            }
        }else if(seat=='F'){
            printf("Thank you for choosing BUisness class flight\n");
            priceFC=33850;
            printf("How many days before you are booking:\n");
            scanf("%d",&days);
            if(days>=30){
                priceFCD=priceFC-(priceFC)*0.2;
                printf("Discounted price for Economy in INTERNATIONAL flight is %d\n",priceFCD);
                
            }else{
                printf("price for Economy in INTERNATIONAL flight is %d\n",priceFC);
            }
        }else{
            printf("!!!INVALID SEAT TYPE!!!\n");
        }
    }else if(type=='D'){
        printf("Enter type of seat:\n");
        scanf("%s",&seat);
        if(seat=='E'){
            printf("Thank you for choosing economy flight\n");
            priceECOL=3850;
            printf("How many days before you are booking:\n");
            scanf("%d",&days);
            if(days>=30){
                priceECOLD=priceECOL-(priceECOL)*0.2;
                printf("Discounted price for Economy in INTERNATIONAL flight is %d\n",priceECOLD);
                
            }else{
                printf("price for Economy in INTERNATIONAL flight is %d\n",priceECOL);
            }
        }else if(seat=='P'){
            printf("Thank you for choosing Premium Economy flight\n");
            pricePEL=4500;
            printf("How many days before you are booking:\n");
            scanf("%d",&days);
            if(days>=30){
                pricePELD=pricePEL-(pricePEL)*0.2;
                printf("Discounted price for Economy in INTERNATIONAL flight is %d\n",pricePELD);
                
            }else{
                printf("price for Economy in INTERNATIONAL flight is %d\n",pricePEL);
            }
        }else if(seat=='B'){
            printf("Thank you for choosing BUisness class flight\n");
            priceBC=5800;
            printf("How many days before you are booking:\n");
            scanf("%d",&days);
            if(days>=30){
                priceBCLD=priceBCL-(priceBCL)*0.2;
                printf("Discounted price for Economy in INTERNATIONAL flight is %d\n",priceBCLD);
                
            }else{
                printf("price for Economy in INTERNATIONAL flight is %d\n",priceBCL);
            }
        }else if(seat=='F'){
            printf("Thank you for choosing BUisness class flight\n");
            priceLFC=7000;
            printf("How many days before you are booking:\n");
            scanf("%d",&days);
            if(days>=30){
                priceLFCD=priceLFC-(priceLFC)*0.2;
                printf("Discounted price for Economy in INTERNATIONAL flight is %d\n",priceLFCD);
                
            }else{
                printf("price for Economy in INTERNATIONAL flight is %d\n",priceLFC);
            }
        }else{
            printf("!!!INVALID SEAT TYPE!!!\n");
        }
    }else{
        printf("!!!INVALID FLIGHT TYPE\n");
    }
}