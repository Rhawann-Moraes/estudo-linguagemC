#include <unistd.h>

int	ft_print_numbers(void)
{
	char number;
	number = 48;
	while(number >= 48 && number <= 57)
	{
			write(1, &number, 1);
		if(number > 47 &&  number < 57)
		{
			write(1, ", ", 2);
		}
		else
		{
			write(1, ".\n", 2);
		}
		number++;
	}
}

int	main()
{
	ft_print_numbers();
}
