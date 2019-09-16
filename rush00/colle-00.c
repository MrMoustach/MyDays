void	ft_putchar(char c);

void 	colle(int row, int col)
{
	int ccol;
	int crow;

	ccol = 0;
	crow = 0;
	while (ccol < col)
	{
		crow = 0;
		while (crow < row)
		{
			if (ccol == 0 && (crow == 0 || crow == row - 1))
				ft_putchar('o');
			else if(ccol == col - 1 && (crow == 0 || crow == row - 1))
				ft_putchar('o');
			else if (crow == 0 || crow == row - 1)
				ft_putchar('|');
			else if (ccol == 0 || ccol == col -1) 
				ft_putchar('-');
			else
				ft_putchar(' ');
			crow++;
		}
		ft_putchar('\n');
		ccol++;
	}
}
