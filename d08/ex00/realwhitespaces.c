#define WHITESPACE(x) x == '\t' || x == '\n' || x == ' '

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int                ft_word_size(char *str);
int                ft_word_count(char *str);

char            **ft_split_whitespaces(char *str)
{
    int        word_count;
    int        words_entered;
    int        i;
    char    **words;
    char    *word;

    i = 0;
    words_entered = 0;
    word_count = ft_word_count(str);
    words = (char**)malloc(sizeof(char*) * (word_count + 1));
    while (words_entered < word_count)
    {
        word = (char*)malloc(sizeof(char) * (ft_word_size(str) + 1));
        while (WHITESPACE(str[0]) && str[0] != '\0')
            str++;
        while (!(WHITESPACE(str[0])) && str[0] != '\0')
            word[i++] = *str++;
        word[i] = '\0';
        words[words_entered++] = word;
        i = 0;
    }
    words[word_count] = 0;
    return (words);
}

/*
** We need to count the words in out str,
** So lets run a loop while we are not at the end of str, str[i] == '\0'
**  so lets skip past all the whitespace we have,
**  //when we hit a word, let's count how long it is
**  when we hit another white space or the end of str
**  we need to check for trailing white space too!
** we should wordcount++ since we did find a word.
** return wordcount
*/

int                ft_word_count(char *str)
{
    int word_count;
    int i;

    i = 0;
    word_count = 0;
    while (str[i] != '\0')
    {
        while (WHITESPACE(str[i]) && str[i] != '\0')
            i++;
        while (!(WHITESPACE(str[i])) && str[i] != '\0')
            i++;
        while (WHITESPACE(str[i]) && str[i] != '\0')
            i++;
        word_count++;
    }
    return (word_count);
}

int                ft_word_size(char *str)
{
    int i;

    i = 0;
    while (WHITESPACE(str[i]) && str[i] != '\0')
        str++;
    while (!(WHITESPACE(str[i])) && str[i] != '\0')
        i++;
    return (i);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		ft_split_whitespaces(argv[argc]);
		i++;
	}
	return (0);
}
