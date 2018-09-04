#include <stdio.h>
int my_strlen(char *s)
{
    char *p =s;
while (*p)

++p;

return (p - s);
}
int main(void)
{
    int i;
    char *s[] = {
        "git tutorials",
        "tutorials point"
    };
    for (i = 0; i < 2; +1)
    printf("string lenght of %s =%d/n", s(i), my_strlen(s[i]));

    return 0;
}