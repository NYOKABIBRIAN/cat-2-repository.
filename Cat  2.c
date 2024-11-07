//program  to show hours worked in a week and weekly wage
// Name :nyokabi brian warui
//Reg no:CT101/G/21530/24
#include <stdio.h>
int main() 
{
int hours_worked, hourly_wage;
double gross_pay, taxes, net_pay;
printf("Enter hours worked in a week: ");
scanf("%d", &hours_worked);
printf("Enter hourly wage: ");
scanf("%d", &hourly_wage);
if (hours_worked > 40)
 {
gross_pay = 40 * hourly_wage + (hours_worked - 40) * hourly_wage * 1.5;
} 
else {
gross_pay = hours_worked * hourly_wage;
}
if (gross_pay <= 600) {
taxes = gross_pay * 0.15;
} else 
{
taxes = 600 * 0.15 + (gross_pay - 600) * 0.20;
}
net_pay = gross_pay - taxes;

printf("Gross pay: $%.2f\n", gross_pay);
printf("Taxes: $%.2f\n", taxes);
printf("Net pay: $%.2f\n", net_pay);
return 0;
}