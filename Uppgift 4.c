/********************************************************************************
* Uppgift 4.c: Sorterar och skriver ut en arrey i terminalen via funktioner. 
********************************************************************************/

/* Inkluderingsalternativ */
#include <stdio.h>

/********************************************************************************
* sort_data: Sorterar vår arrey i stigande ordning genom att kolla om elementet
*            till vänster är större än det till höger. Om det är sant så byter 
*            vi plats på dessa. 
*            
*            double temp: Används för att temporärt lagra det värdet som vi 
*                         byter plats på.
********************************************************************************/
void sort_data(double data[],
	           int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (data[j] < data[j + 1])
			{
				double temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}
	return;
}

/********************************************************************************
* print_data: Skriver ut vår array.
********************************************************************************/
void print_data(double data[],
	            int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%lg\n", data[i]);
	}
	return;
}

/********************************************************************************
* main: Tilldelar en arrey med flyttal i obestämd ordning.
*       Int size tar reda på storleken av arryen. 
* 
*       Anropar Funktionerna "sort_data" och "print_data".
* 
*       Returnerar "0" vid felfri kompilering. 
********************************************************************************/
int main(void)
{
	double data[] = { 7, 0.5, 2, 0.3, 0.1, 0.0, -10, 528.2, 8.0, 7.2, 2.3, 1100, 222 };
	int size = sizeof(data) / sizeof(data[0]);

	sort_data(data, size);
	print_data(data, size);

	return 0;
}