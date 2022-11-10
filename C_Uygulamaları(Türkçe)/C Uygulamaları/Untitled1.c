#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int i,j;
	int satir;
	int sutun;
	printf("Please enter a number : ");
	scanf("%d",&satir);
	fflush(stdin);
	printf("Please enter a number : ");
	scanf("%d",&sutun);
	fflush(stdin);
	int arr[satir][sutun];
	int rez[satir][sutun];
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
for(j=0;j<sutun;j++){
	for(i=0;i<satir;i++){
		arr[j][i]=(i+1)*(j+1);
	}
}
	printf("\n\n-------------------------------\n\n");
	printf("Transporoz :");
	printf("\n\n-------------------------------\n\n");
	
for(j=0;j<sutun;j++){
    for(i=0;i<satir;i++){   
		printf("%d\t",arr[j][i]);
	}
	printf("\n");
}
	return 0;
}