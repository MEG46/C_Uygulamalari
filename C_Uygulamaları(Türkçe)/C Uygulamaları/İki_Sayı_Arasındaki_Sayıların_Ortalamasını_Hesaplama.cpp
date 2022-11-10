#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int d;
    int e;
    double sum=1;
    printf("Enter a number : ");
    scanf("%d",&d);
    printf("Enter a number : ");
    scanf("%d",&e);
    if(d>e){
            sum = (((d)*(d+1) / 2)-((e)*(e-1) / 2)) / ((d-e)+1);
            printf("Average of the numbers between two number  : %.2lf\n",sum);
    }else if(e>d){
          sum = (((e)*(e+1) / 2)-((d)*(d-1) / 2)) / ((e-d)+1);
          printf("Average of the numbers between two number : %.2lf\n",sum);
    }else{
          printf("Average of the numbers between two number : 0\n");
    }
    }
    return 0;
    getch();
}  
    
