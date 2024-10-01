#include <stdio.h>
#include <limits.h>

int main(void)
{
    // Test simple string
    printf("Test 1: Simple string\n");
    ft_printf("My name is %s.\n", "Alice");
    printf("Original: My name is %s.\n\n", "Alice");

    // Test integers
    printf("Test 2: Integer values\n");
    ft_printf("Positive number: %d\n", 42);
    printf("Original: Positive number: %d\n", 42);
    ft_printf("Negative number: %d\n", -42);
    printf("Original: Negative number: %d\n\n", -42);

    // Test unsigned integers
    printf("Test 3: Unsigned integers\n");
    ft_printf("Unsigned: %u\n", 1234567890);
    printf("Original: Unsigned: %u\n\n", 1234567890);

    // Test hexadecimals (lowercase)
    printf("Test 4: Hexadecimal (lowercase)\n");
    ft_printf("Hex: %x\n", 255);
    printf("Original: Hex: %x\n\n", 255);

    // Test hexadecimals (uppercase)
    printf("Test 5: Hexadecimal (uppercase)\n");
    ft_printf("HEX: %X\n", 255);
    printf("Original: HEX: %X\n\n", 255);

    // Test pointer
    printf("Test 6: Pointer\n");
    int num = 42;
    ft_printf("Pointer: %p\n", &num);
    printf("Original: Pointer: %p\n\n", &num);

    // Test percent sign
    printf("Test 7: Percent sign\n");
    ft_printf("Percent sign: %%\n");
    printf("Original: Percent sign: %%\n\n");

    // Test minimum field width
    printf("Test 8: Minimum field width\n");
    ft_printf("Width: [%10d]\n", 42);
    printf("Original: Width: [%10d]\n\n", 42);

    // Test precision
    printf("Test 9: Precision with strings\n");
    ft_printf("Precision: [%.5s]\n", "Hello, world!");
    printf("Original: Precision: [%.5s]\n\n", "Hello, world!");

    // Test combination of width and precision
    printf("Test 10: Width and precision combination\n");
    ft_printf("Width and precision: [%10.5d]\n", 42);
    printf("Original: Width and precision: [%10.5d]\n\n", 42);

    // Test special edge cases
    printf("Test 11: Edge cases (INT_MAX, INT_MIN)\n");
    ft_printf("INT_MAX: %d, INT_MIN: %d\n", INT_MAX, INT_MIN);
    printf("Original: INT_MAX: %d, INT_MIN: %d\n\n", INT_MAX, INT_MIN);

    // Test long string
    printf("Test 12: Long string\n");
    ft_printf("Long string: %.10s\n", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    printf("Original: Long string: %.10s\n\n", "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");

    return 0;
}
