#include “main.h”

/**

*print_times_table-prints times table

*@n : time table to use

* return :void

*/

Void print_times_tables(int n)

{

Int a =0, rep, b;

If (n < 0 || n > 15)

Return;

While (a <= n)

{

For (b = 0; b <= n; b++)

{

Rep = a * b;

If (b == 0)

_putchar (‘0’ + rep);

Eles if (rep < 10)

{

_putchar( ‘ ‘);

_putchar (‘ ‘);

_putchar (‘ 0’ + rep);

}

Eles if (rep < 100)

{

_putchar (‘ ‘);

_putchar (‘ 0 ‘ + rep / 10);

_putchar(‘ 0 ‘ + rep % 10);

}

Eles

{

_putchar( ‘ 0 ‘ + rep / 100);

_putchar (‘ 0 ‘ + (rep – 100) / 10);

_putchar (‘ 0 ‘ + rep % 10);

}

If (b < n)

{

_putchar (‘ , ‘);

_putchar (‘ , ‘);

}

}

_putchar (‘ \n ‘ );

A++;
