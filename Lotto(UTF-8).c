//로또 1 ~ 45숫자 6개를 중복없이 오름차순으로 출력하기

#include <stdio.h>
#include <stdlib.h>


void random_numbers(int*arr, int range) {
	int i, j;
	int RANGE = 45;
	//랜덤의 숫자를 6개 중복없이 뽑기 
	for (i = 0; i < RANGE ; i++) { //1부터 45까지의 숫자 배열 numbers 생성
		arr[i] = i + 1; //i 가 0부터 44까지 증가하면서 i + 1값을 배열에 저장
	}

	// numbers 배열을 무작위로 섞기 (Fisher-Yates shuffle 방법)
	for (i = 0; i < RANGE ; i++) { //i가 0부터 44까지 증가하면서
		j = rand() % RANGE; //랜덤의 정수를 생성하여 j에 저장한다
		int temp = arr[i];
		arr[i] = arr[j]; //numbers[i] 값과 numbers[j]값을 서로 교환한다.
		arr[j] = temp;
	}
}

void selection_sort(int*arr, int MAX) {
	
	int max = 6;
	//선택정렬 알고리즘 이용하여 오름차순 정렬  
	int i, j, min_idx, temp;
	for (i = 0; i < max - 1; i++) {     // i는 0부터 5까지 1번째 씩 증가하면서  
    	min_idx = i;                    // min_idx라는 변수에 i번째를 일단 저장함 
    	for (j = i + 1; j < max; j++) {   // i번호의 하나 다음 수인 j 번째 와 비교한다. 
        	if (arr[j] < arr[min_idx]) { //j번째 숫자와 min_idx의 숫자를 비교해서 min_idx가 크다면  
                min_idx = j;                   //min_idx는 j번째가 된다. 
        	}
    	}
    	temp = arr[min_idx];
    	arr[min_idx] = arr[i];
    	arr[i] = temp;
	}
}

int main() {
	int i;
	int numbers[6];
	random_numbers(numbers, range);
	printf("숫자 : ");


	for (i = 0; i < max; i++) {
	    printf("%d ", numbers[i]);
	}
	printf("\n");
	
	selection_sort(numbers, max);
	printf("오름차순 정렬 : ");
	for (i = 0; i < max; i++) {
	    printf("%d ", numbers[i]);
	}
	printf("\n");
	
	return 0;
}


