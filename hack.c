//to print three lines of output, the first line prints the character, second is string and third is a sentance
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char ch,s[100];
    scanf("%c", &ch);
    printf("%c \n", ch);

    scanf("%s", s);
    printf("%s \n",s);

    scanf("\n");
    scanf("%[^\n]%*c", s);
    printf("%s",s);
    
    return 0;
}