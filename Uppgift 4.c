/********************************************************************************
* Uppgift 4.c: Sorterar och skriver ut en arrey i terminalen via funktioner. 
********************************************************************************/

/* Inkluderingsalternativ */
#include <stdio.h>

/********************************************************************************
* sort_data: Sorterar v�r arrey i stigande ordning genom att kolla om elementet
*            till v�nster �r st�rre �n det till h�ger. Om det �r sant s� byter 
*            vi plats p� dessa. 
*            
*            double temp: Anv�nds f�r att tempor�rt lagra det v�rdet som vi 
*                         byter plats p�.
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
* print_data: Skriver ut v�r array.
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
* main: Tilldelar en arrey med flyttal i obest�md ordning.
*       Int size tar reda p� storleken av arryen. 
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