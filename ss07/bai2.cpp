#include<stdio.h>
int main(){
	int arrayInt[5]; 
	int i;
	for(i=0;i<sizeof(arrayInt)/sizeof(int);i++){
		printf("array[%d]= \n",i++);
		 scanf("%d",&arrayInt[i]) ;
		 return 0; 
		 
		 
	} 
} 
