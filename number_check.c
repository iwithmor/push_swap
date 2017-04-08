#include "ps.h"

bool less_than_max(char *s)
{
	int i;
	char *int_max;

	int_max = "2147483648";
	i = 0;
	if (s[0] == '+')
		++s;
	while (i < ft_strlen(s))
	{
		if (s[i] < '0' || s[i] > int_max[i])
			return false ;
	}
	return true ;
}

bool greater_than_min(char *s)
{
	int i;
	char *int_max;

	int_max = "-2147483648";
	i = 1;
	while (i < ft_strlen(s))
	{
		if (s[i] < '0' || s[i] > int_max[i])
			return false ;
	}
	return true ;
}

bool isnum(char *s)
{
	int i;

	if (ft_strlen(s) > 11)
		return false ;
	if (ft_strlen(s) > 10)
	{
		if (s[0] == '-')
			if (!greater_than_min(s))
				return false ;
		else if (s[0] == '+')
			if (!less_than_max(s))
				return false ;
		else
			return false ;
	}
	if (ft_strlen(s) == 10 && !less_than_max(s))
			return false ;
	i = 0;
	if (s[i] == '-' || s[i] == '+')
		++i;
	while (i < ft_strlen(s))
	{
		if (!is_digit(s[i]))
			return false ;
		++i;
	}
	return true ;
}

void verify_arguments(int argc, char **args)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if (!isnum(args[i]))
		{
			ft_putstr("Error\n");
			exit(0);
		}
		++i;
	}
}
