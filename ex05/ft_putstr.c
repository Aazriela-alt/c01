int	ft_strlen(char *str)
{
	int	a = 0;

	while (str[a] ! = '\0')
	{
		whrite(1, &str[a], 1);
		a++;
	}
}
