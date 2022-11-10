#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    char c;
    char k;
    do{
    int d;
    int price;
    int part;
    double total=0.00;
    srand(time(NULL));
    price=rand()%2000;
    printf("Price is %dTL. Which way would you pay?\n",price);
    printf("1.Credit Card(Press 1)\n");
    printf("2.Cash Money(Press 2) : ");
    scanf("%d",&d);
    if(d==1){
             printf("How many installment would you prefer pay ? (3-6-9-12) : ");
             scanf("%d",&part);
             fflush(stdin);
             if(part==3){
                     printf("Do you have special supermarket card (Y / N) : ");
                     scanf("%c",&c);
                     fflush(stdin);
                     if(c=='Y'){
                        total=price*1.05-price*0.02;
                        total/=3.00;
                        printf("Price is %.2lf.TL\n",total);
                        printf("Thanks for choosing us. Have a nice day!\n");
                        fflush(stdin);
                     }else{
                          total=price*1.05;
                          total/=3.00;
                           printf("Price is %.2lf.TL\n",total);
                           printf("Thanks for choosing us. Have a nice day!\n");
                           fflush(stdin);
                     }
             }else if(part==6){
                     printf("Do you have special supermarket card (Y / N) : ");
                     scanf("%c",&c);
                     fflush(stdin);
                     if(c=='Y'){
                        total=price*1.08-price*0.04;
                        total/=6.00;
                        printf("Price is %.2lf.TL\n",total);
                        printf("Thanks for choosing us. Have a nice day!\n");
                        fflush(stdin);
                     }else{
                          total=price*1.08;
                          total/=6.00;
                           printf("Price is %.2lf.TL\n",total);
                           printf("Thanks for choosing us. Have a nice day!\n");
                           fflush(stdin);
                     }
             }else if(part==9){
                     printf("Do you have special supermarket card (Y / N) : ");
                     scanf("%c",&c);
                     fflush(stdin);
                     if(c=='Y'){
                        total=price*1.12-price*0.06;
                        total/=9.00;
                        printf("Price is %.2lf.TL\n",total);
                        printf("Thanks for choosing us. Have a nice day!\n");
                        fflush(stdin);
                     }else{
                          total=price*1.12;
                          total/=9.00;
                           printf("Price is %.2lf.TL\n",total);
                           printf("Thanks for choosing us. Have a nice day!\n");
                           fflush(stdin);
                     }
             }else if(part==12){
                     printf("Do you have special supermarket card (Y / N) : ");
                     scanf("%c",&c);
                     fflush(stdin);
                     if(c=='Y'){
                        total=price*1.15-price*0.08;
                        total/=12.00;
                        printf("Price is %.2lf.TL\n",total);
                        printf("Thanks for choosing us. Have a nice day!\n");
                        fflush(stdin);
                     }else{
                          total=price*1.15;
                          total/=12.00;
                           printf("Price is %.2lf.TL\n",total);
                           printf("Thanks for choosing us. Have a nice day!\n");
                           fflush(stdin);
                     }
             }else{
                   printf("Please enter a valid installment!\n");
                   fflush(stdin);
             }
    }else{
          printf("Price is %d.TL\n",price);
          printf("Thanks for choosing us. Have a nice day!\n");
          fflush(stdin);
    }
       printf("Do you want to continue? (Y / N) : ");
       scanf("%c",&k);
       fflush(stdin);
    }while(k!='N');
    return 0;
    getch();
}
          
