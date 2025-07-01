void ft_putnbr(int nb)
{
    char tableau[10];
    int i = 0;
    if (nb == 0)
    {
        write(1, "0", 1);
    }
    while (nb > 0)
    {
        int chiffre = nb % 10;
        tableau[i] = chiffre + '0';
        nb = nb / 10;
        i++;
    }
    int size = i;
    tableau[i] = '\0';
    int j = i - 1;
    i = 0;
    while (i < j)
    {
        char temporaire = tableau[j];
        tableau[j] = tableau[i];
        tableau[i] = temporaire;
        i++;
        j--;
    }
    write(1, &tableau, size);
}