#include<stdio.h>
#include<stdlib.h>
int main()
{

float distanceEnKM;
float tempEnYard;

printf("entre la dist en Km: ");
scanf("%f", &distanceEnKM);

tempEnYard = distanceEnKM * 1093.61;

printf("tempEnYard : %F", tempEnYard);


return 0;

}


