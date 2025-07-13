char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*
#include <unistd.h>

int	main(void)
{
	char	str[] = "ASJHDK";
	ft_strlowcase(str);
	write(1, str, 6);
	return (0);
}*/