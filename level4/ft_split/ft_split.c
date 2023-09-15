#include "ft_split.h"

// "" -> -1 (no next word)

// "AAAAAAAAAAAAAAAA" -> -1 (no next word)

// "AAAAAAAAAAAAAAAA                   AAAAAAAAAAAAAAAAA"
// -> "AAAAAAAAAAAAAAAA\0\0\0\0\0\0\0\0(A)AAAAAAAAAAAAAAAA" (next word: A)
// "                "
// "\0\0\0\0\0\0\0\0" (next word: \0)

// "                AAAAAAAAAAAAAAAA               "
// "\0\0\0\0\0\0\0\0(A)AAAAAAAAAAAAAAA               " (next word: A)
int	look_for_next_word(char *str)
{
	int	i;

	i = 0;
	while (str[i] && !(str[i] >= '\b' && str[i] <= '\v' || str[i] == ' '))
		i++;
	if (str[i] == 0)
		return (-1);
	while (str[i] >= '\b' && str[i] <= '\v' || str[i] == ' ')
	{
		str[i] = 0;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*new_str;
	int		size;
	int		i;

	if (str == NULL)
		return (NULL);
	size = -1;
	while (str[++size])
		;
	new_str = malloc((size + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	i = -1;
	while (str[++i])
		new_str[i] = str[i];
	new_str[i] = 0;
	return (new_str);
}

char	**join_words(char **words1, char **words2)
{
	char	**words;
	int		ij[2];
	int		size[2];

	*(long *)size = 0;
	while (words1[size[0]])
		size[0]++;
	size[1] = 0;
	while (words2[size[1]])
		size[1]++;
	words = malloc((size[0] + size[1] + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	ij[0] = 0;
	ij[1] = -1;
	while (words1[++ij[1]])
		words[ij[0]++] = words1[ij[1]];
	ij[1] = -1;
	while (words2[++ij[1]])
		words[ij[0]++] = words2[ij[1]];
	words[ij[0]] = 0;
	free(words1);
	free(words2);
	return (words);
}

char	**ft_split(char *str)
{
	char	*word;
	char	**words;
	int		next_word;

	words = malloc(2 * sizeof(char *));
	if (words == NULL)
		return (NULL);
	words[1] = 0;
	if (*str == 0)
	{
		words[0] = 0;
		return (words);
	}
	word = ft_strdup(str);
	if (word == NULL)
	{
		free(words);
		return (NULL);
	}
	next_word = look_for_next_word(word);
	if (next_word != -1)
	{
		free(words);
		words = join_words(ft_split(word), ft_split(word + next_word));
		free(word);
		return (words);
	}
	words[0] = word;
	return (words);
}
