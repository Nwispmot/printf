
#include "ft_printf.h"

char	*lxwidth(t_pf *pf, char *str, int n)
{
    int		i;
    int		len;
    char	*pre;

    i = -1;
    len = pf->flags[width] - (int) ft_strlen(str);
    pre = (char *) malloc((sizeof(char)) * ((pf->flags[width] - (int) ft_strlen(str)) + 1));
    while (++i < len)
    {
        if (pf->flags[zero] == 1)
            pre[i] = '0';
        else
            pre[i] = ' ';
    }
    pre[i] = '\0';
    if (pf->flags[minus] == 0)
    {
        if (pf->flags[sharp] == 1 && pf->flags[zero] == 1 && n != 0 && ft_strchr(str, 'x') == NULL)
        {
            pre[1] = 'x';
            str[1] = '0';
        }
        if (pf->flags[sharp] == 1 && pf->flags[zero] == 0 && n != 0 && ft_strchr(str, 'x') == NULL)
        {
            pre[len - 1] = 'x';
            pre[len - 2] = '0';
            str[1] = '0';
        }
        if (pf->flags[sharp] == 1 && pf->flags[zero] == 1 && n != 0)
        {
            if(i > 1)
                pre[1] = 'x';
            else
                str[0] = 'x';
            if (ft_strchr(str, 'x') != NULL)
                str[1] = '0';
        }
        return (str = ft_strjoin_free(pre, str, 1, 1));
    }
    else
        return (str = ft_strjoin_free(str, pre, 1, 1));
}

char *lxprec(t_pf *pf, char *str, int n)
{
    int len;
    int i;
    char *pre;

    i = 0;
    len = pf->flags[prec] - (int)ft_strlen(str);
    pre = (char*)malloc((sizeof(char)) * (len + 1));
    while(i < len)
    {
        pre[i] = '0';
        i++;
    }
    pre[i] = '\0';
    if (pf->flags[sharp] == 1 && pf->flags[width] != 0 && pf->flags[prec] == -1 && n != 0)
        pre[1] = 'x';
    else if (pf->flags[sharp] == 1 && pf->flags[prec] != -1 && n != 0)
        pre = ft_strjoin_free("0x", pre, 0, 1);
    str = ft_strjoin_free(pre, str, 1, 1);
    return (str);
}

void conv_lx(t_pf *pf, va_list ap)
{
    uintmax_t n;
    char *str;
    char *del;

    if (pf->flags[l] == 1)
        n = va_arg(ap, unsigned long int);
    else if (pf->flags[ll] == 1)
        n = va_arg(ap, unsigned long long int);
    else
        n = va_arg(ap, unsigned int);
    if (pf->flags[h] == 1)
        n = (unsigned short int) n;
    if (pf->flags[hh] == 1)
        n = (unsigned char) n;

    //str = ft_itoa_base(n, 16, 0);
	str = ft_unsigned_ltoa_base(n, 16, 'x' - 23);
    if (pf->flags[prec] >= (int) (ft_strlen(str)) || (pf->flags[prec] > (int) (ft_strlen(str) - 1) && ft_strchr(str, '-') != NULL))
        str = lxprec(pf, str, n);
    else if (pf->flags[prec] == 0 && str[0] == '0' && str[1] == '\0')
    {
    	del = str;
		str = ft_strdup("\0");
		free(del);
	}
    if (ft_strchr(str, 'x') == NULL)
    {
        if (pf->flags[sharp] == 1 && n != 0 && pf->flags[width] == 0 && pf->flags[prec] != -1)
            str = ft_strjoin_free("0x", str, 0, 1);
        else if (pf->flags[sharp] == 1 && n != 0 && pf->flags[width] == 0 && pf->flags[prec] != -1)
            str = ft_strjoin_free("0x", str, 0, 1);
        else if (pf->flags[sharp] == 1 && n != 0 && pf->flags[width] == 0 && pf->flags[prec] == -1)
            str = ft_strjoin_free("0x", str, 0, 1);
        else if (pf->flags[sharp] == 1 && n != 0 && pf->flags[width] != 0 && pf->flags[prec] == -1)
            str = ft_strjoin_free("0x", str, 0, 1);
        else if (pf->flags[sharp] == 1 && n != 0 && pf->flags[width] != 0 && pf->flags[prec] != -1)
            str = ft_strjoin_free("0x", str, 0, 1);
    }
    if (pf->flags[width] != 0 && (pf->flags[width] > (int)ft_strlen(str)))
        str = lxwidth(pf, str, n);
    pf->size += ft_strlen(str);
    ft_putstr(str);
    free(str);
}