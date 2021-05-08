#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	sign;
	int	digit;

	i = 0;
	nbr = 0;
	sign = 1;
	digit = 18;
	while ((*(str + i) > 8 && *(str + i) < 14) || *(str + i) == 32)
		i++;
	if (*(str + i) == 43 || *(str + i) == 45)
	{
		if (*(str + i) == 45)
			sign = -1;
		i++;
	}
	while (*(str + i) > 47 && *(str + i) < 58)
	{
		if (!digit--)
			return ((sign + 1) / (-2));
		nbr = nbr * 10 + (*(str + i) - 48);
		i++;
	}
	return (nbr * sign);
}
