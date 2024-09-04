#include <stdio.h>
#include <stddef.h> 
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if (!dest || !src || n == 0)
        return dest;
    while (n--)
    {
        *(char*)(dest++) = *(char*)(src++);
    }
    return dest;
}
int main()
{
    char source[] = "Hello, World!";
    char destination[20];
    char null_destination[20];
    char null_source[20];

    // Case 1: Normal copy
    ft_memcpy(destination, source, 13);
    printf("Case 1 - Destination: %s\n", destination);  // Expected: "Hello, World!"

    // Case 2: Source is NULL
    ft_memcpy(null_destination, NULL, 13);
    printf("Case 2 - Null Source: %s\n", null_destination);  // Expected: "Garbage or uninitialized"

    // Case 3: Destination is NULL
    ft_memcpy(NULL, source, 13);
    printf("Case 3 - Null Destination: %s\n", source);  // Expected: "Hello, World!" (source is unchanged)

    // Case 4: Both source and destination are NULL
    ft_memcpy(NULL, NULL, 13);
    printf("Case 4 - Both NULL: %s\n", source);  // Expected: "Hello, World!" (source is unchanged)

    // Case 5: Length is zero
    ft_memcpy(destination, source, 0);
    printf("Case 5 - Zero Length Destination: %s\n", destination);  // Expected: "Garbage or uninitialized"

    return 0;
}