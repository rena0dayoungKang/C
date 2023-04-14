#include <stdio.h>

void main(){
	
	int num[5];
	int i, j; 
	int temp;
	
	for(i = 0; i < 5; i++){
		printf("[%d] Input Number : ", i);
		scanf("%d", &num[i]);
	}
	
	//Add Selection Algorithm Course 
	for(i = 0; i < 5; i++){
		printf("\n[%d] : %d\n", i, num[i]); 
		for(j = i + 1; j < 5; j++){
			if(num[i] > num[j]){
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
			int a;
			for(a = 0; a < 5; a++){
				printf("%d\t", num[a]);
			}
			printf("\n");
		}
	}
	
	printf("\t \t \t After Selection \n");
	printf("----------------------------------------------------------------------------\n");
	for(i = 0; i < 5; i++){
		printf("[%d] : %d \t", i + 1, num[i]);
	} 
	printf("\n");

	
}

