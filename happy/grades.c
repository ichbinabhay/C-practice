#include<stdio.h>
#include<math.h>
int main(){
    int marks;
    printf("ENTER MARKS:");
    scanf("%d", &marks);

    if(marks<30 && marks>=0){
        printf("GRADE - C");
    }else if(marks>=30 && marks<70){
        printf("GRADE - B");
    }else if(marks>=70 && marks<90){
        printf("GRADE - A");
    }else if(marks>=90 && marks<100){ 
        printf("GRADE - A+");
    }else {
        printf("INVALID MARKS");
    } 
    return 0;

}