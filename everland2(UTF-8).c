#include <stdio.h>
#include <stdbool.h>

int main(){

	//1. constant
	const int CURRENT_YEAR = 23;
	const int CURRENT_MONTH = 4;
	const int CURRENT_DATE = 13;
	const int MONTH_DATE = 413;
	
	const int ticketAdultA = 62000;
	const int ticketAdultB = 52000;
	const int ticketAdultC = 46000;
	const int ticketAdultD = 68000;
	
	const int ticketChildSeniorA = 52000;
	const int ticketChildSeniorB = 42000;
	const int ticketChildSeniorC = 36000;
	const int ticketChildSeniorD = 58000;
	
	const int ticketDisableAdultA = 37000;
	const int ticketDisableAdultB = 31000;
	const int ticketDisableAdultC = 27000;
	const int ticketDisableAdultD = 40000;
	const int ticketDisableChildSeniorA = 31000;
	const int ticketDisableChildSeniorB = 25000;
	const int ticketDisableChildSeniorC = 21000;
	const int ticketDisableChildSeniorD = 34000;
	
	
	const int MAX_COUNT = 10;
	const int MIN_COUNT = 1;
	
	//2. variable
	int inputMonth;
	int inputDate;
	int inputBirth;
	int inputNumberTicket;
	int inputDiscountSelect;
	
	char dayOfSeason;
	int birthYear;
	int internationalAge;
	int ticketPriceForOne;
	int ticketPriceForOther;
	int totalTicketPrice;
	int isExit;


	//3. print - scanf
			printf("\n--------------------------------------------------------------------------------------\n");
	do{
//		while(true){}	
			printf("\t오늘은 몇월 몇일인가요?\n");
			scanf("%d %d", &inputMonth, &inputDate); 
			
			printf("\n\t구매자의 생년월일 6자리를 입력하세요. \n");
			scanf("%d", &inputBirth);
			
			
			printf("\n\t몇 장을 구매하시겠습니까? (최대 10매)\n");
			scanf("%d", &inputNumberTicket);
			
			if(inputNumberTicket < MIN_COUNT || inputNumberTicket > MAX_COUNT){
				printf("입력한 티켓 수가 유효한 범위를 벗어났습니다. 다시 입력해주세요.\n");
				continue;
			}
			
			printf("\n\t*우대사항을 선택하세요. \n");
			printf(" \t 신분증/ 서류 확인이 필요한 경우 현장매표소에서만 구입 가능합니다.\n");
			printf("\t1. 없음 (연령에 따른 우대는 자동처리 됩니다) \n");
			printf("\t2. 장애인(장애인등록증 제시) \n"); 
			printf("\t3. 국가유공자 우대 (증명서류 제시) \n");
			printf("\t4. 3자녀 이상 가정 우대 (증명서류 제시) \n");
			printf("\t5. 임신부 우대 (산모수첩 혹은 임신확인서 제시) \n");
			scanf("%d", &inputDiscountSelect);
			
			if(inputDiscountSelect < 1 || inputDiscountSelect > 5){
				printf("잘못된 입력입니다. 유효한 숫자를 다시 입력해주세요.\n");
				continue;
			}
			
		
			
			
			//4-1. inputBirth
			int juminYear = inputBirth / 10000; 
			if (juminYear >= 0 && juminYear < CURRENT_YEAR + 1){
				birthYear = juminYear + 2000;
			} else {
				birthYear = juminYear + 1900;
			} 	
			
			if((inputBirth % 10000) >= MONTH_DATE){
				internationalAge = (2000 + CURRENT_YEAR) - birthYear - 1;
			} else {
				internationalAge = (2000 + CURRENT_YEAR) - birthYear;
			}
			
			//4-2. inputDate & internationalAge & totalTicketPrice
	
			if(inputDate == 1 || inputDate == 2 || inputDate == 8 || inputDate == 9 || inputDate == 15 || 
				inputDate == 16 || inputDate == 22 || inputDate == 23 || inputDate == 29 || inputDate == 30){
					dayOfSeason = 'D';
					ticketPriceForOther = ticketAdultD;
					if((internationalAge >= 65) || (internationalAge >= 3 && internationalAge <= 12)){
						ticketPriceForOne = ticketChildSeniorD;
						totalTicketPrice = ticketPriceForOne + (ticketPriceForOther * (inputNumberTicket - 1));
					} else if(internationalAge < 3) {
						ticketPriceForOne = 0;
						totalTicketPrice = ticketPriceForOther * (inputNumberTicket - 1);
					} else {
						ticketPriceForOne = ticketPriceForOther;
						totalTicketPrice = ticketPriceForOther * inputNumberTicket;
					}
					
			} else {
					dayOfSeason = 'A';
					ticketPriceForOther = ticketAdultA;
					if((internationalAge >= 65) || (internationalAge >= 3 && internationalAge <= 12)){
						ticketPriceForOne = ticketChildSeniorA;
						totalTicketPrice = ticketPriceForOne + (ticketPriceForOther * (inputNumberTicket - 1));
					} else if(internationalAge < 3) {
						ticketPriceForOne = 0;
						totalTicketPrice = ticketPriceForOther * (inputNumberTicket - 1);
					} else {
						ticketPriceForOne = ticketPriceForOther;
						totalTicketPrice = ticketPriceForOther * inputNumberTicket;
					}
			}
			
			//4-2.  inputDiscountSelect & April
			int inputDisableSelect = 0;
			if(inputDiscountSelect == 2){
				printf("\t장애인 등록증에 따른 분류를 선택해주세요.\n");
				printf("\t1. 장애의 정도가 심한 장애인\n");
				printf("\t2. 장애의 정도가 심하지 않은 장애인 \n");
				scanf("%d", inputDisableSelect);
				while(inputDisableSelect != 1 && inputDisableSelect !=2){
					printf("잘못된 입력입니다. 다시 입력해주세요. \n");
					scanf("%d", &inputDisableSelect);
				}
				
				if(inputDate == 1 || inputDate == 2 || inputDate == 8 || inputDate == 9 || inputDate == 15 || 
				inputDate == 16 || inputDate == 22 || inputDate == 23 || inputDate == 29 || inputDate == 30){
					dayOfSeason = 'D';
					ticketPriceForOther = ticketAdultD;
					if((internationalAge >= 65) || (internationalAge >= 3 && internationalAge <= 18)){
						ticketPriceForOne = ticketDisableChildSeniorD;
						totalTicketPrice = (ticketPriceForOne * 2) + (ticketPriceForOther * (inputNumberTicket - 2)); 
					} 
					
				}
				
				
				
				
				
				
			} else {
				printf("잘못된 입력입니다. 다시 입력해주세요. \n");
				continue;
			}
			 
			
			
	
			//5. print
			printf("=====================에버랜드=====================================\n");
			printf("\t%d월 %d일 기준입니다.\n", inputMonth, inputDate);
			printf("\t선택하신 날짜는 %c 에 해당합니다\n", dayOfSeason);
			printf("\t만 나이는 %d세 입니다.\n",internationalAge);  
			printf("\t선택한 우대 사항은 %d입니다. \n", inputDiscountSelect);
			printf("\t티켓의 총 가격은 : %d원 입니다.\n", totalTicketPrice);
			printf("\t감사합니다.\n");
			
			printf("\n==================================================================\n");
			printf("\t계속 발권 하시겠습니까?\n");
			printf("\t1. 티켓 발권\n");
			printf("\t2. 종료\n");
			scanf("%d", &isExit);
			
		} while(isExit != 2);
		
		printf("\n\t구매해주셔서 감사합니다. 환상의 나라 에버랜드를 즐겁게 이용해주세요!\n");	
		
		return 0;
}


