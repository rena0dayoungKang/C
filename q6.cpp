//1. ȯ�� ���α׷�
//if���� const ����غ��� 
#include <stdio.h>
#include <math.h>

int main(){
	//1. ��� ���� 
	const float usd = 1319.44;
	const float jpy = 9.95;
	const float eur = 1438.05;
	const float cny = 191.86;
	const float gbp = 1637.88;
	
	
	//2. ���� ����
	int koreanMoney;
	int selectCountry;
	
	
	 
	
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");
	scanf("%d", &koreanMoney);

	printf("ȯ���� ��ȭ�� �����ϼ��� (1 :USD, 2 : JPY, 3 : EUR, 4 : CNY, 5 : GBP) :  ");
	scanf("%d", &selectCountry);
	
	if(selectCountry == 1){
		printf("���� ȯ�� : %.2f\n", usd);
		printf("ȯ�� ���\n");
		printf("�޷� : %d�޷�\n", (int)(koreanMoney / usd));
		int dollar = (int)(koreanMoney / usd);
		printf("�Ž��� : %.2f��\n", koreanMoney - (dollar * usd));
		float change = koreanMoney - (dollar * usd);
		printf("�Ž����� : %.0lf��\n", change);
	}
	
	
	if(selectCountry == 2){
		printf("���� ȯ�� : %.2f\n", jpy);
		printf("ȯ�� ���\n");
		int yen = (int)(koreanMoney / jpy);
		if(yen % 1000 != 0){
			yen = yen - (yen % 1000);
			printf("�� : %d��\n", yen);
		} else {
			printf("�� : %d��\n", yen);
		}		
		printf("�Ž��� : %.2f��\n", koreanMoney - (yen * jpy));
		float change = koreanMoney - (yen * jpy);
		printf("�Ž����� : %.0lf��\n", change);
	}
	
	if(selectCountry == 3){
		printf("���� ȯ�� : %.2f\n", eur);
		printf("ȯ�� ���\n");
		int euro = (int)(koreanMoney / eur);
		if(euro % 5 != 0){
			euro = euro - (int)(euro / 5);
			printf("���� : %d����\n", euro);
		} else {
			printf("���� : %d����\n", euro);
		}
		printf("�Ž��� : %.2f��\n", koreanMoney - (euro * eur));
		float change = koreanMoney - (euro * eur);
		printf("�Ž����� : %.0lf��\n", change);
	}
	
	if(selectCountry == 4){ 
		printf("���� ȯ�� : %.2f\n", cny);
		int yuan = (int)(koreanMoney / cny);
		printf("ȯ�� ��� : %d����\n", yuan);
		if(yuan < 100){
			printf("%d ���� : 100���� �����θ� ������ �� �ֽ��ϴ�.", (int)yuan);
		} else if(yuan >= 100 && yuan % 100 != 0){
			yuan = yuan - (yuan % 100);
			printf("���� : %d����\n", yuan);
		} else {
			printf("���� : %d����\n", yuan);	
		}
		printf("�Ž��� : %.2f��\n", koreanMoney - (yuan * cny));
		float change = koreanMoney - (yuan * cny);
		printf("�Ž����� : %.0lf��\n", change);
	}
	
	if(selectCountry == 5){
		printf("���� ȯ�� : %.2f\n", gbp);
		printf("ȯ�� ���\n");
		int pound = (int)(koreanMoney / gbp);
		if(pound % 5 != 0){
			pound = pound - (int)(pound / 5);
			printf("���� : %d����\n", pound);
		} else {
			printf("���� : %d����\n", pound);
		}
		printf("�Ž��� : %.2f��\n", koreanMoney - (pound * gbp));
		float change = koreanMoney - (pound * gbp);
		printf("�Ž����� : %.0lf��\n", change);
	}
	
} 
