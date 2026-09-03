#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

size_t MyStrlen( const char* str );
int MyPuts( const char* str );
char* MyStrcpy( char* dest, const char* scr );
char* MyStrcat( char* dest, const char* scr );
int MyStrcmp( const char* lhs, const char* rhs );
char* MyStrchr( const char* str, int ch ); //TODO - проверить работу
char* MyStrdup( const char* str ); //TODO - проверить работу
char* MyStrrvs( char* str ); //TODO - проверить работу
char* MyFgets( char* str, int count, FILE* stream ); //TODO - проверить работу
int MyFputs( const char* str, FILE* stream ); //TODO - проверить работу
int MyAtoi( const char *str ); //TODO - проверить работу

int main()
{
    char s1[] = "122CDEFGHIJ";
    char s2[] = "-1OYDA3";
    char s3[] = "GOYDA1";
    //size_t len = 0;

    printf("<%d> <%d> <%d>", MyAtoi(s1), MyAtoi(s2), MyAtoi(s3));

    return 0;
}

size_t MyStrlen( const char* str )
{
    assert(str);

    size_t i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int MyPuts( const char* str )
{
    assert(str);

    int i = 0;
    while (str[i] != '\0')
    {
        putchar(str[i++]);
    }
    putchar('\n');

    return 1;
}

char* MyStrcpy( char* dest, const char* scr )
{
    assert(dest);
    assert(scr);

    int i = 0;
    do
    {
        dest[i] = scr[i];
    } while (scr[i++] != '\0');

    return dest;
}

char* MyStrcat( char* dest, const char* scr )
{
    assert(dest);
    assert(scr);

    int i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    int j = 0;
    do
    {
        dest[i++] = scr[j];
    } while (scr[j++] != '\0');

    return dest;
}

int MyStrcmp( const char* lhs, const char* rhs )
{
    assert(lhs);
    assert(rhs);

    int i = 0;
    while (lhs[i] == rhs[i])
    {
        if (lhs[i] == '\0' || rhs[i] == '\0')
            return (int) rhs[i] - lhs[i];
        i++;
    }
    return (int) rhs[i] - lhs[i] ;
}

char* MyStrchr( char* str, int ch ) //TODO проверить работу //const str??
{
    assert(str);

    ch = (char) ch; //???
    while (*(str) != (char) ch)
    {
        if (*str == '\0')
            return NULL;
        str++;
    }

    return str;
}

char* MyStrdup( const char* str ) //TODO - проверить работу
{
    assert(str);

    size_t len = MyStrlen(str) + 1;

    char* dup = (char*) calloc(len, sizeof(char));
    MyStrcpy(dup, str);

    return dup;
}

char* MyStrrvs( char* str ) //TODO - проверить работу
{
    assert(str);

    size_t len = MyStrlen(str);

    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    return str;
}

char* MyFgets( char* str, int count, FILE* stream ) //TODO - проверить работу
{
    assert(stream);
    assert(str);

    for (int i = 0; i < count - 1; i++)
    {
        int ch = fgetc(stream);
        if (ch == EOF)
        {
            str[i] = '\0';
            return str;
        }
        if (ch == '\n')
        {
            str[i] = '\n';
            str[i + 1] = '\0';
            return str;
        }
        str[i] = ch;
    }
    str[count - 1] = '\0';

    return str;
}

int MyFputs( const char* str, FILE* stream ) //TODO - проверить работу
{
    assert(str);
    assert(stream);

    int i = 0;

    while (str[i] != '\0')
    {
        fputc(str[i++], stream);
    }

    return 1;
}

int MyAtoi( const char *str )
{
    int sign = 1;

    int i = 0;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }

    int num = 0;

    while (str[i] >= '0' && str[i] <= '9')
    {
        num *= 10;
        num += (int) (str[i] - '0');
        i++;
    }

    return num * sign;
}
