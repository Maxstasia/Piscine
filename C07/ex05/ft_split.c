/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstasiak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:06:51 by mstasiak          #+#    #+#             */
/*   Updated: 2024/10/01 16:06:53 by mstasiak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int is_charset(char c, char *charset)
{
    int i;

    i = 0;
    while (charset[i])
    {
        if (c == charset[i])
            return (1);
        i++;
    }
    return (0);
}

int word_count(char *str, char *charset)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        while (str[i] && is_charset(str[i], charset))
            i++;
        if (str[i] && !is_charset(str[i], charset))
        {
            count++;
            while (str[i] && !is_charset(str[i], charset))
                i++;
        }
    }
    return (count);
}

char *malloc_word(char *str, char *charset)
{
    int i;
    char *word;

    i = 0;
    while (str[i] && !is_charset(str[i], charset))
        i++;
    word = (char *)malloc(sizeof(char) * (i + 1));
    if (!word)
        return (NULL);
    i = 0;
    while (str[i] && !is_charset(str[i], charset))
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char **ft_split(char *str, char *charset)
{
    char **tab;
    int i;
    int j;

    tab = (char **)malloc(sizeof(char *) * (word_count(str, charset) + 1));
    if (!tab)
        return (NULL);
    i = 0;
    j = 0;
    while (str[i])
    {
        while (str[i] && is_charset(str[i], charset))
            i++;
        if (str[i] && !is_charset(str[i], charset))
        {
            tab[j] = malloc_word(str + i, charset);
            if (!tab[j])
                return (NULL);
            j++;
            while (str[i] && !is_charset(str[i], charset))
                i++;
        }
    }
    tab[j] = NULL;
    return (tab);
}
/*
#include <stdio.h>

int main(void)
{
    char **result;
    int i;

    result = ft_split("Hello world 42 Network", " ");
    i = 0;
    while (result[i])
    {
        printf("Word %d: %s\n", i, result[i]);
        i++;
    }
    return (0);
}*/
