#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int n,m;
    int i,j;
    double sum = 0.00;
    double sum1 = 0.00;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter a number : ");
    scanf("%d",&m);
    if((m==1)||(n==1)){
                   for(i=0;i<=n;i++){
                       sum+=(n*n*n*n);
                       n--;
                   }
                   for(j=0;j<=m;j++){
                   sum1+=(m-1)*(m-1)*(m-1)*(m-1);
                   m--;
                   }

                 if(sum>sum1){
                    printf("The 4th powers sum of between two numbers : %.2lf\n",(sum+1));
                 }else if(sum1>sum){
                    printf("The 4th powers sum of between two numbers : %.2lf\n",(sum1+1));
                 }else{
                    printf("The 4th powers sum of between two numbers : 0\n");
                 }
    }else{
    for(i=0;i<=n;i++){
               sum+=(n*n*n*n);
               n--;
    }
    for(j=0;j<=m;j++){
               sum1+=(m-1)*(m-1)*(m-1)*(m-1);
               m--;
    }

    if(sum>sum1){
                 printf("The 4th powers sum of between two numbers : %.2lf\n",(sum-sum1+1));
    }else if(sum1>sum){
           printf("The 4th powers sum of between two numbers : %.2lf\n",(sum1-sum+1));
    }else{
          ("The 4th powers sum of between two numbers : 0\n");
    }
    }
    }
    return 0;
    getch();
}
