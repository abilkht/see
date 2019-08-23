#include <stdio.h>

int main ()
{
	int ch, letter_count = 0;
    int space_counter = 0;
    //_Bool flag = 1;
	printf("Input some characters: ");
	do
    {
        ch = getchar();
        if (ch == '\n' || ch == EOF)
        {
            printf("%i\n", letter_count);
            break;
        }
        letter_count += 1;

        if (ch >= 65 && ch <= 122)
        {
            space_counter = 0;
        }
        
        if (ch == ' ' || ch == '\t')
        {
            letter_count -= 1;
            space_counter += 1;

            if (space_counter < 2)
            {
                printf("%i\n", letter_count);
            } 
            
            letter_count = 0;
        }
	} while (1);

	printf("Done.\n");

	return 0;
}