//로또 1 ~ 45숫자 6개를 중복없이 오름차순으로 출력하기

#include <stdio.h>
#include <stdlib.h>

#define MAX 6
#define RANGE 45

void random_select(int *numbers);
void sort_numbers(int *numbers);

int main() {
	int numbers[MAX];
	
	//랜덤 숫자 발생을 위해 사용되는 함수 srand() 무작위 수열을 초기화하기 위한 시드 값 설정 
	//time()함수는 현재 시간을 초 단위로 반환. 이를 이용하여 시드값 설정하면 매번 다른 랜덤숫자 
	srand((unsigned int) time(NULL));
	
	random_select(numbers);
	sort_numbers(numbers);
	
	return 0;
}

void random_select(int *numbers) {
	
	int i, j, temp;
	
	//1부터 45까지의 숫자 배열 numbers 생성 
   for (i = 0; i < RANGE ; i++) {  
   		numbers[i] = i + 1;		 
   }
   
   // numbers 배열을 무작위로 섞기 (Fisher-Yates shuffle 방법)
   for (i = 0; i < RANGE ; i++) {	 	//i가 0부터 44까지 증가하면서  
   		j = rand() % RANGE; 		//랜덤의 정수를 생성하여 j에 저장한다 
   		temp = numbers[i];			
   		numbers[i] = numbers[j];	//numbers[i] 값과 numbers[j]값을 서로 교환한다. 
   		numbers[j] = temp;			
   }
   
    printf("숫자 : ");
	for (i = 0; i < MAX; i++) {
		printf("%d ", numbers[i]);
	} 
	printf("\n");
}

void sort_numbers(int *numbers) {
	int i, j, min_idx, temp;
	
	 // 선택정렬 알고리즘 이용하여 오름차순 정렬
	 for(i = 0; i < MAX - 1; i++){
		min_idx = i;
		for(j = i + 1; j < MAX; j++){
			if(numbers[j] < numbers[min_idx]){
				min_idx = j;
			}
		}
		temp = numbers[min_idx];
		numbers[min_idx] = numbers[i];
		numbers[i] = temp;
	} 
	
	printf("오름차순 정렬 : ");
	for(i = 0; i < MAX; i++){
		printf("%d ", numbers[i]);
	} 
	printf("\n");
}
