#include <unistd.h>

static int		ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return(a);
}

void	ft_putstr(char *str);
{
	write(1, str, ft_strlen(str));
}
