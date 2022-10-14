/********************************************************************************
* Uppgift 3.c: Ber�knar resitans och skriver ut v�rdena p� voltage, current och
               resistance i terminalen. 
********************************************************************************/

/* Inkluderingsdirektiv */
#include <stdio.h>

/********************************************************************************
* electrical_set: Tilldelar v�rden till variablerna: voltage
*                                                    current
*                                                    resistance
********************************************************************************/
void electrical_set(double* x,
	                double* y,
	                double* z)
{
	*x = 3.4;
	*y = 6.8;
	*z = *x / *y;
	return;
}

/********************************************************************************
* electrical_print: Skapar utskrift av variablerna i terminalen: voltage
*                                                                current
*                                                                resistance
********************************************************************************/
void electrical_print(double x,
	                  double y,
	                  double z)
{
	printf("------------------------------------------------------------\n");
	printf("Voltage: %lg V\n", x);
	printf("Current: %lg mA\n", y);
	printf("Resistance: %lg kOhm\n", z);
	printf("------------------------------------------------------------\n");
	return;
}
/********************************************************************************
* main: Tilldelar 3 flyttalsvariabler. 
*       Anropar funtionerna "electrical_set" och "electrical_print".
********************************************************************************/
int main(void)
{
	double voltage = 0;
	double current = 0;
	double resistance = 0;

	electrical_set(&voltage, &current, &resistance);
	electrical_print(voltage, current, resistance);

	return 0;
}