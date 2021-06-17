#include<stdio.h>

void greeting(char name[]);
void helloWorld();

int main()
{
	char name[] = "Shubham Jain";
	greeting(name);
	return 0;
}

void greeting(char name[])
{
	printf("Hey, Where was you ?.. %s", name);
	return;
}
