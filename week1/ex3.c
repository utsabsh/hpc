#include<stdio.h>
#include<stdlib.h>
int main( int argc, char *argv[]){
	int sum=0;
	if(argc>1){
		printf("argument passed.\n");
		for(int i=0;i<5;i++){
			printf("argv[%d]= %s \n",i,argv[i]);
			sum+= atoi(argv[i]);
		}
		printf(" sum = %d\n", sum);
	}else{
		printf("no arugment passed. \n");
		printf("program file name %s\n", argv[0]);
	}
	return 0;
}