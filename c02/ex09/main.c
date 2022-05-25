#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char ex[40] = "Ewrp hi hello + hello - hello ?";
	char ex2[] = "hellEe bye bye";
	char ex3[30] = " rrRw, hi hello MERONG";

	char	*a = ft_strcapitalize(ex);
	char	*b = ft_strcapitalize(ex2);
	char	*c = ft_strcapitalize(ex3);	
	printf("%s",a);
	printf("%s",b);
	printf("%s",c);

	return (0);
}
