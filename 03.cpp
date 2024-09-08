#include <stdio.h>
	int main(){
	float salary, taxrate,taxamount, netsalary;//Input the salary rate and taxrate 
	printf("Eenter your salary:");
	scanf("f%", &salary);
	printf("Enter the tax rate (in percentage):");
	scanf("f%",&taxrate);
	  taxamount=(taxrate/100)*salary;//Calculate the tax rate 
	  netsalary=salary-taxamount;//Calculte the salary rate 
    printf("Tax to be paid:% 2f, taxamout");//Display the calculated tax rate 
	printf("Salary after tax:% 2f, netsalary");// Display the calculated ralary
	  return 0;
	}
