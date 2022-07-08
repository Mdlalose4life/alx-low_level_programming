/**
 * print_diagonal - draw diagonal line on screen using a backslash character.
 * @n: Numer of backlash to be printed.
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
			_putchar('\\');

			if (a == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
