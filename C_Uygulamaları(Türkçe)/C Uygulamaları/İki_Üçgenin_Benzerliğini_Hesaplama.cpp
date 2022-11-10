#include <stdio.h>
#include <conio.h>
int main(){
    while(1){
    double a,b,e;
    double c,d,f;
    double sum = 0.00;
    printf("Enter a length of 1st triangle : ");
    scanf("%lf",&a);
    printf("Enter a length of 1st triangle : ");
    scanf("%lf",&b);
    printf("Enter a length of 1st triangle : ");
    scanf("%lf",&c);
    printf("Enter a length of 2nd triangle : ");
    scanf("%lf",&d);
    printf("Enter a length of 2nd triangle : ");
    scanf("%lf",&e);
    printf("Enter a length of 2nd triangle : ");
    scanf("%lf",&f);
    if(((a/d)==(b/e))&&((a/d)==(c/f))&&((b/e)==(c/f))){
                     printf("a=b b=e c=f These triangles are similiar.\n");
                     printf("%.2lf = %.2lf  %.2lf = %.2lf %.2lf = %.2lf\n",a,d,b,e,c,f);
    }else{
          printf("a!=b b!=e c!=f These triangles are not similiar.\n");
                     printf("%.2lf != %.2lf  %.2lf != %.2lf %.2lf != %.2lf\n",a,d,b,e,c,f);
    }
    }
    return 0;
    getch();
}
          
    
