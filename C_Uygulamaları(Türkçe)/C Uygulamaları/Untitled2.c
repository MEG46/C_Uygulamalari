
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int i,j;
	int satir;
	int sutun;
	int k=0;
	int l=0;
	printf("Please enter a number : ");
	scanf("%d",&satir);
	fflush(stdin);
	printf("Please enter a number : ");
	scanf("%d",&sutun);
	fflush(stdin);
	int arr[satir][sutun];
	int arr1[satir][sutun];
	int d=satir-1;
	for(i=0;i<satir;i++){
	    for(j=0;j<sutun;j++){
		arr[i][j]=(i+1)*(j+1);
	}
}
	printf("\n\n-------------------------------\n\n");
	printf("Normal :");
	printf("\n\n-------------------------------\n\n");
for(i=0;i<satir;i++){
	for(j=0;j<sutun;j++){
		printf("%d\t",arr[i][j]);
	}
	printf("\n");
}		
	
for(i=0;i<satir;i++){
	    for(j=0;j<sutun;j++){
		arr1[i][j]=(i+1)*(j+1);
	}
}

	printf("\n\n-------------------------------\n\n");
	printf("Reverse:");
	printf("\n\n-------------------------------\n\n");
for(i=satir-1;0<=i;i--){
	for(j=sutun-1;0<=j;j--){
		printf("%d\t",arr1[i][j]);
	}
	printf("\n");
}		


	return 0;
}