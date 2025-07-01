void ft_print_comb2(void)
{
    int a, b;
    char c, d;
    a = 0;
    char space = ' ';
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            c = a / 10 + '0';
            d = a % 10 + '0';
            write(1, &c, 1);
            write(1, &d, 1);
            write(1, &space, 1);
            c = b / 10 + '0';
            d = b % 10 + '0';
            write(1, &c, 1);
            write(1, &d, 1);
            if (!(a == 98 && b == 99))
                write(1, ", ", 2);
            b++;
        }
        a++;
    }
}