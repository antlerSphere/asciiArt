#include <stdio.h>
#include <string.h>
#define SW 40  // screen width

// star people templates, center function
// programmed in C by antlerSphere

void center(char *str);
void newline();

int main() {

printf("   ***\n");
printf("  *****\n");
printf("  *****\n");
printf("   ***\n");
printf(" *******\n");
printf("* ***** *\n");
printf("* ***** *\n");
printf("* ***** *\n");
printf("  ** **\n");
printf("  ** **\n");
printf("  ** **\n");
printf("  ** **\n");

newline();
newline();

printf("   ***\n");
printf("  *****\n");
printf("  *****\n");
printf("   ***\n");
printf(" *******\n");
printf("* ***** *\n");
printf("* ***** *\n");
printf("* ***** *\n");
printf(" *******\n");
printf("*********\n");
printf("  ** **\n");
printf("  ** **\n");
printf("  ** **\n");

newline();
newline();

// Try changing the spacing around the
// lower two lines of this heart to change 
// its width for the center() function, how 
// does it change the output?

center(",***v***.\n");
center("*********\n");
center("*********\n");
center(" `******\n ");
center("  `***\n   ");
center("   `*\n    ");

/* Try similar adjustments by adding
   spaces to the leftside margin after the
   quotes to line up semicolons here to 
   print the couple on a windy day. */

newline();

center(" ,\"\"\".       ,***.\n");
center("  *.*.*      /*.*.*\\\n");
center("  **^**      |**^**|\n");
center("  ,*=*.      ||*=*||\n");
center(" *******     * *** *\n");
center(" * ***** *   * (***) *\n");
center(" * *****  * *  ***** *\n");
center(" * *****   *   ***** *\n");
center("  *****      *******\n");
center("   ** **     *********\n");
center("  ** **       ** **\n");
center("  ** **       ** **\n");
center("  ** **       ** **\n");

return 0;
}

/*****************************************/
    
void center(char *str)
{
  int length = strlen(str);
  int i, margin = SW/2-length/2;
  
  for(i=0; i<margin; i++)
    putchar(' '); 
  printf("%s", str);        
}

/*****************************************/

void newline()
{

putchar('\n');

}

/*****************************************/