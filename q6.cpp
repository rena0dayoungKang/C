//1. ȯ�� ���α׷�
//if���� const ����غ��� 
#include <stdio.h>
#include <math.h>

int main(){
	//1. ��� ���� 
	const float USD = 1319.44;
	const float JPY = 9.95;
	const float EUR = 1438.05;
	const float CNY = 191.86;
	const float GBP = 1637.88;
	
	
	//2. ���� ����
	int koreanMoney;
	int selectCountry;
	int dollar;
	float change;
	int roundChange;
	
	 
	//3. ��´� 
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");
	scanf("%d", &koreanMoney);

	printf("ȯ���� ��ȭ�� �����ϼ��� (1 :USD, 2 : JPY, 3 : EUR, 4 : CNY, 5 : GBP) :  ");
	scanf("%d", &selectCountry);
	
	if(selectCountry == 1){
		printf("���� ȯ�� : %.2f\n", USD);
		printf("ȯ�� ���\n");
		printf("�޷� : %d�޷�\n", (int)(koreanMoney / USD));
		dollar = (int)(koreanMoney / USD);
		printf("�Ž��� : %.2f��\n", koreanMoney - (dollar * USD));
		change = koreanMoney - (dollar * USD);
	}
	
	
	if(selectCountry == 2){
		printf("���� ȯ�� : %.2f\n", JPY);
		printf("ȯ�� ���\n");
		int yen = (int)(koreanMoney / JPY);
		if(yen % 1000 != 0){
			yen = yen - (yen % 1000);
			printf("�� : %d��\n", yen);
		} else {
			printf("�� : %d��\n", yen);
		}		
		printf("�Ž��� : %.2f��\n", koreanMoney - (yen * JPY));
		change = koreanMoney - (yen * JPY);
	}
	
	if(selectCountry == 3){
		printf("���� ȯ�� : %.2f\n", EUR);
		printf("ȯ�� ���\n");
		int euro = (int)(koreanMoney / EUR);
		if(euro % 5 != 0){
			euro = euro - (int)(euro / 5);
			printf("���� : %d����\n", euro);
		} else {
			printf("���� : %d����\n", euro);
		}
		printf("�Ž��� : %.2f��\n", koreanMoney - (euro * EUR));
		change = koreanMoney - (euro * EUR);
	}
	
	if(selectCountry == 4){ 
		printf("���� ȯ�� : %.2f\n", CNY);
		int yuan = (int)(koreanMoney / CNY);
		printf("ȯ�� ��� : %d����\n", yuan);
		if(yuan < 100){
			printf("%d ���� : 100���� �����θ� ������ �� �ֽ��ϴ�.", (int)yuan);
		} else if(yuan >= 100 && yuan % 100 != 0){
			yuan = yuan - (yuan % 100);
			printf("���� : %d����\n", yuan);
		} else {
			printf("���� : %d����\n", yuan);	
		}
		printf("�Ž��� : %.2f��\n", koreanMoney - (yuan * CNY));
		change = koreanMoney - (yuan * CNY);
	}
	
	if(selectCountry == 5){
		printf("���� ȯ�� : %.2f\n", GBP);
		printf("ȯ�� ���\n");
		int pound = (int)(koreanMoney / GBP);
		if(pound % 5 != 0){
			pound = pound - (int)(pound / 5);
			printf("�Ŀ�� : %d�Ŀ��\n", pound);
		} else {
			printf("�Ŀ�� : %d�Ŀ��\n", pound);
		}
		printf("�Ž��� : %.2f��\n", koreanMoney - (pound * GBP));
		change = koreanMoney - (pound * GBP);
	}
		roundChange = round((int)change / 10 * 10);
		printf("�Ž����� : %d��\n", roundChange);
		
		int tenThousandWon = roundChange / 10000;
		int fiveThousandWon = (roundChange - tenThousandWon * 10000) / 5000;
		int thousandWon = (roundChange - tenThousandWon * 10000 - fiveThousandWon * 5000) / 1000;		
		int fiveHundredWon = (roundChange - tenThousandWon * 10000 - fiveThousandWon * 5000 - thousandWon * 1000) / 500;
		int oneHundredWon = (roundChange - tenThousandWon * 10000 - fiveThousandWon * 5000 - thousandWon * 1000 - fiveHundredWon * 500) / 100;
		int fiftyWon = (roundChange - tenThousandWon * 10000 - fiveThousandWon * 5000 - thousandWon * 1000 - fiveHundredWon * 500 - oneHundredWon * 100)  / 50;
		int tenWon = (roundChange - tenThousandWon * 10000 - fiveThousandWon * 5000 - thousandWon * 1000 - fiveHundredWon * 500 - oneHundredWon * 100 - fiftyWon * 50) / 10;
		
		printf("10000�� : %d ��\n", tenThousandWon);
    	printf("5000�� : %d ��\n", fiveThousandWon);
    	printf("1000�� : %d ��\n", thousandWon);
		printf("500�� : %d ��\n", fiveHundredWon);
    	printf("100�� : %d ��\n", oneHundredWon);
    	printf("50�� : %d ��\n", fiftyWon);
    	printf("10�� : %d ��\n", tenWon);
		
	
		
	return 0;
} 
