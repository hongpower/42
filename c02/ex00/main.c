#include <unistd.h>
#include <string.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);
int	main(void)
{
	char	now[5];

	char* new = ft_strcpy(now, "hello");
	printf("%s", new);
}

