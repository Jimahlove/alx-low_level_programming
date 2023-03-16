#include <stdio.h>

/**
* main - this is the main function
*
* Return - always zero
*/

int main(void)
{
    printf("size of char:%lu byte(s)",sizeof(char));
    printf("size of int: %lu byte(s)",sizeof(int));
    printf("size of a long int: %lu byte(s)",sizeof (long int));
    printf("size of a long long int:%lu byte(s)",sizeof(long long int));
    printf("size of float: %lu byte(s)",sizeof (float)); 
    return (0);
}
