#include <stdio.h>
#define MAX 10

void main(){
	
	//1. variable
	int num[MAX];
	int i, j, temp;
	int flag = 0;
	int low = 0, high = MAX - 1, mid;
	int search;
	
	//2. input Numbers
	for(i = 0; i < MAX; i++){
		printf("[%d] 정수 입력 : ", i);
		scanf("%d", &num[i]);
	}
	
	
	//2. Selection Algorithm
	for(i = 0; i < MAX; i++){
		for(j = i + 1; j < MAX; j++){
			if(num[i] > num[j]){
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	printf("\n-----------------------------------------------------------------------------\n");
	
	
	//3. printf
	for(i = 0; i < MAX; i++){
		printf("[%d]\t", i);
	}
	printf("\n");
	
	for(i = 0; i < MAX; i++){
		printf(" %d\t", num[i]);
	}
	
	
	
	//4. Binary search
	printf("\n\n 찾을 데이터 : ");
	scanf("%d", &search);
	
	while(flag == 0 && low <= high){  //flag = 0 이면 데이터를 아직 못 찾았다.  
		mid = (low + high) / 2;
		
		if(search == num[mid]){
			flag = 1; 
		} else if(search > num[mid]) {
			low = mid + 1;
		} else{
			high = mid - 1;
		}
	}
	
	
	//printf
	if(flag == 1){   //flag = 1 이면 데이터를 찾았다.  
		printf("탐색 데이터 : [%d] %d\n", mid, num[mid]);
	} else {
		printf("No\n");
	}

}

