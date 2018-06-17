#include "ft_printf.h"
#include <stdio.h>
#include <locale.h>

int main()
{
	// setlocale(LC_ALL, "");
	// uint32_t i = 3250;

	// char* str = malloc(3);
	// str[0] = 0;
	// str[1] = 0;
	// str[2] = 0;
	// // char *p = str;	

	// printf("%x ", str[0]);
	// printf("%x ", str[1]);
	// printf("%x ", str[2]);

	// asprintf(&str, "%C", 254);

	// printf("%x ", str[0]);
	// printf("%x ", str[1]);
	// printf("%x ", str[2]);
	printf("[%d]", printf("yo%2C%-12lc et %C titi %C tyty", 'u', 254, 256, 'a'));
	printf("\n");
	printf("\n");
	printf("[%d]", ft_printf("yo%2C%-12lc et %C titi %C tyty", 'u', 254, 256, 'a'));
	printf("\n");
	return (0);
}
