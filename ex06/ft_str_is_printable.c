int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
#include <unistd.h>

int	main(void)
{
	char *str = "dfgdf";

	write(1, str, 5);
	return (0);
}*/