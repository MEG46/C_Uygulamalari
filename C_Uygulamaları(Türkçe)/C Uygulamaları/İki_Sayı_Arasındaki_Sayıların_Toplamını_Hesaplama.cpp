#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int d;
    int e;
    int sum = 1;
    printf("Enter a number : ");
    scanf("%d",&d);
    printf("Enter a number : ");
    scanf("%d",&e);
    if(d>e){
            sum = ((d)*(d+1) / 2)-((e)*(e-1) / 2);
            printf("The length between two number : %d\n",sum);
    }else if(e>d){
          sum = ((e)*(e+1) / 2)-((d)*(d-1) / 2);
          printf("The sum between two number : %d\n",sum);
    }else{
          printf("The sum between two number : 0\n");
    }
    }  
    return 0;
    getch();

}
