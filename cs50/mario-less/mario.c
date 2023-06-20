#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    int lines;
    do
    {
        lines = get_int("number of lines: ");
		printf ("\n");
    }
    while (lines <= 0 || lines > 8);

    int i = 1;
	int x;
    while (i <= lines)
    {
			if (i < lines)
			{
				x = lines - i;
				while (x > 0)
				{
					printf (" ");
					x--;
				}
			}
    	int columns = 1;
        while (columns <= i)
        {
        	printf ("#");
        	columns++;
        }
    	i++;
    printf ("\n");
    }
    return (0);
}   