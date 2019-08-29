#include <stdio.h>
#include <ctype.h>
/*
- fflush(stdin) only remove the character after scanf()
- Other cases, we should use while ((getchar()) != '\n');( it will be take all of the character
before we input character)
- ConvertToUppercase() function need add static for tmp, because we return tmp for this function
*/

char a;
char b[10];
char *c;
_Bool result; //result = 0: Consonant; result = 1: Vowel

char InputCharacter()
{
   char p;
   printf("Please input character\n");
   p = getchar();
   return p;
}

_Bool CheckVowelConsonant(char p)
{
   printf("Check %c is vowel or consonant\n", p);
   return tolower(p) == 'u' || tolower(p) == 'e' || tolower(p) == 'o' || tolower(p) == 'a' || tolower(p) == 'i' ? 1 : 0;
}

char *ConvertToUppercase(char *p)
{
   static char tmp[10];
   for (int i = 0; *(p+i) != '\0'; i++)
   {
      tmp[i] = toupper(*(p+i));
      printf("tmp %d is %c\n", i, tmp[i] );
   }
   puts(tmp);
   return tmp;
}

void main()
{
next:
    a = InputCharacter();

    //Check Character is Vowel or consonant
    result = CheckVowelConsonant(a);

    if (result == 0)
    {
    	printf("The character %c is consonant\n", a);
    }
    else
    {
    	printf("The character %c is vowel\n", a);
    }

    // fflush(stdin); Unable to use fflush(stdin) in this case
    char d;
    //while (getchar() != '\n'); if I want to write shortly
    while (d = getchar() != '\n')
    {
        printf("d is %c", d);
    }
    printf("d is %c \n", d); //Check the charater is removed

    printf("Do you want to continue?\n");
    while (1)
    {
    	if (_kbhit())
        {
        	gets(b);
            c = ConvertToUppercase(b);
            puts(c);
            if (strcmp(c, "YES") == 0)
            {
            	printf("Continue\n");
            	goto next;
            }
            else
            {
            	printf("See you again\n");
            	break;
            }
        }
    }
}
