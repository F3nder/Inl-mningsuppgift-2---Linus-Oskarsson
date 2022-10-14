/********************************************************************************
* Uppgift 4.c: Sorterar och skriver ut en arrey i terminalen via funktioner. 
********************************************************************************/

/* Inkluderingsalternativ */
#include <stdio.h>

/********************************************************************************
* sort_data_rising: Sorterar v�r arrey i stigande ordning genom att kolla om 
*                   elementet till v�nster �r st�rre �n det till h�ger. Om det
*                   �r sant s� byter vi plats p� dessa. 
*            
*                   double temp: Anv�nds f�r att tempor�rt lagra det v�rdet som 
*                                vi byter plats p�.
********************************************************************************/
void sort_data_rising(double data[],
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
* sort_data_falling: Sorterar v�r arrey i fallande ordning genom att kolla om 
*                    elementet till v�nster �r mindre �n det till h�ger. Om det 
*                    �r sant s� byter vi plats p� dessa.
*
*                    double temp: Anv�nds f�r att tempor�rt lagra det v�rdet som
*                                 vi byter plats p�.
********************************************************************************/
void sort_data_falling(double data[],
	                   int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (data[j] > data[j + 1])
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
* print_data: Skriver ut v�r array med tillh�rande rubrik.
********************************************************************************/
void print_data(double data[],
	            int size)
{  
	if (data[0] < data[1])
	{
		printf("Rising:\n");
	}
	else
	{
		printf("Falling:\n");
	}

	printf("------------------------------------------------------------\n");
	for (int i = 0; i < size; i++)
	{
		printf("%lg\n", data[i]);
	}
	printf("------------------------------------------------------------\n\n");

	return;
}

/********************************************************************************
* main: Tilldelar en arrey med flyttal i obest�md ordning.
*       Int size tar reda p� storleken av arryen. 
* 
*       Anropar Funktionerna "sort_data_rising" och "sort_data_falling" 
        samt "print_data".
********************************************************************************/
int main(void)
{
	double data_rising[] = { 7, 0.5, 2, 0.3, 0.1, 0.0, -10, 528.2, 8.0, 7.2, 2.3, 1100, 222 };
	double data_falling[] = { 7, 0.5, 2, 0.3, 0.1, 0.0, -10, 528.2, 8.0, 7.2, 2.3, 1100, 222 };

	int size = sizeof(data_rising) / sizeof(data_rising[0]);

	sort_data_rising(data_rising, size);
	sort_data_falling(data_falling, size);
	print_data(data_rising, size);
	print_data(data_falling, size);

	return 0;
}