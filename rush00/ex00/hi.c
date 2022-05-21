 43             if ((r == 1 && ((c == 1) || (c == x))) || (r == y && ((c == 1) ||  (c == x))))
 44                 ft_putchar('o');
 45             else if ((r == 1) || (r == y))
 46                 ft_putchar('-');
 47             else if ((c == 1) || (c == x))
 48                 ft_putchar('|');
 49             else
 50                 ft_putchar(' ');
 51             c++;
