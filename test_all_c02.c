#include <stdio.h>
#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"

int main (void)
{
    printf("\n----------ex00----------\nExpected:\n24 42\n");
    printf("\nOutput:\n");
    char src[] = "24 42";
    char dest[6];
    ft_strcpy(dest, src);
    printf("%s", dest);
    printf("\n\n");

    printf("\n----------ex01----------\nExpected:\nThis is 42\n");
    printf("\nOutput:\n");
    char src2[] = "This is 42ABC";
    char dest2[14];
    ft_strncpy(dest2, src2, 10);
    printf("%s", dest2);
    printf("\n\n");

    printf("\n----------ex02----------\nExpected:\n0\n0\n0\n1\n1\n1");
    printf("\nOutput:\n");
    printf("%d\n", ft_str_is_alpha("ABC1"));
    printf("%d\n", ft_str_is_alpha("1ABC1"));
    printf("%d\n", ft_str_is_alpha("aB1cD"));
    printf("%d\n", ft_str_is_alpha("\0"));
    printf("%d\n", ft_str_is_alpha(""));
    printf("%d\n", ft_str_is_alpha("aBc"));
	
    printf("\n----------ex03----------\nExpected:\n0\n0\n0\n1\n1\n1");
    printf("\nOutput:\n");
    printf("%d\n", ft_str_is_numeric("AB1C&"));
    printf("%d\n", ft_str_is_numeric("1ABC&"));
    printf("%d\n", ft_str_is_numeric(" "));
    printf("%d\n", ft_str_is_numeric("\0"));
    printf("%d\n", ft_str_is_numeric(""));
    printf("%d\n", ft_str_is_numeric("123"));

    printf("\n----------ex04----------\nExpected:\n0\n0\n0\n1\n1\n1");
    printf("\nOutput:\n");
    printf("%d\n", ft_str_is_lowercase("ABc&a"));
    printf("%d\n", ft_str_is_lowercase("abC&"));
    printf("%d\n", ft_str_is_lowercase(" "));
    printf("%d\n", ft_str_is_lowercase("\0"));
    printf("%d\n", ft_str_is_lowercase(""));
    printf("%d\n", ft_str_is_lowercase("abc"));
    
    printf("\n----------ex05----------\nExpected:\n0\n0\n0\n1\n1\n1");
    printf("\nOutput:\n");
    printf("%d\n", ft_str_is_uppercase("Abc&a"));
    printf("%d\n", ft_str_is_uppercase("AabC&"));
    printf("%d\n", ft_str_is_uppercase(" "));
    printf("%d\n", ft_str_is_uppercase("\0"));
    printf("%d\n", ft_str_is_uppercase(""));
    printf("%d\n", ft_str_is_uppercase("ABC"));
    
    printf("\n----------ex06----------\nExpected:\n0\n0\n0\n1\n1\n1");
    printf("\nOutput:\n");
    printf("%d\n", ft_str_is_printable("\t"));
    printf("%d\n", ft_str_is_printable("\n"));
    printf("%d\n", ft_str_is_printable("ƒ"));
    printf("%d\n", ft_str_is_printable("123"));
    printf("%d\n", ft_str_is_printable(""));
    printf("%d\n", ft_str_is_printable("AbC"));

    printf("\n----------ex07----------\nExpected:\nABCDEFGHI");
    printf("\nOutput:\n");
    char str[] = "aBcDeFgHI";
    ft_strupcase(str);
    printf("%s\n", str);

    printf("\n----------ex08----------\nExpected:\nabcdefghi");
    printf("\nOutput:\n");
    char str2[] = "aBcDeFgHI";
    ft_strlowcase(str2);
    printf("%s\n", str2);
    
    printf("\n----------ex09----------\nExpected:\nSalut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un");
    printf("\nOutput:\n");
    char str3[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+Et+un";
    printf("%s\n", ft_strcapitalize(str3));
    return 0;
}
