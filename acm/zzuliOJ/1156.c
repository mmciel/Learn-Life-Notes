#include <stdio.h>
#include <string.h>

int main()
{
    char str[24] = {' '};
    gets(str);
    int len = strlen(str);

    int i = len-1;


        if(str[i] == 'y' && str[i+1] == '\0')
        {
            str[i] = 'i';
            str[i+1] = 'e';
            str[i+2] = 's';

        }

        else if(str[i] == 'o' && str[i+1] == '\0')
        {
            str[i+1] = 'e';
            str[i+2] = 's';

        }
        else if(str[i] == 's' && str[i+1] == '\0')
        {
            str[i+1] = 'e';
            str[i+2] = 's';

        }
        else if(str[i] == 'x' && str[i+1] == '\0')
        {
            str[i+1] = 'e';
            str[i+2] = 's';

        }
        else if(str[i] == 'h' &&str[i-1] == 'c' && str[i+1] == '\0')
        {
            str[i+1] = 'e';
            str[i+2] = 's';

        }
        else if(str[i] == 'h' &&str[i-1] == 's' && str[i+1] == '\0')
        {
            str[i+1] = 'e';
            str[i+2] = 's';

        }
        else
        {
            str[i+1] = 's';

        }



    puts(str);

    return 0;

}
