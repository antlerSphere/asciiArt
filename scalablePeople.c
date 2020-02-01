#include <stdio.h>
#include <stdlib.h>  // exit()
#include <string.h> // strlen() in center()
#include <ctype.h> // toupper()
#define SW 40     // screen width

// generates scalable ascii people
// programmed in C by antlerSphere

void printMan(int margin, int size, int width, int height, int girth, int stance);
void printWoman(int margin, int size, int width, int height, int girth, int stance);
void printHead(int margin, int size, int width);
void printTorso(char M_or_W, int margin, int size, int width, int girth);
void printLegs(int margin, int size, int width, int height, int girth, int stance);
void center(char *str);
void space();
void star();
void newline();

int main() {

char M_or_W;
int margin, size, width, height, girth, stance;
int i, j;

printf("Enter M or W followed by size 1-10: ");

scanf("%c%d", &M_or_W, &size);

M_or_W = toupper(M_or_W);

newline();
newline();
newline();

if (((M_or_W != 'M') && (M_or_W != 'W')) || (size < 0) || (size > 10))
  {
printf("Error: enter ['M' or 'W'][size]");
newline();
exit(1);
  }

  width = size - 1;
  height = size;

switch (size)
{

  case 0:
  printf("No size entered");
  newline();
  exit(0);
  break;

  
  case 1:

  if (M_or_W == 'M')
  {
    printf(" o");   newline();
    printf("/|\\"); newline();
    printf("/ \\"); newline();
    exit(0);
  }

  if (M_or_W == 'W')
  {
    printf(" o");   newline();
    printf("/|\\"); newline();
    printf("/_\\"); newline();
    exit(0);
  }
  break;

  case 2:

  if (M_or_W == 'M')
  {
  printf("  ***\n");
  printf("  ***\n");

  printf(" *****\n");
  printf("* *** *\n");
  printf("* *** *\n");

  printf("  * *\n");
  printf("  * *\n");
  exit(0);
  }

  if (M_or_W == 'W')
  {
  printf("  ***\n");
  printf("  ***\n");

  printf(" *****\n");
  printf("* *** *\n");
  printf("* *** *\n");

  printf(" *****\n");
  printf("  * *\n");
  exit(0);
  }

  break;

  case 3:

  margin = 3;
  stance = 2;
  girth = 2;
  break;

  case 4:

  margin = 4;
  stance = 1;
  girth = 2;
  break;

  case 5:

  margin = 5;
  stance = 2;
  girth = 2;
  break;

  case 6:

  margin = 6;
  stance = 1;
  girth = 3;
  break;

  case 7:

  margin = 7;
  stance = 2;
  girth = 3;
  break;

  case 8:

  margin = 8;
  stance = 3;
  girth = 4;
  break;

  case 9:

  margin = 9;
  stance = 4;
  girth = 4;
  break;

  case 10:

  margin = 10;
  stance = 5;
  girth = 4;
  break;

default:
break;

}
switch (M_or_W)
{

case 'M':

  printMan(margin, size, width, height, girth, stance);
  break;

case 'W':

  printWoman(margin, size, width, height-1, girth, stance);
  break;

default:
break;

}

return 0;
}

/*****************************************/

void printMan(int margin, int size, int width, int height, int girth, int stance)

{
  printHead(margin, size, width);
  printTorso('M', margin, size, width, girth);
  printLegs(margin, size, width, height, girth, stance);
}

/*****************************************/

void printWoman(int margin, int size, int width, int height, int girth, int stance)

{
  printHead(margin, size, width);
  printTorso('W', margin, size, width, girth);
  printLegs(margin, size, height, width, girth, stance);
}

/*****************************************/

void printHead(int margin, int size, int width)
{
int i, j, k = 0;

if (size > 6)
  k++;

  for (i=0; i<margin; i++)
    space();
  for (i=0; i<width; i++)
    star(); 
  newline();

  for (j=0; j<width-1; j++)
  {

  if (size > 6)
    {
    if (j==1)
      k++;
    if (j==width-2)
      k--;
    }

    for (i=0; i<margin-1-k; i++)
      space();
    for (i=0; i<size+1+k+k; i++)
      star(); 
    newline();

  }

  for (i=0; i<margin; i++)
    space();
  for (i=0; i<width; i++)
    star(); 
  newline();
}

/*****************************************/

void printTorso(char M_or_W, int margin, int size, int width, int girth)
{
int i, j, k, l = 0, m = 0;

if ((size > 3) && (size < 6))
  m++;

if (size > 7)
  m--;

  for (i=0; i<margin-2; i++)
    space();
  for (i=0; i<size+3; i++)
    star();
  newline();

  for (j=0; j<width; j++)
  {
    for (i=0; i<margin-4+m; i++)
      space();
    for (i=0; i<girth-1; i++)
      star();
    for (i=0; i<1; i++)
      space();
    for (i=0; i<size+1; i++)
      star();
    for (i=0; i<1; i++)
      space();
    for (i=0; i<girth-1; i++)
      star();
    newline();
  }

  switch (M_or_W)
  {

  case 'M':  // same as default
  break;

  case 'W':  // print skirt

  for (k=0; k<size-1; k++)
  {
    for (i=0; i<margin-(k+2); i++)
      space();
    for (i=0; i<size+(k+3+l); i++)
      star();
    newline();
    l++;
  }

  break;
   
  default:
  break;

  }

}

/*****************************************/

void printLegs(int margin, int size, int width, int height, int girth, int stance)
{
int i, j, m = 0;

if (size > 3)
  girth++;

if (size > 7)
  m++;

  for (j=0; j<height; j++)
  {
    for (i=0; i<margin-1-m; i++)
      space();
    for (i=0; i<girth-1; i++)
      star();
    for (i=0; i<stance; i++)
      space();
    for (i=0; i<girth-1; i++)
      star();
    newline();
  }
}

/*****************************************/
// not used    
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