#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int i,d;
    printf("Enter number : ");
    scanf("%d",&d);
    double ar[d] , avg , sum = 0.00;
    for(i=0;i<d;i++){
                    printf("%d. number : ",i+1);
                    scanf("%lf",&ar[i]);
                    
                    sum += ar[i];
                    
     }
     sum = sum/d;
     
     printf("Sum of numbers : %.2lf\n",sum);
}
     return 0;
     getch();
}
