#include "main.h"
#include <stdio.h>

void jack_bauer(void)
{
  int i = 0;

  while (i < 24)
    {
      putchar('1'+ (i/10));
      putchar('\n');
      i++;
    }
}
