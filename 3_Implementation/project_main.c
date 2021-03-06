#include <calculator_operations.h>

/* Status of the operation requested */
#define VALID   (1)
#define INVALID (0)

/* Calculator operation requested by user*/
unsigned int calculator_operation = 0;

/* Operands on which calculation is performed */
int calculator_operand1 = 0;
int calculator_operand2 = 0;
int option_1 = 0;
double metre_input = 0;

/* Valid operations */
enum operations{ ADD=1, SUBTRACT, MULTIPLY, DIVIDE, CONVERT, EXIT };

/* Display the menu of operations supported */
void calculator_menu(void);
/* Verifies the requested operations validity */
int valid_operation(int operation);


/* Start of the application */
int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Distance Convertion\n6. Exit");
    printf("\n\tEnter your choice\n");
   
     //__fpurge(stdin);
    scanf("%d", &calculator_operation);

    if(EXIT == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

    else if(ADD == calculator_operation)
    {
        printf("\n\tEnter your Numbers with space between them\n");
        //__fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else if(SUBTRACT == calculator_operation)
    {
        printf("\n\tEnter your Numbers with space between them\n");
        //__fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else if(MULTIPLY == calculator_operation)
    {
        printf("\n\tEnter your Numbers with space between them\n");
        //__fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else if(DIVIDE == calculator_operation)
    {
        printf("\n\tEnter your Numbers with space between them\n");
        //__fpurge(stdin);
        scanf("%d %d", &calculator_operand1, &calculator_operand2);
    }
    else if(CONVERT == calculator_operation)
    {
        printf("\n\tPress 1 for Metre to Inch | Press 2 for Metre to Foot : \n");
        scanf("%lf",&option_1);
        printf("Enter the Number you want to convert: ");
        scanf("%lf", &metre_input);
    }
    else
    {
        printf("\n\t---Wrong choice---\nEnter to continue\n");
        //__fpurge(stdin);
        getchar();
        return;
        
    }
    switch(calculator_operation)
    {
        case ADD:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            //__fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            //__fpurge(stdin);
            getchar();
            break;
        case MULTIPLY:
            printf("\n\t%d * %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            multiply(calculator_operand1, calculator_operand2));
            
            //__fpurge(stdin);
            getchar();
            break;
        case DIVIDE:
            printf("\n\t%d / %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            divide(calculator_operand1, calculator_operand2));
            
            //__fpurge(stdin);
            getchar();
            break;
        case CONVERT:
            printf("\n\tThe conversion of %d is %d\nEnter to continue",
            option_1,
            metre_input,
            conversion(option_1,metre_input));
            getchar();
            break; 
        case 6:
            exit(0);
            break;
        default:
            printf("\n\t---It should never come here---\n");
    }
}

int valid_operation(int operation)
{
    /* Check if the operation is a valid operation */
    return ((ADD <= operation) && (EXIT >= operation)) ? VALID: INVALID;
}