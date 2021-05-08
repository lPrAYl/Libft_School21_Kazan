#include "libft.h"

static int	ft_len_nbr(long nbr, int sign)
{
	int	len;

	len = 1;
	nbr /= 10;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len + sign);
}

static int	ft_abs_nbr(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		len_nbr;
	int		digit;
	char	*str;

	sign = 0;
	if (n < 0)
		sign = 1;
	len_nbr = ft_len_nbr(n, sign);
	str = (char *)malloc(sizeof(char) * (len_nbr + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		*(str + 0) = '-';
	str[len_nbr] = '\0';
	while (--len_nbr >= sign)
	{
		digit = n % 10;
		str[len_nbr] = ft_abs_nbr(digit) + '0';
		n /= 10;
	}	
	return (str);
}
