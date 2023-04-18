#include <stdio.h>

const float USD = 1194.50, JPY = 1101.48, EUR = 1316.64, CNY = 168.46, GBP = 1489.37;
	
float getExchangeRate();
void printExchangeResult (int menuNumber, float exchangeRate, int exchangeResult, int chageResult);

int main(){
	
	float won = 0.0;
	float exchangeRate = 0.0;
	float calcExchangeRate = 0.0;
	float exchange = 0.0;
	int menuNumber = 0;
	int changeResult = 0;
	int exchangeResult = 0;
	int calcChange = 0;
	
	
	
	//입력부
	printf("환전을 원하는 금액을 입력하세요 (원화) :  ");
	scanf("%f", &won);
	
	//1~5선택이 아니면 다시 계속 선택하세요 추가* 어느 조건과 상관없이 처음에는 무조건 입력을 한번 수행해야하기때문에 do~while이 효율적 
	do {
		printf("환전할 외화를 선택하세요 (1: USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP) :  ");
		scanf("%d", &menuNumber); 
	} while (menuNumber < 1 || menuNumber > 5);
	
	
	//처리부
	exchangeRate = getExchangeRate(menuNumber);
	
	calcExchangeRate = exchangeRate; 	 //변수를 바로 사용하지 않고 변수하나를 만들어서 저장해서 사용한다!? 
	if (menuNumber == 2) {
		calcExchangeRate /= 100; //엔화는 100엔단위의 환율 값 
	}
	exchange = won / calcExchangeRate;	//원화를 환율로 나눈 값. 소수점 처리를 위한 환전 금액 
	exchangeResult = exchange;			//소수점을 뺀 정수형 환전금액 
	changeResult = won - (exchangeResult * calcExchangeRate); //거스름돈 
	
	//거스름돈 1원단위 처리
	calcChange = changeResult % 10;  
	changeResult -= calcChange;
	
	//출력부
	printExchangeResult(menuNumber, exchangeRate, exchangeResult, changeResult);

	return 0;
}


//입력받은 메뉴번호로 외화를 선택한 값의 환율을 지정하는 함수  
float getExchangeRate(int num){
	
	float exchangeRate = 0.0;
	switch(num){
		case 1 : 
			exchangeRate = USD;
			break;
		case 2 : 
			exchangeRate = JPY;
			break;
		case 3 :
			exchangeRate = EUR;
			break;
		case 4 :
			exchangeRate = CNY;
			break;
		case 5 :
			exchangeRate = GBP;
			break;
		default :
			break;
	}
	return exchangeRate;
} 


//출력함수 
void printExchangeResult (int menuNumber, float exchangeRate, int exchangeResult, int changeResult) {
	
	printf("기준환율 : %.2f\n", exchangeRate);
	printf("환전 결과\n");
	switch(menuNumber){
		case 1 :
			printf("달러 : %d달러\n", exchangeResult);
			break;
		case 2 :
			printf("엔 : %d엔\n", exchangeResult);
			break;
		case 3 :
			printf("유로 : %d유로\n", exchangeResult);
			break;
		case 4 :
			printf("위안 : %d위안\n", exchangeResult);
			break;
		case 5 :
			printf("파운드 : %d파운드 \n", exchangeResult);
			break;
	}
	printf("거스름돈 : %d원 \n", changeResult);
} 















