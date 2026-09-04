#include "STRLIB.h"

int main()
{
    char s1[] = "Ya krutoy pekus";
    char s2[] = "RT ";
    char s3[] = "";
    char s4[] = {'R', 'T', '\0', 'R', 'T', '\0'};
    //size_t len = 0;
    printf("%s\n%s\n%s\n%s\n", MyStrrvs(s1), MyStrrvs(s2), MyStrrvs(s3), MyStrrvs(s4));

    return 0;
}

