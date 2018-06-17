#include "ft_printf.h"
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "");

	// // printf("[%d]", printf("%9.6ls %S, s", L"a"));
	// // printf("\n");
	// // printf("[%d]", ft_printf("%9.6ls %S, s", L"a"));
	// // printf("\n");

	printf("[%d]", printf("%C", 0x10000));
	printf("\n");
	printf("\n");
	printf("[%d]", ft_printf("%C", 0x10000));
	printf("\n");
	return (0);
}
