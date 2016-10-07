#include <stdio.h>

void Showintro(void) {

	printf("====================================\n");
	printf("=====[Hellow Haeyoon PaPa World!]======\n");
	printf("=====[Have a nice day~!]=====\n");
	printf("====================================\n\n");
}

int main(void) {

	Showintro();

	printf("====[Study_01. »ê¼ú ¿¬»ê]====\n");

	int num1 = 10;
	int num2 = 4;

	int rst1, rst2, rst3, rst4, rst5;

	printf("====[º¯¼ö ¼±¾ð]====\n");
	printf("num1 : %d \n", num1);
	printf("num2 : %d \n", num2);
	
	printf("====[º¯¼ö ¿¬»ê]====\n");
	rst1 = num1 + num2;
	rst2 = num1 - num2;
	rst3 = num1*num2;
	rst4 = num1 / num2;
	rst5 = num1%num2;

	printf("Result1(µ¡¼À) : %d + %d = %d \n",num1,num2,rst1);
	printf("Result2(»¬¼À) : %d + %d = %d \n",num1, num2, rst2);
	printf("Result3(°ö¼À) : %d + %d = %d \n",num1, num2, rst3);
	printf("Result4(³ª´©±â ¸ò) : %d + %d = %d \n",num1, num2, rst4);
	printf("Result5(³ª¸ÓÁö) : %d + %d = %d \n",num1, num2, rst5);
	
	return 0;
}