#include<stdio.h>
int main()
{
    char ch;
    int ascii;
    printf("Enter a character: ");
    scanf("%c", &ch);
    ascii = ch;
    printf("ASCII value of %c is: %d\n",ch,ascii);
   //capital characters (A to Z)
    if (ascii >= 65 && ascii <= 90)
        printf("%c is a capital letter");
  //small characters (a to z)
    else if (ascii >= 97 && ascii <=122)
        printf("%c is a small letter");
 //digits (0 to 9)
    else if (ascii >=48 && ascii <= 57)
        printf("%c is a digit");
 //special symbols
    else if (ascii>=0 && ascii<=47 || ascii>=58 && ascii<=64 || ascii>=91 && ascii<=96 || ascii>=123 && ascii<=127)
        printf("%c is a special symbols");
}
