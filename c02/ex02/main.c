#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = ft_str_is_alpha("hELlo");
	b = ft_str_is_alpha("12e");
	c = ft_str_is_alpha("eee3");	
	printf("%d",a);
	printf("%d",b);
	printf("%d",c);

	return(0);
}
