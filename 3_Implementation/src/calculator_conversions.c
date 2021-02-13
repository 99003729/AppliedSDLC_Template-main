#include <calculator_conversions.h>

double conversion(int option_1, double metre_input)
{
    int option_1;
        if (option_1 == 1) 
        {   printf("You are inside Metre to Inch Conversion \n");
            if (metre_input != 'a'&'b'&'c'&'d'&'e'&'f'&'g'&'h'&'i'&'j'&'k'&'l'&'m'&'n'&'o'&'p'&'q'&'r'&'s'&'t'&'u'&'v'&'w'&'x'&'y'&'z'&'@'&'&'&'$'&'#'&'*'&'+'&'/'&'-'&'^'&'!'&'-'&'='&'>'&'<'&'A'&'B'&'C'&'D'&'E'&'F'&'G'&'H'&'I'&'J'&'K'&'L'&'M'&'N'&'O'&'P'&'Q'&'R'&'S'&'T'&'U'&'V'&'W'&'X'&'Y'&'Z')
            {
                return 39.3701 * metre_input;
            }
            else printf("Wrong input. Please enter a number and not character!!");
        }
        else if (option_1 == 2)
        {
            printf("You are inside Metre to Foot Conversion \n");
            if (metre_input != 'a'&'b'&'c'&'d'&'e'&'f'&'g'&'h'&'i'&'j'&'k'&'l'&'m'&'n'&'o'&'p'&'q'&'r'&'s'&'t'&'u'&'v'&'w'&'x'&'y'&'z'&'@'&'&'&'$'&'#'&'*'&'+'&'/'&'-'&'^'&'!'&'-'&'='&'>'&'<'&'A'&'B'&'C'&'D'&'E'&'F'&'G'&'H'&'I'&'J'&'K'&'L'&'M'&'N'&'O'&'P'&'Q'&'R'&'S'&'T'&'U'&'V'&'W'&'X'&'Y'&'Z')
            {
                return 3.28084 * metre_input;
            }
            else printf("Wrong input. Please enter a number and not character!!");
        }
        else printf("Please press only 1 or 2");
}