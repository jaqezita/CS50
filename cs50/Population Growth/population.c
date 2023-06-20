#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int start;
    do
    {
        start = get_int("start population size: ");
    }
    while (start < 9);

    // Prompt for end size
    int end;
    do
    {
        end = get_int("end population size: ");
    } 
    while (end < start);

    // f=Calculate number of years until we reach threshold

	int	years = 0;
	while (start < end)
	{
		start = start + ((start/3) - (start/4));
		years++;
	}

    printf("The number is %i\n", years); // Print number of years

	return (0);
}
