#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //prompt user for x
    int x = get_int ("X: ");
    //prompt user for y
    int y = get_int ("y: ");
    //result of x + z
    int z = x * y;
    //Perform addition
   printf("%i\n", z);
}