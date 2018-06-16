/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sle-lieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:48:10 by sle-lieg          #+#    #+#             */
/*   Updated: 2016/11/19 01:37:50 by sle-lieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char**      initArray(const char *s, char c)
{
   char**      array;
   const char* tmp;
   int         nbWords;

   nbWords = 0;
   tmp = s;
   while (*tmp)
      if (*tmp++ != c && (!*tmp || *tmp == c))
         ++nbWords;
   if (!(array = (char**)malloc((nbWords + 1) * sizeof(char*))))
      return NULL;
   array[nbWords] = NULL;
   nbWords = 0;
   tmp = s;
   while (*tmp)
   {
      while (*tmp && *tmp != c)
         ++tmp;
      if (!(array[nbWords++] = (char*)malloc((tmp - s + 1) * sizeof(char))))
         return NULL;
      while (*tmp == c)
         ++tmp;
      s = tmp;
   }
   return array;
}

char			**ft_strsplit(const char *s, char c)
{
   char**      array;
   const char* tmp;
   int         word;

   word = 0;
   while (*s == c)
      ++s;
   array = initArray(s, c);
   tmp = s;
   while (array[word])
   {
      while (*tmp != c)
         ++tmp;
      ft_memcpy(array[word], s, tmp - s);
      array[word++][tmp - s] = '\0';
      while (*tmp == c)
         ++tmp;
      s = tmp;
   }
   return array;
}