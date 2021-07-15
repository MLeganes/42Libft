
-------------------------------------------------------------------------------------
|                                   (1) RUN MAKE (my programman)                     |
-------------------------------------------------------------------------------------- 
 
Run "make all" be located in the /Libft folder
amorcill@1-C-7 Libft % make all


-------------------------------------------------------------------------------------
|                                    (2) RUN WAR                                    |
-------------------------------------------------------------------------------------- 
 
Run the bash War-machine
libft-war-machine-master % ./grademe.sh

File Test > Part1-functions >>> testing code.



-------------------------------------------------------------------------------------
|                                    (3) RUN UNIT-TEST                              |
-------------------------------------------------------------------------------------- 
 
 Another option to test the project:
https://github.com/alelievr/libft-unit-test

make f
make re
cat result.log






FORMATTING QUESTIONS

1. return ((char *)haystack);
2. while ( *(ret ++ ) && siz < len)




char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		siz;
	size_t		needlelen;
	const char	*ret;
	const char	*ptrhaystack;
	const char	*ptrneedle;

	siz = 0;
	ptrhaystack = haystack;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*ptrhaystack && siz < len)
	{
		if (*ptrhaystack == *needle)
		{				
			needlelen = ft_strlen(needle);
			ret = ptrhaystack;
			ptrneedle = needle;
			while (*ptrhaystack == *ptrneedle && needlelen != 0 && siz < len)
			{
				ptrneedle++;
				ptrhaystack++;
				needlelen--;
				siz++;
			}
			if (needlelen == 0 && siz <= len)
				return ((char *)ret);
			ptrhaystack = ret;
			ptrneedle = needle;
		}
		ptrhaystack++;
		siz++;
	}
	return (0);
}



££££££££££########£££££££3######£££££####