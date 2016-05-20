#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string n = GetString(); // Get Names from the user
    
    int l = strlen(n);      // Save the length of the user inputs
    
    char space[l];          // Create an array to for the index of the spaces

    int s = 0;              // This variable will hold the index value of the spaces


    
    // Begin out loop to get the spaces from the get string array
    
    for (int i = 0; i < l; i++)
    {
        if (n[i] == ' ')
        {
            space[s] = n[i + 1];
            s = s + 1;
        }
    }
    
    // Begin to print out our capitalized letters
    printf("%c", toupper(n[0]));
    
    // This is the loop to print out the rest of the initials after the spaces
    for (int i = 0; i < s; i++)
    {
        printf("%c", toupper(space[i]) );     // This line gets the position 
                                              // of the space and then uppercases 
                                              // the next letter
    }
    printf("\n");

   
}