#include <stdio.h>

// generates an ascii square of width w
// programmed in C by antlerSphere 

void space(void);
void lineFeed(int width);
void square(int width, int height);
void top(int length);
void middle(int height, int length);
void bottom1(int length);
void bottom2(int length);

int main() {

int w = 0;
int h = 0;

printf("Enter width 0-20: ");
scanf("%d", &w);

printf("\n\n");

switch (w)
{

  case 0:
  printf(" \n");
  break;
    
  case 1:
  printf(".\n\n");
  break;

  case 2:
  printf("[]\n\n");
  break;

  case 3:
  printf("%c\n\n", 254);
  break;

  case 4:
  printf("%c\n", 219);
  break;
  
  case 5:
  printf(" _\n");
  printf("!_!\n");
  break;

  case 6:
  w = 6;
  h = 1;
  break;

  case 7:
  w = 7;
  h = 1;
  break;

  case 8:
  w = 10;
  h = 2;
  break;

  case 9:
  w = 11;
  h = 2;
  break;
  
  case 10:
  w = 14;
  h = 3;
  break;

  case 11:
  w = 15;
  h = 3;
  break;

  case 12:
  w = 18;
  h = 4;
  break;

  case 13:
  w = 19;
  h = 4;  
  break;

  case 14:
  w = 22;
  h = 5;
  break;

  case 15:
  w = 23;
  h = 5;
  break;

  case 16:
  w = 26;
  h = 6;
  break;

  case 17:
  w = 27;
  h = 6;
  break;

  case 18:
  w = 30;
  h = 7;
  break;

  case 19:
  w = 31;
  h = 7;
  break;

  case 20:
  w = 34;
  h = 8;
  break;
   
  default:
  break;        

}

if (w > 5)
  square(w, h);

return 0;
}

/*****************************************/

void square(int width, int height)
{

int length;

if (((width+1) % 2) == 0)
  {             // adjust visual height 
                // for alternate squares

  length = width/2;

  top(length);
  middle(height, length);
  bottom1(length);

  }

else

  {

  length = width/2-1;

  top(length);
  middle(height, length);
  bottom2(length);
    
  }
    
}

/*****************************************/

void space(void)
{
    
putchar(' ');   
    
}

/*****************************************/

void lineFeed(int width)
{

   int i;
   putchar('|');
   for (i=0; i<width; i++)
     space();
   printf("|\n");

}

/*****************************************/

void top(int length)
{

  int i;   

  printf(".");

  for (i=0; i<length; i++)
    putchar('_');

  printf(".\n");  
    
}

/*****************************************/

void middle(int height, int length)

{

int i;

  for (i=0; i<height; i++)
    lineFeed(length);

}
    
/*****************************************/   

void bottom1(int length)
{
    
int i;

  printf("!");

  for (i=0; i<length; i++)
    putchar('_');

  printf("!\n");   
    
}

/*****************************************/

void bottom2(int length)
{
    
int i;

  printf("'");

  for (i=0; i<length; i++)
    putchar('-');

  printf("'\n");  
       
}

/*****************************************/