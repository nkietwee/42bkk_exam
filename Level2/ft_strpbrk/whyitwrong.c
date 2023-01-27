/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whyitwrong.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:53:42 by nkietwee          #+#    #+#             */
/*   Updated: 2023/01/26 15:53:44 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s2[j])
    {
        i = 0;
        while (s1[i])
        {
            if (s2[j] == s1[i])
                return((char *)s1[i]);
            i++;
        }
        j++;
    }
    return(0);
}

int main(void)
{
    printf("%s\n" ,   strpbrk("abscde2fghijk4l", "d"));
    printf("%s\n" ,ft_strpbrk("abscde2fghijk4l","d"));

}
