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
	
	
	 
	//3. ��´� 
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");
	scanf("%d", &koreanMoney);

	printf("ȯ���� ��ȭ�� �����ϼ��� (1 :USD, 2 : JPY, 3 : EUR, 4 : CNY, 5 : GBP) :  ");
	scanf("%d", &selectCountry);
	
	if(selectCountry == 1){
		printf("���� ȯ�� : %.2f\n", USD);
		printf("ȯ�� ���\n");
		printf("�޷� : %d�޷�\n", (int)(koreanMoney / USD));
		int dollar = (int)(koreanMoney / USD);
		printf("�Ž��� : %.2f��\n", koreanMoney - (dollar * USD));
		float change = koreanMoney - (dollar * USD);
		printf("�Ž����� : %.0lf��\n", change);
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
		float change = koreanMoney - (yen * JPY);
		printf("�Ž����� : %.0lf��\n", change);
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
		float change = koreanMoney - (euro * EUR);
		printf("�Ž����� : %.0lf��\n", change);
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
		float change = koreanMoney - (yuan * CNY);
		printf("�Ž����� : %.0lf��\n", change);
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
		float change = koreanMoney - (pound * GBP);
		printf("�Ž����� : %.0lf��\n", change);
	}
	
} 
