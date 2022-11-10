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
	int s,t;
	printf("Please enter a number : ");
	scanf("%d",&satir);
	fflush(stdin);
	printf("Please enter a number : ");
	scanf("%d",&sutun);
	fflush(stdin);
	int arr[satir][sutun];
	int arr1[satir][sutun];
	int mul[satir][sutun];
	int d=satir;
	int e=sutun;
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
	
for(i=satir-1,k=0;0<=i,k<d;i--,k++){
	    for(j=sutun-1,l=0;0<=j,l<e;j--,l++){
		arr1[k][l]=arr[i][j];
	}
}

	printf("\n\n-------------------------------\n\n");
	printf("Reverse:");
	printf("\n\n-------------------------------\n\n");
/*
for(i=satir-1;0<=i;i--){
	for(j=sutun-1;0<=j;j--){
		printf("%d\t",arr1[i][j]);
	}
	printf("\n");
}		
*/
for(i=0;i<d;i++){
	for(j=0;j<e;j++){
		printf("%d\t",arr1[i][j]);
	}
	printf("\n");
}
	printf("\n\n-------------------------------\n\n");
	printf("Mutiplication By Reverse:");
	printf("\n\n-------------------------------\n\n");
	for(s=0;s<d;s++){
	    for(t=0;t<e;t++){
		mul[s][t]=arr[s][t]*arr1[s][t];
	}
}
for(s=0;s<d;s++){
	for(t=0;t<e;t++){
		printf("%d\t",mul[s][t]);
	}
	printf("\n");
}
	return 0;
}