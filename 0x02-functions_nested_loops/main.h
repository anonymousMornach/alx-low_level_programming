#ifndef MAIN_H

#define MAIN_H

/**
 * File: main.h
 *
 * Description: header file containing declarations
 */
int _putchar(char c);
void print_alphabet(void)
{
        int i;
        for (i = 97; i < 26 ; i++)
        {
                _putchar(i);
        }
        _putchar('\n');
}
#endif
