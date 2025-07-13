char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*
#include <unistd.h>

int	main(void)
{
	char	str[] = "sdfag";
	ft_strupcase(str);
	write(1, str, 5);
	return (0);
}*/