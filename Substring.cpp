/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
char *findSubStr (char *subStr, const char *str);
bool strCmp (char *str2, const char *src);
int
main ()
{
  printf ("Hello World");
  char str1[] = "saly";
  char str2[] = "kalyan";
  char *finStr = findSubStr (str1, str2);
  if (finStr != NULL)
    {
      printf ("\n substring is %s\n", finStr);
    }
  else
    {
      printf ("\n substring not found");
    }


  return 0;
}

char *
findSubStr (char *subStr, const char *str)
{
  int strLen = strlen (str);
  int subStrLen = strlen (subStr);
  int search_length = strLen - subStrLen;

  for (int i = 0; i < search_length; i++)
    {
      if (strCmp (subStr, str))
	return (char *) str;

      str++;

    }

  return NULL;

}

bool
strCmp (char *str2, const char *src)
{
  char *substr = str2;
  while (*src != '\0' && *substr != '\0')
    {
      if (*substr != *src)
	{
	  return false;
	}
      substr++;
      src++;
    }

  return true;
}
