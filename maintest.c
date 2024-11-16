#include <stdio.h>

#define MAX_SIZE 100 

#include <stdarg.h>

// int main(void)
// {
//     int size = MAX_SIZE;
//     printf("max size is : %d\n ", size);
//     //printf("square of 5 is: $")

// }

#include <stdarg.h>
int sum(int count, ...)
{
    va_list  args ;  //were the arg it gana store ;
    va_start(args , count); 

    int i = 0;
    int s = 0;
    while (i++ < count)
    {
        int x = va_arg(args, int);
        printf("%d \n" , x); 
        s += x;
    }
    va_end(args);
    return (s);

} 

int main(void)
{
    printf("%d", 10000000);
    return (0) ;
}