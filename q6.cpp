//1. 환전 프로그램
//if문과 const 사용해보기 
#include <stdio.h>
#include <math.h>

int main(){
	//1. 상수 설정 
	const float USD = 1319.44;
	const float JPY = 9.95;
	const float EUR = 1438.05;
	const float CNY = 191.86;
	const float GBP = 1637.88;
	
	
	//2. 변수 설정
	int koreanMoney;
	int selectCountry;
	int dollar;
	float change;
	int roundChange;
	
	 
	//3. 출력단 
	printf("환전을 원하는 금액을 입력하세요(원화) : ");
	scanf("%d", &koreanMoney);

	printf("환전할 외화를 선택하세요 (1 :USD, 2 : JPY, 3 : EUR, 4 : CNY, 5 : GBP) :  ");
	scanf("%d", &selectCountry);
	
	if(selectCountry == 1){
		printf("기준 환율 : %.2f\n", USD);
		printf("환전 결과\n");
		printf("달러 : %d달러\n", (int)(koreanMoney / USD));
		dollar = (int)(koreanMoney / USD);
		printf("거스름 : %.2f원\n", koreanMoney - (dollar * USD));
		change = koreanMoney - (dollar * USD);
	}
	
	
	if(selectCountry == 2){
		printf("기준 환율 : %.2f\n", JPY);
		printf("환전 결과\n");
		int yen = (int)(koreanMoney / JPY);
		if(yen % 1000 != 0){
			yen = yen - (yen % 1000);
			printf("엔 : %d엔\n", yen);
		} else {
			printf("엔 : %d엔\n", yen);
		}		
		printf("거스름 : %.2f원\n", koreanMoney - (yen * JPY));
		change = koreanMoney - (yen * JPY);
	}
	
	if(selectCountry == 3){
		printf("기준 환율 : %.2f\n", EUR);
		printf("환전 결과\n");
		int euro = (int)(koreanMoney / EUR);
		if(euro % 5 != 0){
			euro = euro - (int)(euro / 5);
			printf("유로 : %d유로\n", euro);
		} else {
			printf("유로 : %d유로\n", euro);
		}
		printf("거스름 : %.2f원\n", koreanMoney - (euro * EUR));
		change = koreanMoney - (euro * EUR);
	}
	
	if(selectCountry == 4){ 
		printf("기준 환율 : %.2f\n", CNY);
		int yuan = (int)(koreanMoney / CNY);
		printf("환전 결과 : %d위안\n", yuan);
		if(yuan < 100){
			printf("%d 위안 : 100위안 단위로만 구매할 수 있습니다.", (int)yuan);
		} else if(yuan >= 100 && yuan % 100 != 0){
			yuan = yuan - (yuan % 100);
			printf("위안 : %d위안\n", yuan);
		} else {
			printf("위안 : %d위안\n", yuan);	
		}
		printf("거스름 : %.2f원\n", koreanMoney - (yuan * CNY));
		change = koreanMoney - (yuan * CNY);
	}
	
	if(selectCountry == 5){
		printf("기준 환율 : %.2f\n", GBP);
		printf("환전 결과\n");
		int pound = (int)(koreanMoney / GBP);
		if(pound % 5 != 0){
			pound = pound - (int)(pound / 5);
			printf("파운드 : %d파운드\n", pound);
		} else {
			printf("파운드 : %d파운드\n", pound);
		}
		printf("거스름 : %.2f원\n", koreanMoney - (pound * GBP));
		change = koreanMoney - (pound * GBP);
	}
		roundChange = round((int)change / 10 * 10);
		printf("거스름돈 : %d원\n", roundChange);
		
		int tenThousandWon = roundChange / 10000;
		int fiveThousandWon = (roundChange - tenThousandWon * 10000) / 5000;
		int thousandWon = (roundChange - tenThousandWon * 10000 - fiveThousandWon * 5000) / 1000;		
		int fiveHundredWon = (roundChange - tenThousandWon * 10000 - fiveThousandWon * 5000 - thousandWon * 1000) / 500;
		int oneHundredWon = (roundChange - tenThousandWon * 10000 - fiveThousandWon * 5000 - thousandWon * 1000 - fiveHundredWon * 500) / 100;
		int fiftyWon = (roundChange - tenThousandWon * 10000 - fiveThousandWon * 5000 - thousandWon * 1000 - fiveHundredWon * 500 - oneHundredWon * 100)  / 50;
		int tenWon = (roundChange - tenThousandWon * 10000 - fiveThousandWon * 5000 - thousandWon * 1000 - fiveHundredWon * 500 - oneHundredWon * 100 - fiftyWon * 50) / 10;
		
		printf("10000원 : %d 개\n", tenThousandWon);
    		printf("5000원 : %d 개\n", fiveThousandWon);
    		printf("1000원 : %d 개\n", thousandWon);
		printf("500원 : %d 개\n", fiveHundredWon);
    		printf("100원 : %d 개\n", oneHundredWon);
    		printf("50원 : %d 개\n", fiftyWon);
    		printf("10원 : %d 개\n", tenWon);
		
	
		
	return 0;
} 
