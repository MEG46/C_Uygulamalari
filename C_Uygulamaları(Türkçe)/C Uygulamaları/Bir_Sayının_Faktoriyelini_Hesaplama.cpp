#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int d;
    int sum=1;
    printf("Enter the number of factorial : ");
    scanf("%d",&d);
    while(d>0){
               sum*=d;
               d--;
    }
     printf("Factorial of number : %d\n",sum);
   }
  
   return 0;
   getch();
}
