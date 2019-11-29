#include<stdio.h>
#include<stdlib.h>
#include"Information.h"

void main(void)
{
	Person P;
	printf("Pleast input your name¡G ");
	scanf_s("%s", &P.name, 8);
	printf("Please input your gender(0 for worm, 1 for man)¡G ");
	scanf_s("%d", &P.gender);
	printf("Please input your age¡G ");
	scanf_s("%d", &P.age);

	printf("\nHI! %s. ", P.name);
	if (P.gender == 0)
	{
		printf("You are a %d-year-old woman.\n", P.age);
	}
	else if(P.gender==1)
	{
		printf("You are a %d-year-old man.\n", P.age);
	}
	else
	{
		printf("Error");
	}
	system("pause");
}