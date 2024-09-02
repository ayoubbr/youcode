#include<stdio.h>
#include<stdlib.h>
int main()
{

float tempEnC;
float tempEnK;

printf("entre la temp en C: ");
scanf("%f", &tempEnC);

tempEnK = tempEnC + 273.15;

printf("tempEnK : %f", tempEnK);


return 0;

}


