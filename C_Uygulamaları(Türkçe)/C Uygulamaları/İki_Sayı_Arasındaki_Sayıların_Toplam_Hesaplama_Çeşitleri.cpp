#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int d,f;
    int e;
    double sum=1;
    double sum1=1;
    double sum2=1;
    printf("Enter a number : ");
    scanf("%d",&d);
    printf("Enter a number : ");
    scanf("%d",&e);
    printf("Enter the number of process : \n");
    printf("0 = Sum of numbers 1 = Sum of square of numbers /n  2 = Sum of Cube of numbers \n");
    scanf("%d",&f);
    if(f==0){
         if(d>e){
            sum2 = (((d)*(d+1) / 2)-((e)*(e-1) / 2));
            printf("Sum of between two numbers : %.2lf\n",sum2);
         }else if(e>d){
          sum2 = (((e)*(e+1) / 2)-((d)*(d-1) / 2)) ;
          printf("Sum of between two numbers : %.2lf\n",sum2);
    }else{
          printf("Sum of between two numbers : %.2lf\n",sum2);
    }
    }
    if(f==1){
             if(d>e){
                sum = ((d)*(d+1))*((2*d)+1) / (6) - ((e)*(e-1))*((2*e)+1) / (6);
                printf("Square of %d to %d : %.2lf\n",d,e,sum);
             }else if(e>d){
                sum = ((e)*(e+1))*((2*e)+1) / (6) - ((d)*(d-1))*((2*d)+1) / (6);
                printf("Sum of square %d to %d : %.2lf\n",e,d,sum);
    }else{
          printf("Average of the numbers between two number : 0\n");
    }
    }
    if(f==2){
             if(d>e){
                sum1 = ((d)*(d+1)/2)*((d)*(d+1) / 2) - ((e)*(e-1) / 2)*((e)*(e-1)/2);
                printf("Sum of cube %d to %d : %.2lf\n",d,e,sum1);
             }else if(e>d){
                sum1 = ((e)*(e+1)/2)*((e)*(e+1) / 2) - ((d)*(d-1) / 2)*((d)*(d-1)/2);
                printf("Sum of cube %d to %d : %.2lf\n",e,d,sum1);
    }else{
          printf("Average of the numbers between two number : 0\n");
    }
    }
    }
    return 0;
    getch();
}  

