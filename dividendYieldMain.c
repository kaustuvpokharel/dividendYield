/*
Lab 5, dividendYieldMain
Work by: Kaustuv Pokharel
Student Id: 100045228
Submitted to: Profressor Miguel Watler
*/
#include <stdio.h>
#include <string.h>
#include "dividendYield.c"


int main()
{
    struct Info info[NUM]= { 0 }; 
    printf("\nStock Price Calcylator\n");
    printf("==================================\n");
    for (int i = 0; i < NUM; i++) 
    {
        printf("Enter the name of company %d: \n", i+1);
        scanf("%[^\n]", info[i].companyName, STRMAX);  
        Clear(); 
        printf("Enter %s's stock symbol: \n", info[i].companyName); 
        scanf("%[^\n]", info[i].stockShare, STRMAX); 
        Clear(); 
        printf("Enter %s's share price: \n", info[i].companyName); 
        scanf("%lf", &info[i].sharePrice); 
        printf("Enter %s's annual dividend: \n", info[i].companyName); 
        scanf("%lf", &info[i].dividend); 
        printf("==================================\n\n");
        Clear(); 

    }
    printf("\n THE CALCULATED CHART \n");
    printf("==================================\n\n");
    printf("COMPANY\t SYMBOL\t PRICE\t DIV\t YIELD\t VALUATION\n\n");
    for (int i = 0; i < NUM; i++) { 
        yieldDividend(&info[i]); 
        stockValuation(&info[i]); 
        printf("%s\t\t %s\t %1.2f\t %1.3f\t %1.3lf\t %s\n",
               info[i].companyName, info[i].stockShare, info[i].sharePrice, info[i].dividend, info[i].Dyield, info[i].stockValuation);
    }
    return 0;
}
//1.We use structures to use store data of different data types which is not possible using an array! 
//3. We use fuction here to devide the problem into structured parts, which makes the code easier, clear and less complex.
//2. We used for-loop and DO while loop in the program. We used these loops to recalulate the programs as many times as we want
//without rewriting it.

/*
double yieldDividend(struct Info* com)
{
		com->Dyield = com->dividend * 100 / com->sharePrice;
		return com->Dyield;
}
char* stockValuation(struct Info* com)
{
	if (com->Dyield > 5)
    {
		strcpy(com->stockValuation, "Undervalued");
	}
	if (com->Dyield == 5)
    {
		strcpy(com->stockValuation, "Fully valued");
	}
	if (com->Dyield < 5)
    {
		strcpy(com->stockValuation, "Overvalued");
	}
	return com->stockValuation;
}
void Clear(void)
{
	char str;
	do
    {
		str = getchar();
	} while (str != '\n');
} */

