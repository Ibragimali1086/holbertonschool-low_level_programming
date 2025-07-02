#include <stdlib.h>

/**
 * word_len - hesablayır sözün uzunluğunu boşluğa qədər
 * @str: başlanğıc nöqtəsi
 * Return: sözün uzunluğu
 */
int word_len(char *str)
{
	int len = 0;

	while (str[len] && str[len] != ' ')
		len++;
	return (len);
}

/**
 * word_count - hesablayır sözlərin sayını sətirdə
 * @str: giriş sətiri
 * Return: sözlərin sayı
 */
int word_count(char *str)
{
	int i = 0, words = 0;

	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break;
		words++;
		while (str[i] && str[i] != ' ')
			i++;
	}
	return (words);
}

/**
 * word_dup - kopyalayır sözü yeni yaddaşa
 * @str: başlanğıc nöqtəsi
 * @len: sözün uzunluğu
 * Return: göstərici yeni sözə
 */
char *word_dup(char *str, int len)
{
	char *word;
	int i;

	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);

	for (i = 0; i < len; i++)
		word[i] = str[i];
	word[i] = '\0';

	return (word);
}

/**
 * strtow - bölür sətiri sözlərə
 * @str: giriş sətiri
 * Return: sözlər massivinə göstərici, NULL uğursuzluqda
 */
char **strtow(char *str)
{
	char **words;
	int i = 0, j = 0, words_num, len;

	if (str == NULL || *str == '\0')
		return (NULL);

	words_num = word_count(str);
	if (words_num == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (words_num + 1));
	if (!words)
		return (NULL);

	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break;

		len = word_len(&str[i]);
		words[j] = word_dup(&str[i], len);
		if (!words[j])
		{
			while (j >= 0)
				free(words[j--]);
			free(words);
			return (NULL);
		}

		j++;
		i += len;
	}
	words[j] = NULL;

	return (words);
}
