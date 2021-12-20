#include <unistd.h>

void	ft_print_comb2(int n);
void	ft_generate_num(int x, int y);
void	ft_print_char(char c);

void	ft_print_comb2(int n)
{
	int t;
    
    n = 0;
	while (n <= 9)
	{
		t = n + 1;
		while (t <= 89)
		{
			ft_generate_num(n, t);
			t++;
		}
		n++;
	}
}

void	ft_generate_num(int x, int y)
{
	ft_print_char(48 + (x / 10));

	ft_print_char(48 + (y % 10));
	if (x != 8)
	{
		write(1, ", ", 2);
	}	
}

void	ft_print_char(char c)
{
	write(1, &c, 1);
}

int main()
{
	ft_print_comb2();
}
