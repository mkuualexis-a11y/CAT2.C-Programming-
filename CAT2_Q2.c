/*
Name:Alex Mwangi
Reg:CT101/G/26432/25
Description:working wage calculator
*/

#include <stdio.h>

int main()
{
	float hours,rate,tax,grosspay,netpay;
	
	printf("Enter the hours you worked in a week:\n");
	scanf("%f",&hours);
	
	printf("Enter the hourly wage:\n");
	scanf("%f", &rate);
	
	if(hours > 40)
		grosspay = (40 * rate) + ((hours - 40) * rate * 1.5);
	else 
		grosspay = hours * rate;
	//tax
	if(grosspay <= 600)
		tax = 0.15 * grosspay;
	else
		tax = (0.15 * 600) + (0.20 * (grosspay - 600));
	// netpay
	netpay = grosspay - tax;
	
	printf("Gross pay: $%.2f \n",grosspay);
	printf("Taxes:$%.2f \n",tax);
	printf("Net pay: $%.2f \n",netpay);

	return 0;
}