//cc -Wall -Wextra -Werror test.c -Iincludes -L. -lftprintf -o test_program

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int a = -214748364;
    int b = -1;
    int c = 3;
    int d = 0;
    int e = 2147483647;
    int f = -2147483648;

    // Teste da função ft_printf para números inteiros
    ft_printf("Testando inteiro negativo grande: %d\n", a);
    printf("Testando inteiro negativo grande: %d\n", a);

    ft_printf("Testando inteiro negativo pequeno: %d\n", b);
    printf("Testando inteiro negativo pequeno: %d\n", b);

    ft_printf("Testando inteiro positivo pequeno: %d\n", c);
    printf("Testando inteiro positivo pequeno: %d\n", c);

    ft_printf("Testando inteiro zero: %d\n", d);
    printf("Testando inteiro zero: %d\n", d);

    ft_printf("Testando inteiro máximo: %d\n", e);
    printf("Testando inteiro máximo: %d\n", e);

    ft_printf("Testando inteiro mínimo: %d\n", f);
    printf("Testando inteiro mínimo: %d\n", f);

	// Teste da função ft_printf para números em hexadecimal
    ft_printf("Testando inteiro negativo grande em hexadecimal (minúsculo): %x\n", a);
    printf("Testando inteiro negativo grande em hexadecimal (minúsculo): %x\n", a);

    ft_printf("Testando inteiro negativo pequeno em hexadecimal (minúsculo): %x\n", b);
    printf("Testando inteiro negativo pequeno em hexadecimal (minúsculo): %x\n", b);

    ft_printf("Testando inteiro positivo pequeno em hexadecimal (minúsculo): %x\n", c);
    printf("Testando inteiro positivo pequeno em hexadecimal (minúsculo): %x\n", c);

    ft_printf("Testando inteiro zero em hexadecimal (minúsculo): %x\n", d);
    printf("Testando inteiro zero em hexadecimal (minúsculo): %x\n", d);

    ft_printf("Testando inteiro máximo em hexadecimal (minúsculo): %x\n", e);
    printf("Testando inteiro máximo em hexadecimal (minúsculo): %x\n", e);

    ft_printf("Testando inteiro mínimo em hexadecimal (minúsculo): %x\n", f);
    printf("Testando inteiro mínimo em hexadecimal (minúsculo): %x\n", f);

    // Teste da função ft_printf para números em hexadecimal (letras maiúsculas)
    ft_printf("Testando inteiro negativo grande em hexadecimal (maiúsculo): %X\n", a);
    printf("Testando inteiro negativo grande em hexadecimal (maiúsculo): %X\n", a);

    ft_printf("Testando inteiro negativo pequeno em hexadecimal (maiúsculo): %X\n", b);
    printf("Testando inteiro negativo pequeno em hexadecimal (maiúsculo): %X\n", b);

    ft_printf("Testando inteiro positivo pequeno em hexadecimal (maiúsculo): %X\n", c);
    printf("Testando inteiro positivo pequeno em hexadecimal (maiúsculo): %X\n", c);

    ft_printf("Testando inteiro zero em hexadecimal (maiúsculo): %X\n", d);
    printf("Testando inteiro zero em hexadecimal (maiúsculo): %X\n", d);

    ft_printf("Testando inteiro máximo em hexadecimal (maiúsculo): %X\n", e);
    printf("Testando inteiro máximo em hexadecimal (maiúsculo): %X\n", e);

    ft_printf("Testando inteiro mínimo em hexadecimal (maiúsculo): %X\n", f);
    printf("Testando inteiro mínimo em hexadecimal (maiúsculo): %X\n", f);

    return 0;
}
