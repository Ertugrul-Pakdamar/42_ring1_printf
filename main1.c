#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	i;

	i = 10;
	// Pointer çıktısı
	ft_putstr("ft_printf  : ");
	ft_putstr("0x");
	ft_putnbr_base((unsigned long)&i, "0123456789abcdef");
	ft_putchar('\n');
	printf("printf     : %p\n", &i);
	// Sayı çıktıları
	ft_putnbr_base(255, "0123456789ABCDEF"); // FF
	ft_putchar('\n');
	ft_putnbr_base(10, "01"); // 1010
	ft_putchar('\n');
	ft_putnbr_base(0, "0123456789"); // 0
	ft_putchar('\n');
}
