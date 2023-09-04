#include "main.h"

/**
 * isWhitespace - determines whitespaces
 *
 * @c: input character
 *
 * Return: type of white space
*/

int isWhitespace(char c)
{
	return c == ' ' || c == '\t' || c == '\n';
}

/**
 * countWords - counts words
 *
 * @str: input string
 *
 * Return: number of words
*/

int countWords(char* str)
{
	int count = 0;
	int isWord = 0;

	while (*str)
	{
		if (isWhitespace(*str))
		{
			isWord = 0;
		}
		else if (!isWord)
		{
			isWord = 1;
			count++;
		}

		str++;
	}

	return count;
}

/**
 * strtow - splits a string
 *
 * @str: input string
 *
 * Return: pointer to new string
 *         NULL if failed
*/

char** strtow(char* str)
{
	if (str == NULL || *str == '\0')
	{
		return NULL;
	}

	int numWords = countWords(str);
	char** words = (char**)malloc((numWords + 1) * sizeof(char*));
	if (words == NULL)
	{
		return NULL;
	}

	int wordIndex = 0;
	int wordStart = 0;
	int wordLength = 0;
	int isWord = 0;

	while (*str)
	{
		if (isWhitespace(*str))
		{
			if (isWord)
			{
				words[wordIndex] = (char*)malloc((wordLength + 1) * sizeof(char));
				if (words[wordIndex] == NULL)
				{
					for (int i = 0; i < wordIndex; i++)
					{
						free(words[i]);
					}
					free(words);
					return NULL;
				}

				strncpy(words[wordIndex], str - wordLength, wordLength);
				words[wordIndex][wordLength] = '\0';
				wordIndex++;
				wordLength = 0;
				isWord = 0;
			}
		} else if (!isWord)
		{
			isWord = 1;
			wordStart = str - 1 - wordLength;
			wordLength = 1;
		}
		else
		{
			wordLength++;
		}

		str++;
	}

	if (isWord)
	{
		words[wordIndex] = (char*)malloc((wordLength + 1) * sizeof(char));
		if (words[wordIndex] == NULL)
		{
			for (int i = 0; i < wordIndex; i++)
			{
				free(words[i]);
			}
			free(words);
			return NULL;
		}

		strncpy(words[wordIndex], str - wordLength, wordLength);
		words[wordIndex][wordLength] = '\0';
		wordIndex++;
	}

	words[wordIndex] = NULL;

	return words;
}
