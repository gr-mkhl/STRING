#include "STRLIB.h"

int main()
{
    char s1[] = "Ya krutoy pekus";
    char s2[] = "rut";
    char s3[] = "bebebe";
    char s4[] = "y p";
    //size_t len = 0;
    printf("%s\n%s\n%s\n%s\n", MyStrstr(s1, s2), MyStrstr(s1, "kusa"), MyStrstr(s1, s3), MyStrstr(s1, s4));

    return 0;
}

