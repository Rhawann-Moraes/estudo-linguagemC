#include <unistd.h>

void	ft_print_alphabet(void)
{
	char letter;
	letter = 'a';
	
	while(letter <= 'z')
		{
			write(1, &letter, 1);
			letter++;	
		}
	write(1, "\n", 1);
}

int	main()
{
	ft_print_alphabet();
}
