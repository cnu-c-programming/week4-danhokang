#include <stdio.h>
#include <string.h>

int main() {
    char a[64] = "Hello";
    char b[64] = "World";
    char c[128];

    
    printf("length of a: %lu\n", strlen(a));

    
    strcpy(c, a);
    printf("a: %s, c: %s\n", a, c);

    
    strcat(c, b);
    printf("c: %s\n", c);

    
    printf("strcmp(Hello, Hello) = %d\n", strcmp("Hello", "Hello"));
    printf("strcmp(Hello, world) = %d\n", strcmp("Hello", "world"));

    return 0;
}
