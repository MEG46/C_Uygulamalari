#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
             int c;
             double sum = 0.00;
             printf("Enter the number of polygon : ");
             scanf("%d",&c);
             if(c>=3){
             sum = (c-2) * 180;
             printf("Total angle of polygon : %.0lf\n",sum);
             printf("An inside angle of polygon : %.2lf\n",(sum/c));
             printf("An outside angle of polygon : %.2lf\n",(180 - (sum/c)));
             }else{
                   printf("Please enter a valid number!\n");
             }
             }
             return 0;
             getch();
}
