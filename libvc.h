/* ********************************************** */
/*                                                */
/* libvc.h                                        */
/*                                                */
/* By: Team D - Alex, Chin, Giada, Suelen, Yukako */
/*                                                */
/* ********************************************** */

#define LIBVC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <unistd.h>
#include <time.h>
#include <ctype.h>

void vc_memset(void *ptr, int value, int size);
void vc_bzero(void *s, size_t n);
void vc_memcpy(void *dst, void *src, size_t n);
void *vc_memccpy(void *dest, const void *src, int c, size_t n);
void *vc_memmove(void *dest, void *source, size_t n);
void *vc_memchr(const void *buffer, int ch, size_t count);
int vc_memcmp(const char *s1, const char *s2, size_t n);
int vc_strlen(char *str);
char *vc_strdup(char *src);
char *vc_strcpy(char *dst, char *src);
char *vc_strncpy(char *dest, char *src, unsigned int n);
char *vc_strcat(char *dest, char *src);
char *vc_strncat(char *dest, char *src, int n);
unsigned int vc_strlcat(char *dest, char *src, unsigned int size);
char *vc_strchr(const char *s, int c);
char *vc_strrchr(const char *s, int c);
char *vc_strstr(char *str, char *to_find);
char *vc_strnstr(const char *s1, const char *s2, size_t n);
int vc_strcmp(char *s1, char *s2);
int vc_strncmp(char *s1, char *s2, unsigned int n);
int vc_atoi(char *str);
int vc_isalpha(char *str);
int vc_isdigit(int c);
int vc_isalnum(int c); 
int vc_isascii(int c);
int vc_isprint(char *str);
char vc_toupper(char c);
int vc_tolower(int c);
void vc_putstr(char *str);

void *vc_memalloc(size_t size);
void vc_memdel(void **ap);
char *vc_strnew(size_t size);
void vc_strdel(char **as);
void vc_strclr(char *s);
void vc_striter(char *s, void (*f)(char *));
char *vc_strmap(char const *s, void (*f)(char));
char *vc_strsub(char const *s, unsigned int start, size_t len);
char *vc_strjoin(char const *s1, char const *s2);
char *vc_strtrim(char const *s);
char **vc_strsplit(char const *s, char c);
char *vc_itoa(int n);
void vc_putnbr(int *n);
void vc_putchar(char c);
void vc_putendl(char *s);