#include <stdio.h>

void Showintro(void) {

	printf("====================================\n");
	printf("=====[Hellow Haeyoon PaPa World!]======\n");
	printf("=====[Have a nice day~!]=====\n");
	printf("====================================\n\n");
}

int main(void) {

	Showintro();

	printf("====[Study_01. ��� ����]====\n");

	int num1 = 10;
	int num2 = 4;

	int rst1, rst2, rst3, rst4, rst5;

	printf("====[���� ����]====\n");
	printf("num1 : %d \n", num1);
	printf("num2 : %d \n", num2);
	
	printf("====[���� ����]====\n");
	rst1 = num1 + num2;
	rst2 = num1 - num2;
	rst3 = num1*num2;
	rst4 = num1 / num2;
	rst5 = num1%num2;

	printf("Result1(����) : %d + %d = %d \n",num1,num2,rst1);
	printf("Result2(����) : %d + %d = %d \n",num1, num2, rst2);
	printf("Result3(����) : %d + %d = %d \n",num1, num2, rst3);
	printf("Result4(������ ��) : %d + %d = %d \n",num1, num2, rst4);
	printf("Result5(������) : %d + %d = %d \n",num1, num2, rst5);
	
	return 0;
}