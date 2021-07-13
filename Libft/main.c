
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strdup(const char *s);
size_t	ft_strlen(const char *ch);
 
 /* ************************************************************************** */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/* ************************************************************************** */
size_t	ft_strlen(const char *ch)
{
	int	count;

	count = 0;
	while (*(ch + count))
	{
		count++;
	}
	return (count);
}
 /* ************************************************************************** */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/* ************************************************************************** */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			len;
	unsigned char	*pd;
	unsigned char	*ps;

	if (!dst && !src)
		return (NULL);
	pd = (unsigned char *)dst;
	ps = (unsigned char *)src;
	len = 0;
	while (len < n)
	{
		pd[len] = ps[len];
		len++;
	}
	return (dst);
}
 /* ************************************************************************** */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/* ************************************************************************** */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{	
	size_t	slen;
	size_t	counter;

	if (dst != NULL && src != NULL)
	{
		slen = ft_strlen(src);
		if (size > 0)
		{
			counter = 0;
			while (counter < (size - 1) && src[counter] != '\0')
			{
				dst[counter] = src[counter];
				counter++;
			}
			dst[counter] = '\0';
		}
		return (slen);
	}
	return (0);
}

/*************************************************************************** */
/*   ft_strlcat.c                                        :+:      :+:    :+:   */
/* ************************************************************************** */
size_t	ft_strlcat(char *dst, const char *src, size_t buffer)
{
	size_t	counter;
	size_t	s;
	size_t	d;	

	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (buffer != 0)
	{
		counter = 0;
		while (d + counter < (buffer - 1) && src[counter] != '\0')
		{
			dst[d + counter] = src[counter];
			counter++;
		}
		if (d + counter < buffer)
			dst[d + counter] = '\0';
	}
	if (buffer > d)
		return (d + s);
	return (buffer + s);
}

/*************************************************************************** */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/* ************************************************************************** */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (0);
}

/*************************************************************************** */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/* ************************************************************************** */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	counter;

	counter = 0;
	substr = malloc(len + 1);
	if (s == NULL || ft_strlen(s) < start)
	{
		substr[counter] = '\0';
		return (substr);
	}
	if (substr != NULL && s != NULL)
	{
		while (counter < len && s[counter] != '\0')
		{
			substr[counter] = s[start + counter];
			counter++;
		}
		substr[counter] = '\0';
	}
	return (substr);
}

/*************************************************************************** */
/*   ft_strtrim.c                                        :+:      :+:    :+:   */
/* ************************************************************************** */
char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	void	*ret;    
	
	ret = malloc(ft_strlen(s1));
	if (!ret)
		return (NULL);
	start = 0;
	while (ft_strchr(set, s1[start]) )
	{
		start++;
	}
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end]) )
	{
		end--;
	}
    end++;
	ret = ft_substr(s1, (unsigned int)start, (end - start));
	return (char *)ret;
}
/*************************************************************************** */
/*   ft_split.c                                        :+:      :+:    :+:   */
/* ************************************************************************** */
// char **ft_split(const char *s, char c)
// {
// 	char 	*s1;
// 	int		len;
// 	int		x;	
// 	char	**ret;
  
// 	len = (int)ft_strlen(s1);
// 	ret =(char **) malloc( len + 1);
// 	s1 = (char *)s;
//     x = 0;	
// 	while ( *s1 != '\0')
// 	{
// 		if(*s1 != c)
// 		{
// 			*(ret + x) = *s1;
// 			x++;
// 		}
// 		s1++;
// 	}
// 	//ret[x++][y++] = voidptr;
// 	return (ret);
// }

// char **ft_split(char const *s, char c)
// {
// 	char const	*s1;
// 	char 	**result;
// 	int 	i;
// 	int 	len;

// 	s1 = s;
// 	len = ft_strlen(s);
// 	result = malloc( len);
// 	if (!result)
// 		return (NULL);
// 	i = 0;
// 	while (*s1)
// 	{
// 		if (*s1 == c)
// 			s1++;
// 		else
// 		{
// 			while ( *s1 != c && *s1 != '\0')
// 			{
// 				(*result) = *s1;
// 				s1++;
//                 result++;
// 				i++;
// 			}
// 			*result = '\n';
// 		}
// 	}
	
// 	return (*result);
// }




/*************************************************************************** */
/*   ft_memset.c                                                               */
/* ***************************************************************************/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*ptr;

	count = 0;
	ptr = (unsigned char *)s;
	while (count < n)
	{
		ptr[count] = (unsigned char)c;
		count++;
	}
	return (s);
}


/*************************************************************************** */
/*   ft_bzero.c                                                               */
/* ***************************************************************************/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			count;

	count = 0;
	str = (unsigned char *)s;
	while (count < n && str[count] != '\0')
	{
		str[count] = '\0';
		count++;
	}
}

/*************************************************************************** */
/*   ft_strdup.c                                                               */
/* ***************************************************************************/
char	*ft_strdup(const char *s)
{
	int		len;
	int		count;
	char	*ret;

	count = 0;
	len = ft_strlen(s);
	ret = (char *)malloc(len + 1);
	if (ret)
	{
		while (count < len)
		{
			ret[count] = s[count];
			count++;
		}
		ret[count] = '\0';
	}
	return (ret);
}
/*************************************************************************** */
/*   ft_itoa.c                                                               */
/* ***************************************************************************/
char *ft_itoa(int n)
{
	char	*ret;	
	int		res;  
    char     resto;
    int     aux;
    long    nll;

    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    nll = (long)n;
    if( n == 0 || n > 2147483647 || nll < -2147483648)
        return (ft_strdup("0"));

    ret = (char *)malloc(12); /// sign + 10 + \n 
    ft_bzero(ret, 12);    
    
    res = n;
    if (n < 0)
        res = n * (-1);
    ret = ret + 11;
    while (res !=0 )
	{
        aux = (res % 10);
        resto = aux + '0';
		*ret = resto;
		ret--;		
        res = res / 10;
	}
    ret++;
    if (n < 0)
    {
        ret--;
        *ret = '-';
     }
	return (ret);
}


/*************************************************************************** */
/*   MAIN.c       gcc -Werror -Wall -Wextra main.c                           */
/* ***************************************************************************/
#define TRIM_SET_PLACEHOLDER " \n\t"
int		main(void)
{
    printf("\n Number in string:_%s_\n", ft_itoa(0));
    printf("\n Number in string:_%s_\n", ft_itoa(9));
    printf("\n Number in string:_%s_\n", ft_itoa(-9));
    printf("\n Number in string:_%s_\n", ft_itoa(10));
    printf("\n Number in string:_%s_\n", ft_itoa(-10));
    printf("\n Number in string:_%s_\n", ft_itoa(8124));
    printf("\n Number in string:_%s_\n", ft_itoa(-9874));
    printf("\n Number in string:_%s_\n", ft_itoa(543000));
    printf("\n Number in string:_%s_\n", ft_itoa(-2147483648LL));
    printf("\n Number in string:_%s_\n", ft_itoa(-2147483648));
    printf("\n Number in string:_%s_\n", ft_itoa(2147483647));

    //char **tabstr;  
    //tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
    //printf("\nThis is the solutlion:\n");
    // x = 0;
    // y = 0;
    // while(tabstr[x][y])
    // {
    //     while ( tabstr[x][y] != '\0')
    //     {
    //         printf("%c", tabstr[x][y]);
    //         y++;
    //     }
    //     x++;
    // }
    //printf("\nEND solutlion\n");
	return (0);
}
