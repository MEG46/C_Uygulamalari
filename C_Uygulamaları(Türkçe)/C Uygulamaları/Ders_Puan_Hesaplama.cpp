#include <stdio.h>
#include <conio.h>
int main(){
    int a,b,c,d;
    int e;
    double sum = 1.0;
    while(1>0){
    printf("Enter your lecture name : (1 : Calculus / 2 : Turkish Langauge \n 3 : Physics 4 : English \n 5 : Computer Programing 6 : Social) : \n");
    scanf("%d",&e);
    if(e==1){
    printf("Enter your 1st quiz mark : ");
    scanf("%d",&a);
    printf("Enter your  2nd mark : ");
    scanf("%d",&b);
    printf("Enter your mid-term mark : ");
    scanf("%d",&c);
    printf("Enter your final mark : ");
    scanf("%d",&d);
    sum = (0.1*a)+(0.1*b)+(0.4*c)+(0.4*d);
           if(sum>=90.00 && 100.00>=sum){
                      printf("Your Mark : AA %.2lf\n\n",sum);
           }else if(sum>=80.00 && 90.00>sum){
                      printf("Your Mark : BA %.2lf\n\n",sum);
           }else if(sum>=70.00 && 80.00>sum){
                      printf("Your Mark : BB %.2lf\n\n",sum);
           }else if(sum>=62.00 && 70.00>sum){
                      printf("Your Mark : CB %.2lf\n\n",sum);
           }else if(sum>=57.00 && 62.00>sum){
                      printf("Your Mark : CC %.2lf\n\n",sum);
           }else if(sum>52.00 && 57.00>sum){
                      printf("Your Mark : DC %.2lf\n\n",sum);
           }else if(sum>=50.00 && 52.00>=sum){
                      printf("Your Mark : DD %.2lf\n\n",sum);
           }else if(sum>=30.00 && 50.00>sum){
                      printf("Your Mark : FD %.2lf\n\n",sum);
           }else if(sum>=0.00 && 30.00>sum){
                      printf("Your Mark : FD %.2lf\n\n",sum);
           }else{
                 printf("Error 404\n\n");
           }
    }else if(e==2){
    printf("Enter your mid-term mark : ");
    scanf("%d",&c);
    printf("Enter your final mark : ");
    scanf("%d",&d);
    sum = (0.5*c)+(0.5*d);
           if(sum>=90.00 && 100.00>=sum){
                      printf("Your Mark : AA %.2lf\n\n",sum);
           }else if(sum>=80.00 && 90.00>sum){
                      printf("Your Mark : BA %.2lf\n\n",sum);
           }else if(sum>=70.00 && 80.00>sum){
                      printf("Your Mark : BB %.2lf\n\n",sum);
           }else if(sum>=62.00 && 70.00>sum){
                      printf("Your Mark : CB %.2lf\n\n",sum);
           }else if(sum>=57.00 && 62.00>sum){
                      printf("Your Mark : CC %.2lf\n\n",sum);
           }else if(sum>52.00 && 57.00>sum){
                      printf("Your Mark : DC %.2lf\n\n",sum);
           }else if(sum>=50.00 && 52.00>=sum){
                      printf("Your Mark : DD %.2lf\n\n",sum);
           }else if(sum>=30.00 && 50.00>sum){
                      printf("Your Mark : FD %.2lf\n\n",sum);
           }else if(sum>=0.00 && 30.00>sum){
                      printf("Your Mark : FD %.2lf\n\n",sum);
           }else{
                 printf("Error 404\n\n");
           }
    }else if(e==3){
    printf("Enter your 1st quiz mark : ");
    scanf("%d",&a);
    printf("Enter your  2nd mark : ");
    scanf("%d",&b);
    printf("Enter your mid-term mark : ");
    scanf("%d",&c);
    printf("Enter your final mark : ");
    scanf("%d",&d);
    sum = (0.1*a)+(0.1*b)+(0.4*c)+(0.4*d);
           if(sum>=90.00 && 100.00>=sum){
                      printf("Your Mark : AA %.2lf\n\n",sum);
           }else if(sum>=80.00 && 90.00>sum){
                      printf("Your Mark : BA %.2lf\n\n",sum);
           }else if(sum>=70.00 && 80.00>sum){
                      printf("Your Mark : BB %.2lf\n\n",sum);
           }else if(sum>=62.00 && 70.00>sum){
                      printf("Your Mark : CB %.2lf\n\n",sum);
           }else if(sum>=57.00 && 62.00>sum){
                      printf("Your Mark : CC %.2lf\n\n",sum);
           }else if(sum>52.00 && 57.00>sum){
                      printf("Your Mark : DC %.2lf\n\n",sum);
           }else if(sum>=50.00 && 52.00>=sum){
                      printf("Your Mark : DD %.2lf\nv",sum);
           }else if(sum>=30.00 && 50.00>sum){
                      printf("Your Mark : FD %.2lf\n\n",sum);
           }else if(sum>=0.00 && 30.00>sum){
                      printf("Your Mark : FD %.2lf\n",sum);
           }else{
                 printf("Error 404\n\n");
           }
    }else if(e==4){
    printf("Enter your 1st quiz mark : ");
    scanf("%d",&a);
    printf("Enter your  2nd mark : ");
    scanf("%d",&b);
    printf("Enter your mid-term mark : ");
    scanf("%d",&c);
    printf("Enter your final mark : ");
    scanf("%d",&d);
    sum = (0.1*a)+(0.1*b)+(0.4*c)+(0.4*d);
           if(sum>=90.00 && 100.00>=sum){
                      printf("Your Mark : AA %.2lf\n\n",sum);
           }else if(sum>=80.00 && 90.00>sum){
                      printf("Your Mark : BA %.2lf\n\n",sum);
           }else if(sum>=70.00 && 80.00>sum){
                      printf("Your Mark : BB %.2lf\n\n",sum);
           }else if(sum>=62.00 && 70.00>sum){
                      printf("Your Mark : CB %.2lf\n\n",sum);
           }else if(sum>=57.00 && 62.00>sum){
                      printf("Your Mark : CC %.2lf\n\n",sum);
           }else if(sum>52.00 && 57.00>sum){
                      printf("Your Mark : DC %.2lf\n\n",sum);
           }else if(sum>=50.00 && 52.00>=sum){
                      printf("Your Mark : DD %.2lf\n\n",sum);
           }else if(sum>=30.00 && 50.00>sum){
                      printf("Your Mark : FD %.2lf\n\n",sum);
           }else if(sum>=0.00 && 30.00>sum){
                      printf("Your Mark : FD %.2lf\n\n",sum);
           }else{
                 printf("Error 404\n\n");
           }
    }else if (e==5){
    printf("Enter your 1st quiz mark : ");
    scanf("%d",&a);
    printf("Enter your  2nd mark : ");
    scanf("%d",&b);
    printf("Enter your mid-term mark : ");
    scanf("%d",&c);
    printf("Enter your final mark : ");
    scanf("%d",&d);
    sum = (0.1*a)+(0.1*b)+(0.4*c)+(0.4*d);
           if(sum>=90.00 && 100.00>=sum){
                      printf("Your Mark : AA %.2lf\n\n",sum);
           }else if(sum>=80.00 && 90.00>sum){
                      printf("Your Mark : BA %.2lf\n\n",sum);
           }else if(sum>=70.00 && 80.00>sum){
                      printf("Your Mark : BB %.2lf\n\n",sum);
           }else if(sum>=62.00 && 70.00>sum){
                      printf("Your Mark : CB %.2lf\n\n",sum);
           }else if(sum>=57.00 && 62.00>sum){
                      printf("Your Mark : CC %.2lf\n\n",sum);
           }else if(sum>52.00 && 57.00>sum){
                      printf("Your Mark : DC %.2lf\n\n",sum);
           }else if(sum>=50.00 && 52.00>=sum){
                      printf("Your Mark : DD %.2lf\n\n",sum);
           }else if(sum>=30.00 && 50.00>sum){
                      printf("Your Mark : FD %.2lf\n\n",sum);
           }else if(sum>=0.00 && 30.00>sum){
                      printf("Your Mark : FD %.2lf\n\n",sum);
           }else{
                 printf("Error 404\n\n");
           }
    }else if(e==6){
    printf("Enter your quiz mark : ");
    scanf("%d",&a);
    printf("Enter your mid-term mark : ");
    scanf("%d",&c);
    printf("Enter your final mark : ");
    scanf("%d",&d);
    sum = (0.2*a)+(0.4*c)+(0.4*d);
           if(sum>=90.00 && 100.00>=sum){
                      printf("Your Mark : AA %.2lf\n\n",sum);
           }else if(sum>=80.00 && 90.00>sum){
                      printf("Your Mark : BA %.2lf\n\n",sum);
           }else if(sum>=70.00 && 80.00>sum){
                      printf("Your Mark : BB %.2lf\n\n",sum);
           }else if(sum>=62.00 && 70.00>sum){
                      printf("Your Mark : CB %.2lf\n\n",sum);
           }else if(sum>=57.00 && 62.00>sum){
                      printf("Your Mark : CC %.2lf\n\n",sum);
           }else if(sum>52.00 && 57.00>sum){
                      printf("Your Mark : DC %.2lf\n\n",sum);
           }else if(sum>=50.00 && 52.00>=sum){
                      printf("Your Mark : DD %.2lf\n\n",sum);
           }else if(sum>=30.00 && 50.00>sum){
                      printf("Your Mark : FD %.2lf\n\n",sum);
           }else if(sum>=0.00 && 30.00>sum){
                      printf("Your Mark : FD %.2lf\n\n",sum);
           }else{
                 printf("Error 404\n\n");
           }
    }else {
          printf("Enter a valid lecture that you study!\n");
    }
  }
  return 0;
  getch();
}
