#include "_printf.h"
int _printf(const char *format, ...)
{
    int i = 0;
    va_list ap;

    va_start(ap, format);
    while (format && format[i])
    {
        if (format[i] == '%')
        {
            switch (format[i + 1])
            {
            case 's':
                _puts(va_arg(ap, char *));
                i++;

                break;
            case 'c':
                _putchar(va_arg(ap, int));
                i++;
                break;
            case 'd':
                print_number(va_arg(ap, int));
                i++;
                break;
            default:
                _putchar('%');
                break;
            }
        }
        else
            _putchar(format[i]);
        i++;
    }
    va_end(ap);
    return (0);
}