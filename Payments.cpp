#include <stdio.h>

main()
{
	char name[50],work_code[10];
	int objects;
	int total_amount; 
	int commission;
	int net_payment;
	
	
	printf("Input your name:");
	scanf("%s",&name);
	
	printf("Welcome Mr/Mrs.%s, to Alidad Payment Services!");
	printf("Please enter your work code to verify:");
    scanf("%s",&work_code);
	
	printf("Input the objects sold this month:");
	scanf("%d",&objects);
	
	total_amount=objects * 450;
	commission=total_amount * 0.2;
	net_payment=20000 + commission;
	
	printf("The commission for the objects sold is:%d",commission);
	printf("the net payment to be allocated to your account is, %d,and it is set to be allocated before the beginning of the next month.",net_payment);
	return 0;
}