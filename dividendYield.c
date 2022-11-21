#include <stdio.h>
#include <string.h>
#include "dividendYield.h"

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
}