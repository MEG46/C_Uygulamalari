#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int a,b,c;
    int d,e,f;
    int sum=0;
    printf("Enter day of first date : ");
    scanf("%d",&a);
    printf("Enter month of first date : ");
    scanf("%d",&b);
    printf("Enter year of first date : ");
    scanf("%d",&c);
    
    printf("Enter day of second date : ");
    scanf("%d",&d);
    printf("Enter month of second date : ");
    scanf("%d",&e);
    printf("Enter year of second date : ");
    scanf("%d",&f);
 
              sum=(5+a*1+30*b+c*365)-(5+d*1+30*e+f*365);
    if(sum<0){
              sum=0-sum;
              printf("The days between two date id %d days.\n",sum);
    }else{
              printf("The days between two date id %d days.\n",sum);
    }
}
    return 0;
    getch();

}
          
    
    
    
