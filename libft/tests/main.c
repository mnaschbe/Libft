/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 21:36:22 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/26 21:48:41 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	// Example 1: ft_atoi
	const char *numStr = "12345";
	int num = ft_atoi(numStr);
	printf("ft_atoi Result: %d\n", num);

	// Example 2: ft_memset
	char buffer[20];
	ft_memset(buffer, 'A', 10);
	printf("ft_memset Result: %s\n", buffer);

	// Example 3: ft_bzero
	char bzeroBuffer[10];
	ft_bzero(bzeroBuffer, 10);
	printf("ft_bzero Result: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%c", bzeroBuffer[i]);
	}
	printf("\n");

	// Example 4: ft_calloc
	int *intArray = (int *)ft_calloc(5, sizeof(int));
	printf("ft_calloc Result: ");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", intArray[i]);
	}
	printf("\n");
	free(intArray); // Don't forget to free allocated memory

	// Example 5: ft_isalnum
	char alphanumericChar = '7';
	int isAlnum = ft_isalnum(alphanumericChar);
	printf("ft_isalnum Result: %d\n", isAlnum);

	// Example 6: ft_isalpha
	char alphaChar = 'A';
	int isAlpha = ft_isalpha(alphaChar);
	printf("ft_isalpha Result: %d\n", isAlpha);

	// Example 7: ft_isascii
	char asciiChar = '!';
	int isAscii = ft_isascii(asciiChar);
	printf("ft_isascii Result: %d\n", isAscii);

	// Example 8: ft_isdigit
	char digitChar = '5';
	int isDigit = ft_isdigit(digitChar);
	printf("ft_isdigit Result: %d\n", isDigit);

	// Example 9: ft_isprint
	char printableChar = 'X';
	int isPrintable = ft_isprint(printableChar);
	printf("ft_isprint Result: %d\n", isPrintable);

	// Example 10: ft_itoa
	long int intToConvert = 54321;
	char *itoaStr = ft_itoa(intToConvert);
	printf("ft_itoa Result: %s\n", itoaStr);
	free(itoaStr); // Don't forget to free allocated memory

	// Example 11: ft_memchr
	char searchBuffer[] = "This is a test";
	char searchChar = 'a';
	char *memchrResult = ft_memchr(searchBuffer, searchChar, 14);
	if (memchrResult != NULL)
	{
		printf("ft_memchr Result: %s\n", memchrResult);
	}
	else
	{
		printf("ft_memchr Result: Character not found.\n");
	}

	// Example 12: ft_memcmp
	char cmpBuffer1[] = "hello";
	char cmpBuffer2[] = "world";
	int memcmpResult = ft_memcmp(cmpBuffer1, cmpBuffer2, 5);
	printf("ft_memcmp Result: %d\n", memcmpResult);

	// Example 13: ft_memcpy
	char srcCopy[] = "Copy this";
	char destCopy[20];
	ft_memcpy(destCopy, srcCopy, 9);
	printf("ft_memcpy Result: %s\n", destCopy);

	// Example 14: ft_memmove
	char srcMove[] = "Move this";
	char destMove[20];
	ft_memmove(destMove, srcMove, 9);
	printf("ft_memmove Result: %s\n", destMove);

	// Example 16: ft_putchar_fd
	char charToPrint = 'X';
	printf("ft_putchar_fd Result: ");
	ft_putchar_fd(charToPrint, 1); // Printing to stdout (1)
	printf("\n");

	// Example 17: ft_putendl_fd
	char *strToPrintWithNewline = "This is a line with a newline.";
	printf("ft_putendl_fd Result:\n");
	ft_putendl_fd(strToPrintWithNewline, 1); // Printing to stdout (1)

	// Example 18: ft_putnbr_fd
	int numToPrint = -12345;
	printf("ft_putnbr_fd Result: ");
	ft_putnbr_fd(numToPrint, 1); // Printing to stdout (1)
	printf("\n");

	// Example 19: ft_putstr_fd
	char *strToPrintFd = "This is a string to be printed to fd.";
	printf("ft_putstr_fd Result: ");
	ft_putstr_fd(strToPrintFd, 1); // Printing to stdout (1)
	printf("\n");

	// Example 20: ft_strndup
	const char *originalStr = "Duplicate this part of the string.";
	char *strDuplicate = ft_strndup(originalStr + 11, 4);
	printf("ft_strndup Result: %s\n", strDuplicate);
	free(strDuplicate); // Don't forget to free allocated memory


	// Example 23: ft_split
	const char *splitStr = "Split,this,string,by,comma";
	char **splitArray = ft_split(splitStr, ',');
	printf("ft_split Result:\n");
	for (int i = 0; splitArray[i] != NULL; i++)
	{
		printf("Element %d: %s\n", i, splitArray[i]);
	}
	ft_free(splitArray); // Don't forget to free allocated memory

	// Example 24: ft_strchr
	const char *strchrStr = "Find the character 'F'";
	char charToFind = 'F';
	char *strchrResult = ft_strchr(strchrStr, charToFind);
	if (strchrResult != NULL)
	{
		printf("ft_strchr Result: %s\n", strchrResult);
	}
	else
	{
		printf("ft_strchr Result: Character not found.\n");
	}

	// Example 25: ft_striteri
	char strIteri[] = "ApplyFunction";
	ft_striteri(strIteri, &ft_tolower); // Convert string to lowercase
	printf("ft_striteri Result: %s\n", strIteri);

	// Example 26: ft_strncat
	char destStrncat[20] = "Concatenate ";
	char srcStrncat[] = "this";
	ft_strncat(destStrncat, srcStrncat, 3);
	printf("ft_strncat Result: %s\n", destStrncat);

	// Example 27: ft_strcpy
	char destStrcpy[20];
	char srcStrcpy[] = "Copy this string.";
	ft_strcpy(destStrcpy, srcStrcpy);
	printf("ft_strcpy Result: %s\n", destStrcpy);

	// Example 28: ft_strlen
	char strlenStr[] = "Count this string length.";
	int strlenResult = ft_strlen(strlenStr);
	printf("ft_strlen Result: %d\n", strlenResult);

	// Example 29: ft_strjoin
	char *s1Strjoin = "Hello, ";
	char *s2Strjoin = "World!";
	char *strjoinResult = ft_strjoin(s1Strjoin, s2Strjoin);
	printf("ft_strjoin Result: %s\n", strjoinResult);
	free(strjoinResult); // Don't forget to free allocated memory

	// Example 30: ft_strlcat
	char destStrlcat[20] = "Concatenate ";
	char srcStrlcat[] = "this";
	unsigned int strlcatResult = ft_strlcat(destStrlcat, srcStrlcat, 20);
	printf("ft_strlcat Result: %u\n", strlcatResult);

	// Example 31: ft_strlcpy
	char destStrlcpy[20];
	char srcStrlcpy[] = "Copy this string.";
	unsigned int strlcpyResult = ft_strlcpy(destStrlcpy, srcStrlcpy, 20);
	printf("ft_strlcpy Result: %u\n", strlcpyResult);

	// Example 32: ft_strmapi
	const char *strmapiStr = "Map this string";
	char *strmapiResult = ft_strmapi(strmapiStr, &ffs);
		// fas is a custom mapping function
	printf("ft_strmapi Result: %s\n", strmapiResult);
	free(strmapiResult); // Don't forget to free allocated memory

	// Example 33: ft_strncmp
	char strncmpStr1[] = "Hello";
	char strncmpStr2[] = "World";
	int strncmpResult = ft_strncmp(strncmpStr1, strncmpStr2, 3);
	printf("ft_strncmp Result: %d\n", strncmpResult);

	// Example 34: ft_strndup
	const char *strndupStr = "Duplicate this part";
	char *strndupResult = ft_strndup(strndupStr + 10, 4);
	printf("ft_strndup Result: %s\n", strndupResult);
	free(strndupResult); // Don't forget to free allocated memory

	// Example 35: ft_strnstr
	const char *strnstrStr = "Find the substring 'sub'";
	const char *substring = "sub";
	char *strnstrResult = ft_strnstr(strnstrStr, substring, 25);
	if (strnstrResult != NULL)
	{
		printf("ft_strnstr Result: %s\n", strnstrResult);
	}
	else
	{
		printf("ft_strnstr Result: Substring not found.\n");
	}

	// Example 36: ft_strrchr
	const char *strrchrStr = "Find the character 'F' from the end";
	char charToFindRchr = 'F';
	char *strrchrResult = ft_strrchr(strrchrStr, charToFindRchr);
	if (strrchrResult != NULL)
	{
		printf("ft_strrchr Result: %s\n", strrchrResult);
	}
	else
	{
		printf("ft_strrchr Result: Character not found.\n");
	}

	// Example 37: ft_strtrim
	const char *strtrimStr = "   Trim this string   ";
	const char *trimSet = " ";
	char *strtrimResult = ft_strtrim(strtrimStr, trimSet);
	printf("ft_strtrim Result: %s\n", strtrimResult);
	free(strtrimResult); // Don't forget to free allocated memory

	// Example 38: ft_substr
	const char *substrStr = "Extract this substring";
	char *substrResult = ft_substr(substrStr, 8, 9);
	printf("ft_substr Result: %s\n", substrResult);
	free(substrResult); // Don't forget to free allocated memory

	// Example 39: ft_tolower
	char uppercaseChar = 'X';
	char lowercaseChar = ft_tolower(uppercaseChar);
	printf("ft_tolower Result: %c\n", lowercaseChar);

	// Example 40: ft_toupper
	char lowercaseChar2 = 'x';
	char uppercaseChar2 = ft_toupper(lowercaseChar2);
	printf("ft_toupper Result: %c\n", uppercaseChar2);

	return (0);
}