#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>

#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_isprint.c"
#include "ft_strlen.c"
#include "ft_memset.c"
#include "ft_bzero.c"
#include "ft_memcpy.c"
#include "ft_memmove.c"
#include "ft_strlcpy.c"
#include "ft_strlcat.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strncmp.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"
#include "ft_strnstr.c"
#include "ft_atoi.c"
#include "ft_calloc.c"
#include "ft_strdup.c"

int	main(void)
{
	printf("=======================================================================\n");
	printf("1) isalpha() \n");
	char	a = 'a';
	char	b = 'A';
	int		c = 3;
	char	d = ' ';
	printf("my function: %d VS original function: %d\n", ft_isalpha(a), isalpha(a));
	printf("my function: %d VS original function: %d\n", ft_isalpha(b), isalpha(b));
	printf("my function: %d VS original function: %d\n", ft_isalpha(c), isalpha(c));
	printf("my function: %d VS original function: %d\n", ft_isalpha(d), isalpha(d));


	printf("=======================================================================\n");
	printf("2) isdigit()\n");
	a = 3;
	b = '3';
	c = ' ';
	printf("my function: %d VS original function: %d\n", ft_isdigit(a), isdigit(a));
	printf("my function: %d VS original function: %d\n", ft_isdigit(b), isdigit(b));
	printf("my function: %d VS original function: %d\n", ft_isdigit(c), isdigit(c));
	printf("my function: %d VS original function: %d\n", ft_isdigit(d), isdigit(d));


	printf("=======================================================================\n");
	printf("3) isalnum()\n");
	a = 'a';
	b = 'A';
	c = 3;
	d = ' ';
	printf("my function: %d VS original function: %d\n", ft_isalnum(a), isalnum(a));
	printf("my function: %d VS original function: %d\n", ft_isalnum(b), isalnum(b));
	printf("my function: %d VS original function: %d\n", ft_isalnum(c), isalnum(c));
	printf("my function: %d VS original function: %d\n", ft_isalnum(d), isalnum(d));

	printf("=======================================================================\n");
	printf("4) isascii()\n");
	a = 'a';
	b = ' ';
	c = 128;
	printf("my function: %d VS original function: %d\n", ft_isascii(a), isascii(a));
	printf("my function: %d VS original function: %d\n", ft_isascii(b), isascii(b));
	printf("my function: %d VS original function: %d\n", ft_isascii(c), isascii(c));


	printf("=======================================================================\n");
	printf("5) isprint()\n");
	a = '	';
	b = 127;
	c = 128;
	printf("my function: %d VS original function: %d\n", ft_isprint(a), isprint(a));
	printf("my function: %d VS original function: %d\n", ft_isprint(b), isprint(b));
	printf("my function: %d VS original function: %d\n", ft_isprint(c), isprint(c));


	printf("=======================================================================\n");
	printf("6) strlen()\n");
	char *str1 = "abc";
	char *str2 = "";
	char *str3 = "123dsvs	ddf!!pp";
	printf("my function: %lu VS original function: %lu\n", ft_strlen(str1), strlen(str1));
	printf("my function: %lu VS original function: %lu\n", ft_strlen(str2), strlen(str2));
	printf("my function: %lu VS original function: %lu\n", ft_strlen(str3), strlen(str3));


	printf("=======================================================================\n");
	printf("7) memset()\n");
	char	str4[] = "jisu is Babo";
	char	str5[] = "jisu is Babo";
	char	str6[10];
	char	str7[10];
	int	int1 = 5;
	int int2 = 58;

	printf("my function: %s VS original function: %s\n", ft_memset(str6, int1, sizeof(str6)), memset(str7, int1, sizeof(str7)));
	printf("my function: %s VS original function: %s\n", ft_memset(str4, int2, 1), memset(str5, int2, 1));
	printf("my function: %s VS original function: %s\n", ft_memset(str4, int2, 2), memset(str5, int2, 2));

	printf("=======================================================================\n");
	printf("8) bzero()\n");
	char str8[] = "hello";
	char str9[] = "hello";	
	ft_bzero(str8, 2);
	bzero(str9, 2);
	for (int idx = 0; idx < 5; idx++)
		printf("%d", str8[idx]);
	printf(" VS ");
	for (int idx = 0; idx < 5; idx++)
		printf("%d", str9[idx]);
	printf("\n");
	printf("=======================================================================\n");
	printf("9) memcpy()\n");
	char dst1[] = "0123456789";
	char dst2[] = "0123456789";
	char dst3[] = "0123456789";
	char dst4[] = "0123456789";
	char src1[] = "jisujisujisu";
	char src2[] = "jisujisujisu";
	printf("my function: %s VS original function: %s\n", ft_memcpy(dst1, src1, 3), memcpy(dst2, src2, 3));
	printf("my function: %s VS original function: %s\n", ft_memcpy(dst3, dst3 + 1, 6), memcpy(dst4, dst4 + 1, 6));


	printf("=======================================================================\n");
	printf("10) memmove()\n");
	printf("before : %s %s\n", dst1, dst2);
	printf("my function: %s VS original function: %s\n", ft_memmove(dst1, dst1+1, 3), memmove(dst2, dst2+1, 3));
	printf("my function: %s VS original function: %s\n", ft_memmove(dst1, src1, 0), memmove(dst2, src2, 0));

	printf("=======================================================================\n");
	printf("11) strlcpy()\n");
	char dst5[] = "I hate coding";
	char dst6[] = "I hate coding";
	char src5[] = "I love";
	char src6[] = "I love";

	printf("my function: %lu, %s VS original function: %lu, %s\n", ft_strlcpy(dst5, src5, 5), dst5, strlcpy(dst6, src6, 5), dst6);
	printf("my function: %lu, %s VS original function: %lu, %s\n", ft_strlcpy(dst5, src5, 0), dst5, strlcpy(dst6, src6, 0), dst6);


	printf("=======================================================================\n");
	printf("12) strlcat()\n");
	char dst7[] = "I hate coding";
	char dst8[] = "I hate coding";
	char src7[] = "I love";
	char src8[] = "I love";

	printf("my function: %lu, %s VS original function: %lu, %s\n", ft_strlcat(dst7, src7, 3), dst7, strlcat(dst8, src8, 3), dst8);
	printf("my function: %lu, %s VS original function: %lu, %s\n", ft_strlcat(dst7, src7, 0), dst7, strlcat(dst8, src8, 0), dst8);


	printf("=======================================================================\n");
	printf("13) toupper()\n");
	char char1 = 'z';
	char char2 = 'Z';
	char char3 = '1';


	printf("my function: %c VS original function: %c\n", ft_toupper(char1), toupper(char1));
	printf("my function: %c VS original function: %c\n", ft_toupper(char2), toupper(char2));
	printf("my function: %c VS original function: %c\n", ft_toupper(char3), toupper(char3));


	printf("=======================================================================\n");
	printf("14) tolower()\n");
	printf("my function: %c VS original function: %c\n", ft_tolower(char1), tolower(char1));
	printf("my function: %c VS original function: %c\n", ft_tolower(char2), tolower(char2));
	printf("my function: %c VS original function: %c\n", ft_tolower(char3), tolower(char3));


	printf("=======================================================================\n");
	printf("15) strchr()\n");
	char string1[] = "apple";
	char string2[] = "apple";
	char	to_find = 'p';
	printf("my function: %s VS original function: %s\n", ft_strchr(string1, to_find), strchr(string2, to_find));


	printf("=======================================================================\n");
	printf("16) strrchr()\n");
	printf("my function: %s VS original function: %s\n", ft_strrchr(string1, to_find), strrchr(string2, to_find));


	printf("=======================================================================\n");
	char string3[] = "hello everyone";
	char string4[] = "hello mabn";
	int	n = 89;
	printf("17) strncmp()\n");
	printf("my function: %d VS original function: %d\n", ft_strncmp(string3, string4, n), strncmp(string3, string4, n));


	printf("=======================================================================\n");
	char	string5[] = "hello man";
	char	string6[] = "hello man";
	n = 3;
	to_find = 'a';
	printf("18) memchr()\n");
	printf("(memchr)my function: %s VS original function: %s\n", ft_memchr(string5, to_find, n), memchr(string6, to_find, n));
	printf("(strchr)my function: %s VS original function: %s\n", ft_strchr(string5, to_find), strchr(string6, to_find));

	printf("=======================================================================\n");
	char string7[] = "hello\0woman\0";
	char string8[] = "hello\0woman\0";
	n = 32;
	printf("19) memncmp()\n");
	printf("(memcmp)my function: %d VS original function: %d\n", ft_memcmp(string7, string8, n), memcmp(string7, string8, n));
	printf("(strncmp)my function: %d VS original function: %d\n", ft_strncmp(string7, string8, n), strncmp(string7, string8, n));


	printf("=======================================================================\n");
	char	string9[] = "hungry man";
	char	string10[] = "hungry man";
	char	needle[] = "hungry";
	int	len = 20;
	printf("20) strnstr()\n");
	printf("my function: %s VS original function: %s\n", ft_strnstr(string9, needle, len), strnstr(string10, needle, len));


	printf("=======================================================================\n");
	printf("21) atoi()\n");
	char	string11[] = "          	   +001+12";
	printf("my function: %d VS original function: %d\n", ft_atoi(string11), atoi(string11));

	printf("=======================================================================\n");
	printf("22) calloc()\n");
	char	*ary1;
	char	*ary2;
	int		*ary3;
	int		*ary4;

	printf("before : ");
	ary1 = ft_calloc(6, 3);
	for (int idx = 0; idx < 6; idx++)
		printf("%d", ary1[idx]);
	ary1 = "abcdef";
	printf("\nafter : ");
	for (int idx = 0; idx < 6; idx++)
		printf("%d", ary1[idx]);
	
	printf("\nVS\n");
	
	printf("before : ");
	ary2 = calloc(6, 3);
	for (int idx = 0; idx < 6; idx++)
		printf("%d", ary2[idx]);
	ary2 = "abcdef";
	printf("\nafter : ");
	for (int idx = 0; idx < 6; idx++)
		printf("%d", ary2[idx]);

	printf("\n");
	printf("\nbefore : ");
	ary3 = ft_calloc(6, sizeof(int));
	for (int idx = 0; idx < 6; idx++)
		printf("%d", ary3[idx]);
	for (int idx = 0; idx < 6; idx++)
		ary3[idx] = idx + 1;
	printf("\nafter : ");
	for (int idx = 0; idx < 6; idx++)
		printf("%d",ary3[idx]);
	
	printf("\nVS\n");

	printf("before : ");
	ary4 = calloc(6, sizeof(int));
	for (int idx = 0; idx < 6; idx++)
		printf("%d", ary4[idx]);
	for (int idx = 0; idx < 6; idx++)
		ary4[idx] = idx + 1;
	printf("\nafter : ");
	for (int idx = 0; idx < 6; idx++)
		printf("%d", ary4[idx]);
	printf("\n");

	printf("=======================================================================\n");
	printf("23) strdup()\n");
	char	*ary5;
	char	*ary6;

	ary5 = ft_strdup("12345");
	ary6 = ft_strdup("12345");
	printf("my function: %s VS original function: %s\n", ary5, ary6);
}
