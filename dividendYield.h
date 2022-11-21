#define NUM 5
#define STRMAX 60

struct Info
{
	double sharePrice;
	double dividend;
	double Dyield;
	char companyName[STRMAX];
	char stockShare[STRMAX];
	char stockValuation[STRMAX];
};


double yieldDividend(struct Info*);

char* stockValuation(struct Info* info);

void Clear(void);