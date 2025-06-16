void ft_bzero(void *s, unsigned int n)
{
    unsigned char *byte_s = (unsigned char *) s;
    unsigned char byte_n = (unsigned char) n;

    int i;

    i = 0;
    while (i < n)
    {
        *(byte_s + i) = 0;
        i++;
    }
}

