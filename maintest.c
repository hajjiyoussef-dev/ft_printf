#include "libftprintf.h"


int main() {
    ft_printf("String: %s\n", "Hello, World!");
    ft_printf("Character: %c\n", 'A');
    ft_printf("Integer: %d\n", 1234);
    ft_printf("Unsigned: %u\n", 1234);
    ft_printf("Hex (lower): %x\n", 255);
    ft_printf("Hex (upper): %X\n", 255);
    ft_printf("Pointer: %p\n", (void *)0x123456);
    ft_printf("Percent: %%\n");

    // Edge cases
    ft_printf("Null string: %s\n", NULL);
    ft_printf("Zero unsigned: %u\n", 0);
    ft_printf("Negative integer: %d\n", -42);
    ft_printf("Large unsigned: %u\n", 4294967295);// UINT_MAX

      write(1,"\n ",2);
      write(1,"\n ",2);

   printf("String: %s\n", "Hello, World!");
   printf("Character: %c\n", 'A');
   printf("Integer: %d\n", 1234);
   printf("Unsigned: %u\n", 1234);
   printf("Hex (lower): %x\n", 255);
   printf("Hex (upper): %X\n", 255);
   printf("Pointer: %p\n", (void *)0x123456);
   printf("Percent: %%\n");

    // Edge cases
   printf("Null string: %s\n", NULL);
   printf("Zero unsigned: %u\n", 0);
   printf("Negative integer: %d\n", -42);
   printf("Large unsigned: %u\n", 4294967295);

    return 0;
}