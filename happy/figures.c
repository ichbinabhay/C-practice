#include<stdio.h>
void draw_circle(void);
void draw_square(void);
int main(void)
{
    draw_circle();
    draw_square();
    return 0;
    
}
void draw_circle(void){
    printf("   *  \n");
    printf(" *   *\n");
    printf("  * *\n");
}
void draw_square(void){
    printf("* * * *\n");
    printf("*     *\n");
    printf("*     *\n");
    printf("* * * *\n");
}