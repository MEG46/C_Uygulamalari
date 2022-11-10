#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int d;
    int e;
    double sum=1;
    double sum1=1;
    double sum2=1;
    printf("Enter a number : ");
    scanf("%d",&d);
    printf("Enter a number : ");
    scanf("%d",&e);
    if(d>e){
            sum = ((d)*(d+1))*((2*d)+1) / (6) - ((e)*(e-1))*((2*e)+1) / (6);
            sum1 = ((d)*(d+1)/2)*((d)*(d+1) / 2) - ((e)*(e-1) / 2)*((e)*(e-1)/2);
            printf("Square of %d to %d : %.2lf\n",d,e,sum);
            printf("Sum of cube %d to %d : %.2lf\n",d,e,sum1);
    }else if(e>d){
          sum = ((e)*(e+1))*((2*e)+1) / (6) - ((d)*(d-1))*((2*d)+1) / (6);
          sum1 = ((e)*(e+1)/2)*((e)*(e+1) / 2) - ((d)*(d-1) / 2)*((d)*(d-1)/2);
          printf("Sum of square %d to %d : %.2lf\n",e,d,sum);
          printf("Sum of cube %d to %d : %.2lf\n",e,d,sum1);
    }else{
          printf("Average of the numbers between two number : 0\n");
    }
    }
    return 0;
    getch();
}  

