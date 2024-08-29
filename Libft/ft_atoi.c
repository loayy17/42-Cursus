
int	ft_atoi(const char *str)
{
	int i;
	int sign;
	unsigned long int number;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 7 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	return (number * sign);
} /*

 #include <stdio.h>
 #include <stdlib.h>
 int main()
 {
		char s[] = "           +1     23\n456"; 
			// The integer conversion will stop at '\n'
		printf("Converted number: %d\n", atoi(s));  // Output will be 123
		printf("Converted number: %d\n", ft_atoi(s));
		return (0);
 }*/
