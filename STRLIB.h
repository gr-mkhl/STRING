#ifndef _STRLIB_H_
#define _STRLIB_H_

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
int MyAtoi( const char *str );
char* MyItoa( int value, char* buf );

#endif
