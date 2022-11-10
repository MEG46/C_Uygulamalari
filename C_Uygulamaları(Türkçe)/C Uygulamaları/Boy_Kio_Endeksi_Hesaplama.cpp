#include <stdio.h>
#include <conio.h>
int main(){
    char name[20];
    char surname[20];
    double height;
    int weight;
    char gender[6];
    double sum=0;
    for(int counter=0;counter<10;counter++){
         printf("Enter the name : ");
         scanf("%s",name);
         printf("Enter the surname : ");
         scanf("%s",surname);
         printf("Enter the gender : ");
         scanf("%s",gender);
         printf("Enter the height (as meter) : ");
         scanf("%lf",&height);
         printf("Enter the weight : (as kg) : ");
         scanf("%d",&weight);
         sum = weight / (height * height);
                               if(sum>60.00)
                               {
                               printf("Name : %s \nSurname : %s \nGender : %s\nHeight : %.2lf m\nWeight : %d kg\n",name,surname,gender,height,weight);
                               printf("Body Mass Index : %.2lf kg\m2 \nYour body is super super obesity!\n",sum);
                               }else if(sum<=60.00 && sum>50.00)
                               {
                               printf("Name : %s \nSurname : %s \nGender : %s \nHeight : %.2lf m\nWeight : %d kg\n",name,surname,gender,height,weight);
                               printf("Body Mass Index : %.2lf kg\m2 \nYour body is super obesity!\n",sum);
                               }else if(sum<=50.00 && sum>40.00)
                               {
                               printf("Name : %s \nSurname : %s \nGender : %s \nHeight : %.2lf m\nWeight : %d kg\n",name,surname,gender,height,weight);
                               printf("Body Mass Index : %.2lf kg/m2 \nYour body is 3rd degree obesity\n!",sum);
                               }
                               else if(sum<=40.00 && sum>35.00)
                               {
                               printf("Name : %s \nSurname : %s \nGender : %s \nHeight : %.2lf m\nWeight : %d kg\n",name,surname,gender,height,weight);
                               printf("Body Mass Index : %.2lf kg/m2 \nYour body is 2nd degree obesity!\n",sum);
                               }
                               else if(sum<=35.00 && sum>30.00)
                               {
                               printf("Name : %s \nSurname : %s \nGender : %s \nHeight : %.2lf m\nWeight : %d kg\n",name,surname,gender,height,weight);
                               printf("Body Mass Index : %.2lf kg/m2 \nYour body is 1st degree obesity!\n",sum);
                               }else if(sum<=30.00 && sum>25.00)
                               {
                               printf("Name : %s \nSurname : %s \nGender : %s \nHeight : %.2lf m\nWeight : %d kg\n",name,surname,gender,height,weight);
                               printf("Body Mass Index : %.2lf kg/m2 \nYour body is fat!\n",sum);
                               }else if(sum<=25.00 && sum>18.50)
                               {
                               printf("Name : %s \nSurname : %s \nGender : %s \nHeight : %.2lf m\nWeight : %d kg\n",name,surname,gender,height,weight);
                               printf("Body Mass Index : %.2lf kg/m2 \nYour body is normal weight!\n",sum);
                               }else if(sum>=0.00 && sum<=18.50)
                               {
                               printf("Name : %s \nSurname : %s \nGender : %s \nHeight : %.2lf m\nWeight : %d kg\n",name,surname,gender,height,weight);
                               printf("Body Mass Index : %.2lf kg/m2 \nYour body is thin!\n",sum);      
                               }else{
                                     printf("Please enter valid values");
                                     }      
                                                  
         counter++;
         
         }
         return 0;
         getch();
}
