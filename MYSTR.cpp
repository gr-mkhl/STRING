#include "STRLIB.h"

int main()
{
    char s1[] = "Ya krutoy pekus";
    char s2[] = "rut";
    char s3[] = "bebebe";
    char s4[] = "y p";
    //size_t len = 0;
    printf("%s\n%s\n%s\n%s\n", MyStrchr(s1, 'k'), MyStrrchr(s1, 'k'), MyStrchr(s4, 'a'), MyStrrchr(s2, 'a'));

    return 0;
}

