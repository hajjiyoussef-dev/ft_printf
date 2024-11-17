#include <stdio.h>

#define MAX_SIZE 100 

#include <stdarg.h>

// int main(void)
// {
//     int size = MAX_SIZE;
//     printf("max size is : %d\n ", size);
//     //printf("square of 5 is: $")

// }

// #include <stdarg.h>
// int sum(int count, ...)
// {
//     va_list  args ;  //were the arg it gana store ;
//     va_start(args , count); 

//     int i = 0;
//     int s = 0;
//     while (i++ < count)
//     {
//         int x = va_arg(args, int);
//         printf("%d \n" , x); 
//         s += x;
//     }
//     va_end(args);
//     return (s);

// } 

// int main(void)
// {
//     unsigned int a = 4294967295;
//     int u = -42 ;
//     printf("%u\n", a);
//     printf("%u", u);
//     return (0) ;
// }

int main(void)
{
    unsigned int a = 4294967295;
    int u = -42 ;
    printf("%x\n", a);
    printf("%x", u);
    return (0) ;
}