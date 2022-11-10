#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    int a,b,c,d;
    int e,f,g,h;
    int i,j,k,l;
    int m,n,o,p;
    int r,s,t,u,v;
    char ar[20],br[20];
    double sum = 1.0;
    double sum2 = 1.0;
    double sum3 = 1.0;
    double sum4 = 1.0;
    double sum5 = 1.0;
    double sum6 = 1.0;
    printf("Enter the student name : ");
    scanf("%s",ar);
    printf("Enter the student name : ");
    scanf("%s",br);
    printf("1 : Calculus :\n");
    printf("Enter your 1st quiz mark : ");
    scanf("%d",&a);
    printf("Enter your  2nd mark : ");
    scanf("%d",&b);
    printf("Enter your mid-term mark : ");
    scanf("%d",&c);
    printf("Enter your final mark : ");
    scanf("%d",&d);
    
    printf("2 : Turkish Langauge :\n");
    printf("Enter your mid-term mark : ");
    scanf("%d",&e);
    printf("Enter your final mark : ");
    scanf("%d",&f);
    
    printf("3. Physics :\n");
    printf("Enter your 1st quiz mark : ");
    scanf("%d",&g);
    printf("Enter your  2nd mark : ");
    scanf("%d",&h);
    printf("Enter your mid-term mark : ");
    scanf("%d",&i);
    printf("Enter your final mark : ");
    scanf("%d",&j);
    
    printf("4. English :\n");
    printf("Enter your 1st quiz mark : ");
    scanf("%d",&k);
    printf("Enter your  2nd mark : ");
    scanf("%d",&l);
    printf("Enter your mid-term mark : ");
    scanf("%d",&m);
    printf("Enter your final mark : ");
    scanf("%d",&n);
    
    printf("5. Computer Programing :\n");
    printf("Enter your 1st quiz mark : ");
    scanf("%d",&o);
    printf("Enter your  2nd mark : ");
    scanf("%d",&p);
    printf("Enter your mid-term mark : ");
    scanf("%d",&r);
    printf("Enter your final mark : ");
    scanf("%d",&s);
    
    printf("6. Social :\n");
    printf("Enter your quiz mark : ");
    scanf("%d",&t);
    printf("Enter your mid-term mark : ");
    scanf("%d",&u);
    printf("Enter your final mark : ");
    scanf("%d",&v);
    printf("\nName : %s\nSurname : %s\n\n",ar,br);
    sum = (0.1*a)+(0.1*b)+(0.4*c)+(0.4*d);
           if(sum>=90.00 && 100.00>=sum){
                      printf("1. Calculus : AA %.2lf\n\n",sum);
           }else if(sum>=80.00 && 90.00>sum){
                      printf("1. Calculus : BA %.2lf\n\n",sum);
           }else if(sum>=70.00 && 80.00>sum){
                      printf("1. Calculus : BB %.2lf\n\n",sum);
           }else if(sum>=62.00 && 70.00>sum){
                      printf("1. Calculus : CB %.2lf\n\n",sum);
           }else if(sum>=57.00 && 62.00>sum){
                      printf("1. Calculus : CC %.2lf\n\n",sum);
           }else if(sum>52.00 && 57.00>sum){
                      printf("1. Calculus : DC %.2lf\n\n",sum);
           }else if(sum>=50.00 && 52.00>=sum){
                      printf("1. Calculus : DD %.2lf\n\n",sum);
           }else if(sum>=30.00 && 50.00>sum){
                      printf("1. Calculus : FD %.2lf\n\n",sum);
           }else if(sum>=0.00 && 30.00>sum){
                      printf("1. Calculus : FF %.2lf\n\n",sum);
           }else{
                 printf("Error 404\n\n");
           }
    sum2 = (0.5*e)+(0.5*f);
           if(sum2>=90.00 && 100.00>=sum2){
                      printf("2. Turkish Langauge : Mark : AA %.2lf\n\n",sum2);
           }else if(sum2>=80.00 && 90.00>sum2){
                      printf("2. Turkish Langauge : BA %.2lf\n\n",sum2);
           }else if(sum2>=70.00 && 80.00>sum2){
                      printf("2. Turkish Langauge : BB %.2lf\n\n",sum2);
           }else if(sum2>=62.00 && 70.00>sum2){
                      printf("2. Turkish Langauge : CB %.2lf\n\n",sum2);
           }else if(sum2>=57.00 && 62.00>sum2){
                      printf("2. Turkish Langauge : CC %.2lf\n\n",sum2);
           }else if(sum2>52.00 && 57.00>sum2){
                      printf("2. Turkish Langauge : DC %.2lf\n\n",sum2);
           }else if(sum2>=50.00 && 52.00>=sum2){
                      printf("2. Turkish Langauge : DD %.2lf\n\n",sum2);
           }else if(sum2>=30.00 && 50.00>sum2){
                      printf("2. Turkish Langauge : FD %.2lf\n\n",sum2);
           }else if(sum2>=0.00 && 30.00>sum2){
                      printf("2. Turkish Langauge : FF %.2lf\n\n",sum2);
           }else{
                 printf("Error 404\n\n");
           }
    sum3 = (0.1*g)+(0.1*h)+(0.4*i)+(0.4*j);
           if(sum3>=90.00 && 100.00>=sum3){
                      printf("3. Physics : AA %.2lf\n\n",sum3);
           }else if(sum3>=80.00 && 90.00>sum3){
                      printf("3. Physics : BA %.2lf\n\n",sum3);
           }else if(sum3>=70.00 && 80.00>sum3){
                      printf("3. Physics : BB %.2lf\n\n",sum3);
           }else if(sum3>=62.00 && 70.00>sum3){
                      printf("3. Physics : CB %.2lf\n\n",sum3);
           }else if(sum3>=57.00 && 62.00>sum3){
                      printf("3. Physics : CC %.2lf\n\n",sum3);
           }else if(sum3>52.00 && 57.00>sum3){
                      printf("3. Physics : DC %.2lf\n\n",sum3);
           }else if(sum3>=50.00 && 52.00>=sum3){
                      printf("3. Physics : DD %.2lf\nv",sum3);
           }else if(sum3>=30.00 && 50.00>sum3){
                      printf("3. Physics : FD %.2lf\n\n",sum3);
           }else if(sum3>=0.00 && 30.00>sum3){
                      printf("3. Physics : FF %.2lf\n",sum3);
           }else{
                 printf("Error 404\n\n");
           }
    sum4 = (0.1*k)+(0.1*l)+(0.4*m)+(0.4*n);
           if(sum4>=90.00 && 100.00>=sum4){
                      printf("4. English : AA %.2lf\n\n",sum4);
           }else if(sum4>=80.00 && 90.00>sum4){
                      printf("4. English : BA %.2lf\n\n",sum4);
           }else if(sum4>=70.00 && 80.00>sum4){
                      printf("4. English : BB %.2lf\n\n",sum4);
           }else if(sum4>=62.00 && 70.00>sum4){
                      printf("4. English : CB %.2lf\n\n",sum4);
           }else if(sum4>=57.00 && 62.00>sum4){
                      printf("4. English : CC %.2lf\n\n",sum4);
           }else if(sum4>52.00 && 57.00>sum4){
                      printf("4. English : DC %.2lf\n\n",sum4);
           }else if(sum4>=50.00 && 52.00>=sum4){
                      printf("4. English : DD %.2lf\n\n",sum4);
           }else if(sum4>=30.00 && 50.00>sum4){
                      printf("4. English : FD %.2lf\n\n",sum4);
           }else if(sum4>=0.00 && 30.00>sum4){
                      printf("4. English : FF %.2lf\n\n",sum4);
           }else{
                 printf("Error 404\n\n");
           }
    sum5 = (0.1*o)+(0.1*p)+(0.4*r)+(0.4*s);
           if(sum5>=90.00 && 100.00>=sum5){
                      printf("5. Computer Programing : AA %.2lf\n\n",sum5);
           }else if(sum5>=80.00 && 90.00>sum5){
                      printf("5. Computer Programing : BA %.2lf\n\n",sum5);
           }else if(sum5>=70.00 && 80.00>sum5){
                      printf("5. Computer Programing : BB %.2lf\n\n",sum5);
           }else if(sum5>=62.00 && 70.00>sum5){
                      printf("5. Computer Programing : CB %.2lf\n\n",sum5);
           }else if(sum5>=57.00 && 62.00>sum5){
                      printf("5. Computer Programing : CC %.2lf\n\n",sum5);
           }else if(sum5>52.00 && 57.00>sum5){
                      printf("5. Computer Programing : DC %.2lf\n\n",sum5);
           }else if(sum5>=50.00 && 52.00>=sum5){
                      printf("5. Computer Programing : DD %.2lf\n\n",sum5);
           }else if(sum5>=30.00 && 50.00>sum5){
                      printf("5. Computer Programing : FD %.2lf\n\n",sum5);
           }else if(sum5>=0.00 && 30.00>sum5){
                      printf("5. Computer Programing : FF %.2lf\n\n",sum5);
           }else{
                 printf("Error 404\n\n");
           }       
    sum6 = (0.2*t)+(0.4*u)+(0.4*v);
           if(sum6>=90.00 && 100.00>=sum6){
                      printf("6. Social : AA %.2lf\n\n",sum6);
           }else if(sum6>=80.00 && 90.00>sum6){
                      printf("6. Social : BA %.2lf\n\n",sum6);
           }else if(sum6>=70.00 && 80.00>sum6){
                      printf("6. Social : BB %.2lf\n\n",sum6);
           }else if(sum6>=62.00 && 70.00>sum6){
                      printf("6. Social : CB %.2lf\n\n",sum6);
           }else if(sum6>=57.00 && 62.00>sum6){
                      printf("6. Social : CC %.2lf\n\n",sum6);
           }else if(sum6>52.00 && 57.00>sum6){
                      printf("6. Social : DC %.2lf\n\n",sum6);
           }else if(sum6>=50.00 && 52.00>=sum6){
                      printf("6. Social : DD %.2lf\n\n",sum6);
           }else if(sum6>=30.00 && 50.00>sum6){
                      printf("6. Social : FD %.2lf\n\n",sum6);
           }else if(sum6>=0.00 && 30.00>sum6){
                      printf("6. Social : FF %.2lf\n\n",sum6);
           }else{
                 printf("Error 404\n\n");
           }
  }
  return 0;
  getch();
}
