#include <stdio.h>

int plus(int a, int b);
int minus(int a, int b);
int multi(int a, int b);
float div(float a, float b);
int div(int a,  int b);
int div(int a,  int b, int c);

void main(){
	
	//입력부  
	int resultA = 0, int resultB = 0, int resultC = 0, a = 0, b = 0;
	float resultD = 0.00;
	scanf("%d %d", &a, &b);
	
	
	//계산부 
	resultA = plus(a, b);
	resultB = minus(a, b);
	resultC = multi(a, b);
	resultD = div(a, b);
	resultE = div(a, b);
	  //플롯형으로 바꿔야하는데.. 
	
	
	//출력부  
	printf("a + b = %d\n", resultA);
	printf("a - b = %d\n", resultB);
	printf("a * b = %d\n", resultC);
	printf("a / b = %f\n", resultD);
	printf("a / b = %d\n", resultE);
	
	return 0;
}

int plus(int a, int b) {
	return a + b;
}

int minus(int a, int b) {
	return a - b;
}

int multi(int a, int b) {
	return a * b;
}

//같은 div 이름의 함수인데 파라미터가 float 이 오냐, int가 오냐에따라서 다른 함수가 호출된다. 
float div(float a,  float b) {
	return (float)a / (float)b;
}

//같은 div 이름의 함수인데 파라미터의 갯수에 따라서도 다른 함수가 호출된다. 
int div(int a,  int b) {
	return a / b;
}

int div(int a,  int b, int c) {
	return a / b / c;
}


//결과물을 여러개 하고 싶으면? 리턴 타입이 배열이 되면 된다. but, 배열은 같은 값 형태만 된다. 
//
















