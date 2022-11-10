#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int c,bibiliuuuuuu,n,i,j;
    printf("Enter the number of paralel resistor : ");
    scanf("%d",&n);
    double ar[n],sum = 0.00;
    for(i=0;i<n;i++){
                     printf("%d. Resistor : ",i+1);
                     scanf("%lf",&ar[i]);
                    
                    sum += (1 / ar[i]);
                     }
    printf("Enter the number of serial resistor : ");
    scanf("%d",&bibiliuuuuuu);
    double ad[bibiliuuuuuu],sum1=0.00;
    for(j=0;j<bibiliuuuuuu;j++){
                     printf("%d. Resistor : ",j+1);
                     scanf("%lf",&ad[j]);
                    
                    sum1 += ad[j];
                     }
                     printf("Total of resisvity : %.3lf Ohm\n",(1 / sum)+(sum1));
     }
     return 0;
     getch();
}
