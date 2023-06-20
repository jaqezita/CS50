#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    printf ("\nBuilding the Opposite\n\n");
    int lines;
    do
    {
        lines = get_int("number of lines: ");
        printf ("\n");
    }
    while (lines <= 0 || lines > 8);

    int i = 1;
    while (i <= lines)
    {
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