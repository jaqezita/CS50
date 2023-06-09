/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   prime.c                                       		                      */
/*                                                      		              */
/*   By: Jaqueline Ribeiro <marvin@42.fr>                	                  */   
/*                                                        		              */
/*   Created: 2023/06/20 02:23:14 by Jaqueline R                              */
/*   Updated: 2023/06/20 02:23:14 by Jaqueline R         		              */
/*                                                                            */
/* ************************************************************************** */

#include <cs50.h>
#include <stdio.h>

bool	prime(int number);

int	main(void)
{
	int	number;

    int	min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    } 
    while (min >= max);
    
    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
            number++;
        }
    } 
    printf("\n\n%i\n", number); // Check the number of primes in the range
}  

bool prime(int number)
{
    int div;

    div = 0;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        div++;
    }
    
    if (div == 2)
        return true;

    return false;
}
