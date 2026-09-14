#include<stdio.h>
#include<math.h>

int main(){
    int x=2; //here we think x=2 but keeping in mind the point that for assining some value to x we have to use (==) and not(=), here after going to next function of if it reads x=1 which it takes as true if it was 0 then it will be false here it is true so what ever ststement is written in the printf of if statements gets printed.
    if(x=1) {
        printf("x is equal to 1");

    } else {
        printf("x is not equal to 1");
    }
    return 0;

}// as we know if x=0 in if statement then it becomes false so the else statement gets printed