#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("start population size: ");
    }
    while (start < 9);

    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("end population size: ");
    } 
    while (start >= end);

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
}
