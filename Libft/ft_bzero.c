#include <Libft.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	char *str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
} /*
 #include <stdio.h>
 #include <string.h>
 int main()
 {
		char s[] = "loay alhindi";
		printf("%s\n",s);
		ft_bzero(s,2*sizeof(char));
		printf("%s",s);
 }*/
