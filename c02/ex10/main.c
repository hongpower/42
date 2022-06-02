#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[20];
	char	dest_2[20];

	ft_strlcpy(dest, "", 3);
	strlcpy(dest_2, "", 3);
	printf("THIS IS FT_STRLCPY : %s/", dest);
	printf("THIS IS STRLCPY : %s/", dest_2);
	return (0);
}
