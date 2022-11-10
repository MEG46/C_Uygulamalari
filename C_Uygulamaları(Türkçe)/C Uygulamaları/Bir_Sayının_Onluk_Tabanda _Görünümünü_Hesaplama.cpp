#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int n;
    int counter=0;
    int temp;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
               printf("%d",(n%2));
               n/=2;
               }
               printf("\n");
    }
    return 0;
    getch();               
}    
