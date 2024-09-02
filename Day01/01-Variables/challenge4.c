#include<stdio.h>
#include<stdlib.h>
int main()
{

float vitesseEnKmH;
float vitesseEnMs;

printf("entre la vitesseEnKmH: ");
scanf("%f", &vitesseEnKmH);

vitesseEnMs = vitesseEnKmH * 0.27778;

printf("vitesseEnMs : %F", vitesseEnMs);


return 0;

}


