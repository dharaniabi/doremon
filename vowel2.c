#include <stdio.h>
int main()
{
  int ch;
  printf("enter a character\n");
  scanf("%c", &ch);
  switch(ch)
  {
    case 'a';
    case 'A';
    case 'e';
    case 'E';
    case 'i';
    case 'I';
    case 'o';
    case 'O';
    case 'u';
    case 'U';
      printf("%c is a vowel\n", ch)
    default:
      printf("%c is not a vowel\n", ch);
  break;
  }
  return 0;
}
