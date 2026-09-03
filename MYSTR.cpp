#include <stdio.h>
#include <string.h>

size_t MyStrlen( const char* str );
int MyPuts( const char* str );
char* MyStrcpy( char* dest, const char* scr );
char* MyStrcat( char* dest, const char* scr );
int MyStrcmp( const char* lhs, const char* rhs );
char* MyStrchr( const char* str, int ch ); //TODO - проверить работу
char* MyStrdup( const char* str ); //TODO - проверить работу
void MyStrrvs( char* str ); //TODO - проверить работу
char* MyFgets( char* str, int count, FILE* stream ); //TODO - проверить работу
int MyFputs( const char* str, FILE* stream ); //TODO - проверить работу

int main()
{
    char s1[] = "ABCDEFGHIJ";
    char s2[] = "GOYDA3";
    char s3[] = "GOYDA1";
    size_t len = 0;

    len = MyStrlen(s1);
    printf("len = %zd\n", len);
    int j = MyPuts(s1);
    printf("j_status = %d\n", j);
    printf("%s\n", MyStrcpy(s1, s2));
    //printf("%s\n", MyStrcat(s1, s2));
    printf("%d\n", MyStrcmp(s2, s3));
    printf("%d\n", strcmp(s2, s3));
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

char* MyStrchr( const char* str, int ch ) //TODO проверить работу
{
    assert(str);

    ch = (char) ch; //???
    while (*(str) != (char) ch)
    {
        if (*str == '\0')
            return NULL;
        str++
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

void MyStrrvs( char* str ) //TODO - проверить работу
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
            str[i] = '\0'
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
        fputc(str[i++], F);
    }

    return 1;
}
