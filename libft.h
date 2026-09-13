#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_isalpha(char c);
int	ft_isdigit(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_memchr(const void *ptr,int c,unsigned int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *big,const char *little,size_t len);
int	ft_strncmp(const char *s1,const char *s2,size_t n);
int	ft_atoi(char *nptr);
void	*ft_memcpy(void *dest,const void *src,size_t n);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb,size_t size);
size_t	ft_strlen(const char* c);
int	ft_isalnum(char c);


#endif
