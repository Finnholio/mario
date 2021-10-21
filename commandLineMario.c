#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

void printChar(int numOfSpaces, char thingToPrint);

int main(int argc, string argv[])
{
    int numOfRows;

    if (argc != 2)
    {
        printf("I am expecting ./comandLine 3\n");
        return 1;
    }

    numOfRows = atoi(argv[1]);

    for (int i = 1; i <= numOfRows; i++)
    {
        printChar(numOfRows - i, ' '); //print first spaces
        printChar(i, '#');//print first ##
        printf("%s", "  "); // add space between
        printChar(i, '#'); //add the final ##
        printf("%s", "\n"); //new line
    }
    return 0;
}

void printChar(int numOfSpaces, char thingToPrint)
{
    for (int i = 0; i < numOfSpaces; i++) //print num of that character
    {
        printf("%c", thingToPrint);
    }
}
