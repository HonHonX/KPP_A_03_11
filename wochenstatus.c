#include<stdio.h>

int main () {

	/*
	*	Diese Programm soll nach der Eingabe einer Zahl
	*	als Kennzeichen (1-7) den Abschnitt der Woche angeben.  
	*/

	printf("\n ********************************");
	printf("\n *   ^,,,,^   *                 * ");
	printf("\n *  ( o x o)  * Wochenabschnitt * ");
	printf("\n *  ( 7   7)  *                 * ");
	printf("\n *   ´´´´´´   *         ©S.Buch * ");
	printf("\n ******************************** \n\n");
	
	//Einlesen der Kennzahl
	int kennzahl;
	printf("\nBitte geben Sie eine Kennzahl von 1-7 an: ");
	scanf("%d",&kennzahl);

	//Umwandlung der Kennzahl in einen Status
	char  wochenstatus;
	if (kennzahl>=1 && kennzahl<=3){
		wochenstatus = 'a'; //erste Wochenhälfte
	} else if (kennzahl==4 || kennzahl==5) {
		wochenstatus = 'b'; //zweite Wochenhälfte
	} else if (kennzahl==6 || kennzahl==7) {
		wochenstatus = 'c'; //Wochenende
	} 

	//Ausgabe des passenden Wochentags
	switch(wochenstatus) {
		case 'a': printf("\nDer %d. Tag der Woche gehört zur ersten Wochenhälfte.", kennzahl);
		break;	
		case 'b': printf("\nDer %d. Tag der Woche gehört zur zweiten Wochenhälfte.", kennzahl);
		break;	
		case 'c': printf("\nDer %d. Tag der Woche gehört zum Wochenende.", kennzahl);
		break;	
		default: printf("\nIhre Eingabe war ungültig. Bitte geben Sie eine Kennzahl von 1-7 ein.");
		break;
	}	

	//Ende
	printf("\n\n");
	return 0;
}
