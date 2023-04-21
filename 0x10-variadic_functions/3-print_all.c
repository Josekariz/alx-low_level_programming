#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
const char *p = format;
int i = 0, n = 0;
char *s;

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(args, int));
break;
case 'i':
printf("%d", va_arg(args, int));
break;
case 'f':
printf("%f", va_arg(args, double));
break;
case 's':
s = va_arg(args, char *);
printf("%s", (s != NULL) ? s : "(nil)");
break;
default:
p++;
continue;
}
n = (i < (int)strlen(format) - 1);
printf("%s", n ? ", " : "");
i++;
}

printf("\n");
va_end(args);
}
