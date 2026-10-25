#include<stdio.h>
#include<math.h>
void draw_parallel(void);
void draw_base(void);
void draw_rectangle(void);
int main(void){
    draw_rectangle();
    return 0;

}
void draw_parallel(void){
   printf("*       *\n");
   printf("*       *\n");
   printf("*       *\n");
   printf("*       *\n");
   printf("*       *\n");
   printf("*       *\n");
   printf("*       *\n");
    
}
void draw_base(void){
    printf("* * * * *\n");
}
void draw_rectangle(void){
    draw_base();
    draw_parallel();
    draw_base();

}
