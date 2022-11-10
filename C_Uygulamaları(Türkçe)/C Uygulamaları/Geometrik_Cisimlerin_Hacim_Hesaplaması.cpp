#include <stdio.h>
#include <conio.h>
#include <math.h>
int main(){
    while(1){
    int c;
    double l,w,h;
    double sum = 1.00;
    printf("Enter a type of volume : \n");
    printf("1. Rectangular Solid or Cuboid : \n");
    printf("2. Cube : \n");
    printf("3. Cylinder : \n");
    printf("4. Prism : \n");  
    printf("5. Sphere : \n");
    printf("6. Pyramid : \n");
    printf("7. Right Circular Cone : \n");
    printf("8. Square or Rectangular Pyramid : \n");
    printf("9. Ellipsoid : \n");
    printf("10. Tetrahedron : \n");
    scanf("%d",&c);
    if(c==1){
            printf("Enter the length : ");
            scanf("%lf",&l);
            printf("Enter the width : ");
            scanf("%lf",&w);
            printf("Enter the height : ");
            scanf("%lf",&h);
            sum = l * w * h;
            printf("Volume : %.2lf cm3\n",sum);
     } else if(c==2){
            printf("Enter the length : ");
            scanf("%lf",&l);
            sum = l * l * l;
            printf("Volume : %.2lf cm3\n",sum);
     } else if(c==3){
            printf("Enter the radius : ");
            scanf("%lf",&l);
            printf("Enter the height : ");
            scanf("%lf",&h);
            sum = 3.14 * l * l * h;
            printf("Volume : %.2lf cm3\n",sum);
     } else if(c==4){
            printf("Enter the length side : ");
            scanf("%lf",&l);
            printf("Enter the height : ");
            scanf("%lf",&h);
            sum = (l * l * h);
            printf("Volume : %.2lf cm3\n",sum);
     } else if(c==5){
            printf("Enter the radius : ");
            scanf("%lf",&l);
            sum = (4.00) * (3.14) * (l * l * l) / (3.00);
            printf("Volume : %.2lf cm3\n",sum);
     } else if(c==6){
            printf("Enter the length side : ");
            scanf("%lf",&l);
            printf("Enter the height : ");
            scanf("%lf",&h);
            sum = l * l * h / (3.00);
            printf("Volume : %.2lf cm3\n",sum);
     } else if(c==7){
            printf("Enter the radius : ");
            scanf("%lf",&l);
            printf("Enter the height : ");
            scanf("%lf",&h);
            sum = (3.14) * (l * l * h) / (3.00);
            printf("Volume : %.2lf cm3\n",sum);
     } else if(c==8){
            printf("Enter the length : ");
            scanf("%lf",&l);
            printf("Enter the width : ");
            scanf("%lf",&w);
            printf("Enter the height : ");
            scanf("%lf",&h);
            sum = (l * w * h) / (3.00);
            printf("Volume : %.2lf cm3\n",sum);
     } else if(c==9){
            printf("Enter the semi-axes of ellipsoid : ");
            scanf("%lf",&l);
            printf("Enter the semi-axes of ellipsoid : ");
            scanf("%lf",&w);
            printf("Enter the semi-axes of ellipsoid : ");
            scanf("%lf",&h);
            sum = (3.14) * (l * w * h) / (3.00);
            printf("Volume : %.2lf cm3\n",sum);
     } else if(c==10){
            printf("Enter the length : ");
            scanf("%lf",&l);
            sum = (l * l * l ) / ((1.41)*(6.00));
            printf("Volume : %.2lf cm3\n",sum);
     } else{
            printf("Please enter a valid value!");
     }
     }
     return 0;
     getch();
}
            
