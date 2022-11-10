#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int d;
    int e;
    int sum = 0;
    printf("Enter a number : ");
    scanf("%d",&d);
    printf("Enter a number : ");
    scanf("%d",&e);
    sum = (d-e);
    if(sum<0){
              sum=0-sum;
              printf("The length between two number : %d\n",sum);
    }else{
           printf("The length between two number : %d\n",sum);
    }
   }
    return 0;
    getch();
}
