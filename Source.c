#include <stdio.h>
#include <locale.h>
#include "name.h"
#include "date.h"
void namel()
{
	puts("Моя программа");

}
void main()
{
	setlocale(LC_ALL, "RUS");
	namel();
	name();
	date();
}