#include "ft_printf.h"

char	*pwidth(t_pf *pf, char *str)
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
        if (pf->flags[zero] == 1 && ft_strchr(str, 'x') == NULL)
        {
            pre[1] = 'x';
            str[1] = '0';
        }
        if (pf->flags[zero] == 0 && ft_strchr(str, 'x') == NULL)
        {
            pre[len - 1] = 'x';
            pre[len - 2] = '0';
            str[1] = '0';
        }
        if (pf->flags[zero] == 1)
        {
            if(i > 1)
                pre[1] = 'x';
            else
                str[0] = 'x';
            if (ft_strchr(str, 'x') != NULL)
                str[1] = '0';
        }
        return (str = ft_strjoin(pre, str));
    }
    else
        return (str = ft_strjoin(str, pre));
}

char *pprec(t_pf *pf, char *str, void *n)
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
    if (pf->flags[width] != 0 && pf->flags[prec] == -1)
        pre[1] = 'x';
    else if (pf->flags[prec] != -1 && n != 0)
        pre = ft_strjoin("0x",pre);
    str = ft_strjoin(pre, str);
    ft_strdel(&pre);
    return (str);
}

void conv_p(t_pf *pf, va_list ap)
{
    void *n;
    char *str;

    n = va_arg(ap, void *);

    str = ft_itoa_base((unsigned long long)n, 16, 0);
    if (pf->flags[prec] >= (int) (ft_strlen(str)) || (pf->flags[prec] > (int) (ft_strlen(str) - 1) && ft_strchr(str, '-') != NULL))
        str = pprec(pf, str, n);
    else if (pf->flags[prec] == 0 && str[0] == '0' && str[1] == '\0')
        str[0] = '\0';
    if (ft_strchr(str, 'x') == NULL)
    {
        if (pf->flags[width] == 0 && pf->flags[prec] != -1)
            str = ft_strjoin("0x", str);
        else if (pf->flags[width] == 0 && pf->flags[prec] != -1)
            str = ft_strjoin("0x", str);
        else if (pf->flags[width] == 0 && pf->flags[prec] == -1)
            str = ft_strjoin("0x", str);
        else if (pf->flags[width] != 0 && pf->flags[prec] == -1)
            str = ft_strjoin("0x", str);
        else if (pf->flags[width] != 0 && pf->flags[prec] != -1)
            str = ft_strjoin("0x", str);
    }
    if (pf->flags[width] != 0 && (pf->flags[width] > (int)ft_strlen(str)))
        str = pwidth(pf, str);
    pf->size += ft_strlen(str);
    ft_putstr(str);
}