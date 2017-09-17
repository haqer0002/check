#include <stdio.h>
float CtoF(float t);
float CtoK(float t);
float KtoC(float t);
float KtoF(float t);
float FtoC(float t);
float FtoK(float t);
int main(float temp, char system)
{
	/*float temp=-500;
	char system;*/
	/*printf("Number:");
	scanf("%f", &temp);
	printf("\nSymbol:");
	scanf("%s", &system);*/
	//printf("\n check %f", temp);
	if(system=='C')
	{
		if (temp<-273)
		{
			printf("Invalid input");
			return 0;
		}
		printf("C: %.2f , K: %.2f , F: %.2f", temp, CtoK(temp), CtoF(temp));
		return 0;
	}
	if(system=='F')
	{
		if (temp<-459.4)
		{
			printf("Invalid input");
			return 0;
		}
		printf("C: %.2f , K: %.2f , F: %.2f", FtoC(temp), FtoK(temp), temp);
		return 0;
	}
	if(system=='K')
	{
		if (temp<0)
		{
			printf("Invalid input");
			return 0;
		}
		printf("C: %.2f , K: %.2f , F: %.2f", KtoC(temp), temp, KtoF(temp));
		return 0;
	}
	printf("\nEND");
	return 0;
}
float CtoF(float t)
{
	return t*1.8+32;
}
float CtoK(float t)
{
	return t+273;
}
float KtoC(float t)
{
	return t-273;
}
float KtoF(float t)
{
	return CtoF(KtoC(t));
}
float FtoC(float t)
{
	return (t-32)/1.8;
}
float FtoK(float t)
{
	return CtoK(FtoC(t));
}