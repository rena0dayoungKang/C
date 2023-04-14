#include <stdio.h>
#include <time.h>

void main(){

	time_t current = time(NULL);   //time_t형 변수 current 선언  
	time(&current);		//time() 함수를 호출하여 현재 시간을 초 단위로 구한다. current변수에 저장한다. 
	struct tm* structTime; //로컬시간으로 변환한 시간을 담은 struct tm 형 포인터변수 structTime선언 
	structTime = localtime(&current);
	printf("년 : %d\n월 : %d\n일: %d\n", structTime->tm_year, structTime->tm_mon, structTime->tm_mday);
	
	 
}

