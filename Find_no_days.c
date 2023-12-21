
#include <stdio.h> 
#define DAYS_IN_WEEK 7 

int main() 
{ 
	int number_of_days,year, week, days; ; 
	printf("Enter no of Days:");
	scanf("%d",&number_of_days);
	
	year = number_of_days / 365; 
	week = (number_of_days % 365) / 
			DAYS_IN_WEEK; 
	days = (number_of_days % 365) % 
			DAYS_IN_WEEK; 
	printf("years = %d",year); 
	printf("\nweeks = %d", week); 
	printf("\ndays = %d ",days);

	return 0; 
} 
