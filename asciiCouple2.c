#include <stdio.h>
#include <string.h>  // strlen()
#define SW 40       // screen width

// generates star people templates
// programmed in C by antlerSphere

void printMan();
void printWoman();
void printHead();
void printTorso(char M_or_W);
void printLegs(int height);
void center(char *str);
void space();
void star();
void newline();

int main() {

printMan();

newline();
newline();

// /*

center("   ***   \n");
center("  *****  \n");
center("  *****  \n");
center("   ***   \n");
center(" ******* \n");
center("* ***** *\n");
center("* ***** *\n");
center("* ***** *\n");
center("  ** **  \n");
center("  ** **  \n");
center("  ** **  \n");
center("  ** **  \n");

newline();
newline();

// */

printWoman();

// /*

newline();
newline();

center("   ***   \n");
center("  *****  \n");
center("  *****  \n");
center("   ***   \n");
center(" ******* \n");
center("* ***** *\n");
center("* ***** *\n");
center("* ***** *\n");
center(" ******* \n");
center("*********\n");
center("  ** **  \n");
center("  ** **  \n");
center("  ** **  \n");

// */

return 0;
}

/*****************************************/

void printMan()

{
  printHead();
  printTorso('M');
  printLegs(4);
}

/*****************************************/

void printWoman()

{
  printHead();
  printTorso('W');
  printLegs(3);
}

/*****************************************/

void printHead()
{
int i, j;

  for (i=0; i<3; i++)
    space();
  for (i=0; i<3; i++)
    star(); 
  newline();

  for (j=0; j<2; j++)
  {
    for (i=0; i<2; i++)
      space();
    for (i=0; i<5; i++)
      star(); 
    newline();
  }

  for (i=0; i<3; i++)
    space();
  for (i=0; i<3; i++)
    star(); 
  newline();
}

/*****************************************/

void printTorso(char M_or_W)
{
int i, j;

  for (i=0; i<1; i++)
    space();
  for (i=0; i<7; i++)
    star();
  newline();

  for (j=0; j<3; j++)
  {
    for (i=0; i<1; i++)
      star();
    for (i=0; i<1; i++)
      space();
    for (i=0; i<5; i++)
      star();
    for (i=0; i<1; i++)
      space();
    for (i=0; i<1; i++)
      star();
    newline();
  }

  switch (M_or_W)
  {

  case 'M':  // same as default
  break;

  case 'W':  // print skirt

  for (i=0; i<1; i++)
    space();
  for (i=0; i<7; i++)
    star();
  newline();   
  for (i=0; i<9; i++)
    star();
  newline();

  break;
   
  default:
  break;

  }

}

/*****************************************/

void printLegs(int height)
{
int i, j;

  for (j=0; j<height; j++)
  {
    for (i=0; i<2; i++)
      space();
    for (i=0; i<2; i++)
      star();
    for (i=0; i<1; i++)
      space();
    for (i=0; i<2; i++)
      star();
    newline();
  }
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

void space()
{

putchar(' ');  
    
}

/*****************************************/

void star()
{

putchar('*');  
    
}

/*****************************************/

void newline()
{

putchar('\n');  
    
}

/*****************************************/