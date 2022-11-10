#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    while(1){
    int i,d;
    printf("Enter number : ");
    scanf("%d",&d);
    double ar[d] , avg , sum = 0.00, std_sap = 0.00;
    for(i=0;i<d;i++){
                    printf("%d. number : ",i+1);
                    scanf("%lf",&ar[i]);
                    
                    sum += ar[i];
                    
     }
     avg = sum/d;
     
     for(sum=0.0,i=0;i<d;i++)
         sum += pow(ar[i]-avg,2.0);
     
     std_sap = sqrt( sum / (d-1));
     
     printf("Average of numbers : %.2lf\n",avg);
     printf("Standart Refracting of numbers : %.4lf\n",std_sap);
}
     return 0;
     getch();
}
