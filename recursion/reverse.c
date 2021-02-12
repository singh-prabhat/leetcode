#include <stdio.h>


void reverseString(char* s, int sSize)
{
    
    char txt = 'X';

    //Lets work on the swaapping the first and last charcter of the string
    if (sSize / 2 > 0) 
    {
    	//Save the last chartacter in temp storage
        txt = (char) *(s + sSize -1);

        //Swap the last character with the first char of the string
        *(s + sSize -1) = *s;

        //Repeat the process through recursion for remaining end of string
        reverseString(s+1, sSize -2);

        //Repeat the process through recursion for remaining between first and last chars of string
         *s  = txt;
    }
}


int main()
{
	char string[] = "abcdefghijk";

	printf("\n Original String: %s \n", string);

	reverseString(string, 11);

	printf("\n Reversed String: %s \n", string);


	printf("\n\n");

	return 0;
}


