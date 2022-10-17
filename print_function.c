#include "main.h"
/*print_char - prints character
 * @ap: argument pointer
 * @params: the parameters struct
 *
 * Return: number chars printed
 */
int print_char(va_list ap, params_t *params)
{
	char pad_char = ' ';
	unsigned int pad = 1, sum = 0, ch = va_arg(ap, int);

	if (params->minus_flag)
		sum += _putchar(ch);
	while (pad < params->width)
		sum += _putchar(pad_char);
		pad++;
	if (!params->minus_flag)
		sum += _putchar(ch);
	return (sum);
}
/**
 * print_int - prints integer
 * @ap: argument pointer
 * @params: the parameters struct
 *
 * Return: number chars printed
 */
int print_int(va_list ap, params_t *params)
{
	long i;

	if  (params->l_modifier)
		i = va_arg(ap, long);
	else if (params->h_modifier)
		i = (short int)va_arg(ap, int);
	else
		i = (int)va_arg(ap, int);
	return (print_number(convert(i, 10, 0, params), params));
/**
 * print_percent - prints string %
 * @ap: argument pointer
 * @params: the parameters struct
 *
 * Return: percent(%)
 */
int print_percent(va_list ap, params_t *params)
{
	(void)ap;
	(void)params;

	return (_putchar('%'));
}


