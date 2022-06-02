#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	main(void)
{
	char	ary1[5];
	char	ary2[20];

	char* return_ary = strncpy(ary1, "hello", 5);
	char* return_ary2 = strncpy(ary2, "hello", 20);
	
	printf("%s\n", return_ary);
	printf("%s\n", return_ary2);
	
	
	char* return_ary3 = ft_strncpy(ary1, "hello", 5);
	char* return_ary4 = ft_strncpy(ary2, "hello", 20);
	
	printf("%s\n", return_ary3);
	printf("%s\n", return_ary4);

	return (0);
}
