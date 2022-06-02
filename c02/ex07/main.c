#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char ex[] = "Ewrp";
	char ex2[] = "fEe";
	char ex3[] = "rrRw";

	char	*a = ft_strupcase(ex);
	char	*b = ft_strupcase(ex2);
	char	*c = ft_strupcase(ex3);	
	printf("%s",a);
	printf("%s",b);
	printf("%s",c);

	return(0);
}
