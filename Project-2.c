#include<stdio.h>
main()
{
	float basesalary,grosssalary,hra,da,ta;
	printf("enter the salary: ");
	scanf("%f",&basesalary);
	
	hra=0.1*basesalary;
	da=0.05*basesalary;
	ta=0.08*basesalary;
	
	grosssalary=basesalary+hra+da+ta;
	printf("grosssalary :%.2f",grosssalary);
}