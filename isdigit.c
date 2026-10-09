#include <stdio.h>
#include <unistd.h>

static int	is_integer(const char *s)
{
	int	i;

	i = 0;
	if (!s[i])
		return (0);
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		if (i > 11)
			return (0);
		i++;
	}
	return (1);
}
