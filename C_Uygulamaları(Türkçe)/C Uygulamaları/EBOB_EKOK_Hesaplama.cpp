#include <stdio.h>
#include <conio.h>
    int isDiv(int div, int div1){
        if(div%div1 == 0){
                     return 1;
        }else{
              return 0;
        }
        }
    int obebBul(int num1,int num2){
        int smlnum = num1;
        if(num2<smlnum){
                        smlnum=num2;
                        }
        int i;
        for(i = smlnum; i>0;i--){
              if(isDiv(num1,i) == 1 && isDiv(num2,i) == 1){
                 return i;
                 }
                 }
                 return 0;
                 }
     int okekBul(int num1, int num2){
         int bgrnum = num1;
         int smlnum = num2;
         
         if(num2 < bgrnum){
                 bgrnum = num2;
                 smlnum = num1;
                 }
         if(isDiv(bgrnum,smlnum)){
                                  return bgrnum;
                                  }
         int i;
         for(i = bgrnum * 2; ; i+=bgrnum){
               if(isDiv(i,num1) ==1 && isDiv(i,num2) == 1){
                                return i;
                                }
               }
               return 0;
      }
int main(){
    char c;
    do{
       int num1,num2;
       printf("Please enter a number : ");
       scanf("%d",&num1);
       printf("Please enter a number : ");
       scanf("%d",&num2);
       int obeb = obebBul(num1,num2);
       int okek = okekBul(num1,num2);
       
       printf("OBEB(%d,%d) = %d\n",num1,num2,obeb);
       printf("OKEK(%d,%d) = %d\n",num1,num2,okek);
       fflush(stdin);
       printf("Do you want to continue (Y / N) : ");
       scanf("%c",&c);
       fflush(stdin);
       }while(c!='N');
       return 0;
       getch();
}
       
       
    
