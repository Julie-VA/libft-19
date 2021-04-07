/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 10:45:29 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/02 15:20:41 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

char	up(char c)
{
	return (c - 32);
}

char	lower(char c)
{
	return (c + 32);
}

int main(void)
{
    //memset
    // char str[] = "Hello bonjour je suis une phrase de test";
    //
    // ft_memset(str + 10, '/', 9);
    // printf("%s\n", str);

    //bzero
    // char str[] = "Hello bonjour je suis une phrase de test";
    //
    // ft_bzero(str + 3, 5);
    // printf("%s\n", str);
    // printf("%c\n", *(str + 7));
    // printf("%c\n", *(str + 8));

    //memcpy
    // char src[] = "Hello";
    // char dest[5];
    
    // ft_memcpy(dest, src, 3);
    // printf("%s\n", dest);

    //memccpy
    // char src[] = "Helow";
    // char dest1[6];
    // char *str1;
	// char dest2[6];
	// char *str2;

    // str1 = memccpy(dest1, src, 'o', 3);
    // printf("%s\n", dest1);
    // printf("%c\n", *(str1 - 1));

	// str2 = ft_memccpy(dest2, src, 'o', 3);
	// printf("%s\n", dest2);
    // printf("%c\n", *(str2 - 1));

    //memmove
    // char src1[] = "Hello";
    // char dest1[5];
	// char src2[] = "Hello";
    
    // memmove(dest1, src1, 5);
    // printf("%s\n", dest1);
	// memmove(src2 + 1, src2, 5);
	// printf("%s\n", src2);

	// char src1[] = "Hello";
    // char dest1[5];
	// char src2[] = "Hello";
    
    // printf("%s\n", memmove(dest1, src1, 5));
	// printf("%s\n", ft_memmove(src2 + 1, src2, 5));

    //memchr
	// char src1[] = "trouve un z ici";
	// printf("%s\n", memchr(src1, 'z', 15));
	// printf("%s\n", memchr(src1, 'z', 5));
	// printf("%s\n", ft_memchr(src1, 'z', 15));
	// printf("%s\n", ft_memchr(src1, 'z', 5));

    //memcmp
	// char	str1[] = "A tester";
	// char	str2[] = "A tester";
	// char	str3[] = "A testur";

	// printf("%d\n", memcmp(str1, str2, 8));
	// printf("%d\n", ft_memcmp(str1, str2, 8));
	// printf("%d\n", memcmp(str1, str3, 8));
	// printf("%d\n", ft_memcmp(str1, str3, 8));
	// printf("%d\n", memcmp(str3, str1, 8));
	// printf("%d\n", ft_memcmp(str3, str1, 8));
	// printf("%d\n", memcmp(str1, str3, 3));
	// printf("%d\n", ft_memcmp(str1, str3, 3));

    //strlen
    // char str[] = "Salut";

    // printf("%zu", ft_strlen(str));

	//strlcpy
	// char	src[] = "Copier";
	// char	dest[] = "Hello";

	// printf("%zu\n", ft_strlcpy(dest, src, 7));
	// printf("%s\n", dest);

	//strlcat
	// int size = 0;
	// char dest[] = "Hello";
	// char src[] = "Goodbye";
	// char buffer[size];
	// int i = 0;

	// while (dest[i])
	// {
	// 	buffer[i] = dest[i];
	// 	i++;
	// }

	// printf("%zu\n", ft_strlcat(buffer, src, size));
	// printf("%s", buffer);

    //strchr
    // char str[] = "Trouve un z dans cette chaine!";

    // printf("%s\n", ft_strchr(str, 'z'));
    // printf("%s\n", strchr(str, 'z'));

    //strrchr
    // char str[] = "Trouve un z dans cette chaine!";

    // printf("%s\n", ft_strrchr(str, 'z'));
    // printf("%s\n", strrchr(str, 'z'));

    //strnstr
    // char str2[] = "this is javatpoint with c and java";

    // printf("%s\n", strnstr(str2, "is", 3));
    // printf("%s\n", ft_strnstr(str2, "is", 3));
    // printf("%s\n", strnstr(str2, "is", 4));
    // printf("%s\n", ft_strnstr(str2, "is", 4));

	//strncmp
	// char str1[] = "pare!l";
    // char str2[] = "pare!l";

    // printf("%d\n", strncmp(str1, str2, 7));
	// printf("%d\n", ft_strncmp(str1, str2, 7));

    // char str3[] = "different";
    // char str4[] = "d1fferent";

	// printf("%d\n", strncmp(str3, str4, 8));
	// printf("%d\n", ft_strncmp(str3, str4, 8));

    // char str5[] = "hello";
    // char str6[] = "henlo";

	// printf("%d\n", strncmp(str5, str6, 5));
	// printf("%d\n", ft_strncmp(str5, str6, 5));
	// printf("%d\n", strncmp(str5, str6, 2));
	// printf("%d\n", ft_strncmp(str5, str6, 2));

	//atoi
	// char nb[] = "  		-2147483648";

	// printf("%d\n", atoi(nb));
	// printf("%d\n", ft_atoi(nb));

	//isalpha
	// printf("%d\n", isalpha(20));
	// printf("%d\n", ft_isalpha(20));
	// printf("%d\n", isalpha('A'));
	// printf("%d\n", ft_isalpha('A'));
	// printf("%d\n", isalpha(96));
	// printf("%d\n", ft_isalpha(96));
	// printf("%d\n", isalpha(321));
	// printf("%d\n", ft_isalpha(321));

	//isdigit
	// printf("%d\n", isdigit('e'));
	// printf("%d\n", ft_isdigit('e'));
	// printf("%d\n", isdigit('8'));
	// printf("%d\n", ft_isdigit('8'));

	//isalnum
	// printf("%d\n", isalnum('a'));
	// printf("%d\n", ft_isalnum('a'));
	// printf("%d\n", isalnum('9'));
	// printf("%d\n", ft_isalnum('9'));
	// printf("%d\n", isalnum(321));
	// printf("%d\n", ft_isalnum(321));

	//isascii
	// printf("%d\n", isascii('\017'));
	// printf("%d\n", ft_isascii('\017'));
	// printf("%d\n", isascii(128));
	// printf("%d\n", ft_isascii(128));

	//isprint
	// printf("%d\n", isprint('\011'));
	// printf("%d\n", ft_isprint('\011'));
	// printf("%d\n", isprint('u'));
	// printf("%d\n", ft_isprint('u'));
	// printf("%d\n", isprint(127));
	// printf("%d\n", ft_isprint(127));

	//toupper
	// printf("%c\n", toupper('a'));
	// printf("%c\n", ft_toupper('a'));
	// printf("%c\n", toupper('~'));
	// printf("%c\n", ft_toupper('~'));
	// printf("%c\n", toupper('Z'));
	// printf("%c\n", ft_toupper('Z'));

	//tolower
	// printf("%c\n", tolower('A'));
	// printf("%c\n", ft_tolower('A'));
	// printf("%c\n", tolower('~'));
	// printf("%c\n", ft_tolower('~'));
	// printf("%c\n", tolower('z'));
	// printf("%c\n", ft_tolower('z'));

	//strdup
    // char str[] = "Ca commence à faire beaucoup j'ai plus d'inspi";
    // char *dest;

    // dest = ft_strdup(str);
    // printf("%s", dest);
    // free(dest);

	//calloc
	// int	*a;
	// int	count = 5;
	// int	i = 0;

	// a = ft_calloc(count, sizeof(int));

	// while (i < count)
	// {
	// 	printf("%d\n", a[i++]);
	// }
	// free(a);

	//substr
	// char str[] = "Salut, ca va?";
	// char *dest;

	// dest = ft_substr(str, 7, 4);
	// printf("%s", dest);
	// free(dest);

	//strjoin
	// char	s1[] = "First and";
	// char	s2[] = " second strings";
	// char *dest;

	// dest = ft_strjoin(s1, s2);
	// printf("%s", dest);
	// free(dest);

	//strtrim
	// char src[] = "CUTca devrait s'afficherCUTTUUC";
	// char *str;

	// str = ft_strtrim(src, "CUT");
	// printf("%s", str);
	// free(str);

	//slpit
	// char	str[] = "SalutcccBonjourccokchellocahah";
	// char	**strs;
	// int		i;

	// i = 0;
	// strs = ft_split(str, 'c');
	// if (strs != NULL)
	// {
	// 	while (strs[i])
	// 		printf("%s\n", strs[i++]);
	// 	i = 0;
	// 	while (strs[i])
	// 		free(strs[i++]);
	// 	free(strs);	
	// }
	
	//ft_itoa
	// char *a;

	// a = ft_itoa(-850);
	// printf("%s\n", a);
	// a = ft_itoa(0);
	// printf("%s\n", a);
	// a = ft_itoa(2147483647);
	// printf("%s\n", a);
	// a = ft_itoa(-2147483648);
	// printf("%s\n", a);
	// a = ft_itoa(-0);
	// printf("%s\n", a);
	// free(a);

	//strmapi
	// char	(*ptr)(char);

	// ptr = &up;
	// printf("%s\n", ft_strmapi("hello", ptr));

	//putchar_fd
	// int	fd;

	// fd = open("file.txt", O_RDWR | O_CREAT);
	// ft_putchar_fd('c', fd);

	//putstr_fd /putendl_fd
	// int	fd;

	// fd = open("file.txt", O_RDWR | O_CREAT);
	// ft_putstr_fd("phrase de test", fd);
	// ft_putendl_fd("phrase de test", fd);

	//putnbr_fd
	// int	fd;
	// FILE *fichier = NULL;
	// char str[12] = "";

	// fd = open("file.txt", O_RDWR | O_CREAT);
	// ft_putnbr_fd(-2147483648, fd);
	// close(fd);
	// chmod("file.txt", S_IRUSR | S_IWUSR | S_IXUSR);
	// fichier = fopen("file.txt", "r+");
	// fgets(str, 12, fichier);
	// printf("%s\n", str);
	// if (remove("file.txt") == 0)
    // 	printf("Deleted successfully");
	// else
    // 	printf("Unable to delete the file");

	return (0);
}
