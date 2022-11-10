#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    while(1){
    double a,b,c;
    double d = 0.00;
    double sum = 0.00;
    double e = 0.00;
    printf("Enter a length of gon : ");
    scanf("%lf",&a);
    printf("Enter a length of gon : ");
    scanf("%lf",&b);
    printf("Enter a length of gon : ");
    scanf("%lf",&c);
    if(a+b>c && c+a>b && b+c>a){
             d = (a+b+c) / (2.00);
             e = d*(d-a)*(d-b)*(d-c);
             sum = sqrt(e);
             printf("Area of the triangle : %.2lf cm2\n",sum);
             printf("Height of a : %.2lf cm\n",(2*sum)/a);
              printf("Height of b : %.2lf cm\n",(2*sum)/b);
               printf("Height of c : %.2lf cm\n",(2*sum)/c);
             printf("Perimeter of the triangle : %.2lf cm\n",(a+b+c));
    }else{
          printf("Please enter a valid value!\n");
    }
    }
    return 0;
    getch();
}
