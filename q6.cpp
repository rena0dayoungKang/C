//1. 환전 프로그램
//if문과 const 사용해보기 
#include <stdio.h>
#include <math.h>

int main(){
	//1. 상수 설정 
	const float usd = 1319.44;
	const float jpy = 9.95;
	const float eur = 1438.05;
	const float cny = 191.86;
	const float gbp = 1637.88;
	
	
	//2. 변수 설정
	int koreanMoney;
	int selectCountry;
	
	
	 
	
	printf("환전을 원하는 금액을 입력하세요(원화) : ");
	scanf("%d", &koreanMoney);

	printf("환전할 외화를 선택하세요 (1 :USD, 2 : JPY, 3 : EUR, 4 : CNY, 5 : GBP) :  ");
	scanf("%d", &selectCountry);
	
	if(selectCountry == 1){
		printf("기준 환율 : %.2f\n", usd);
		printf("환전 결과\n");
		printf("달러 : %d달러\n", (int)(koreanMoney / usd));
		int dollar = (int)(koreanMoney / usd);
		printf("거스름 : %.2f원\n", koreanMoney - (dollar * usd));
		float change = koreanMoney - (dollar * usd);
		printf("거스름돈 : %.0lf원\n", change);
	}
	
	
	if(selectCountry == 2){
		printf("기준 환율 : %.2f\n", jpy);
		printf("환전 결과\n");
		int yen = (int)(koreanMoney / jpy);
		if(yen % 1000 != 0){
			yen = yen - (yen % 1000);
			printf("엔 : %d엔\n", yen);
		} else {
			printf("엔 : %d엔\n", yen);
		}		
		printf("거스름 : %.2f원\n", koreanMoney - (yen * jpy));
		float change = koreanMoney - (yen * jpy);
		printf("거스름돈 : %.0lf원\n", change);
	}
	
	if(selectCountry == 3){
		printf("기준 환율 : %.2f\n", eur);
		printf("환전 결과\n");
		int euro = (int)(koreanMoney / eur);
		if(euro % 5 != 0){
			euro = euro - (int)(euro / 5);
			printf("유로 : %d유로\n", euro);
		} else {
			printf("유로 : %d유로\n", euro);
		}
		printf("거스름 : %.2f원\n", koreanMoney - (euro * eur));
		float change = koreanMoney - (euro * eur);
		printf("거스름돈 : %.0lf원\n", change);
	}
	
	if(selectCountry == 4){ 
		printf("기준 환율 : %.2f\n", cny);
		int yuan = (int)(koreanMoney / cny);
		printf("환전 결과 : %d위안\n", yuan);
		if(yuan < 100){
			printf("%d 위안 : 100위안 단위로만 구매할 수 있습니다.", (int)yuan);
		} else if(yuan >= 100 && yuan % 100 != 0){
			yuan = yuan - (yuan % 100);
			printf("위안 : %d위안\n", yuan);
		} else {
			printf("위안 : %d위안\n", yuan);	
		}
		printf("거스름 : %.2f원\n", koreanMoney - (yuan * cny));
		float change = koreanMoney - (yuan * cny);
		printf("거스름돈 : %.0lf원\n", change);
	}
	
	if(selectCountry == 5){
		printf("기준 환율 : %.2f\n", gbp);
		printf("환전 결과\n");
		int pound = (int)(koreanMoney / gbp);
		if(pound % 5 != 0){
			pound = pound - (int)(pound / 5);
			printf("유로 : %d유로\n", pound);
		} else {
			printf("유로 : %d유로\n", pound);
		}
		printf("거스름 : %.2f원\n", koreanMoney - (pound * gbp));
		float change = koreanMoney - (pound * gbp);
		printf("거스름돈 : %.0lf원\n", change);
	}
	
} 
