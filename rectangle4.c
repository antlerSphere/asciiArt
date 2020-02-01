#include <stdio.h>

// generates sequential ascii rectangles
// from width w with switch breaks off
// programmed in C by antlerSphere 

void space(void);
void lineFeed(int width);
void rectangle(int width, int height);
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
//  break;
    
  case 1:
  printf(".\n");
//  break;

  case 2:
  printf("%c\n", 220);
//  break;
  
  case 3:
  w = 5;
  h = 0;
  rectangle(w, h);
//  break;

  case 4:
  w = 10;
  h = 1;
  rectangle(w, h); 
//  break;

  case 5:
  w = 13;
  h = 1;
  rectangle(w, h);
//  break;

  case 6:
  w = 18;
  h = 2;
  rectangle(w, h);
//  break;

  case 7:
  w = 21;
  h = 2;
  rectangle(w, h);
//  break;

  case 8:
  w = 26;
  h = 3;
  rectangle(w, h);
//  break;

  case 9:
  w = 29;
  h = 3;
  rectangle(w, h);
//  break;
  
  case 10:
  w = 34;
  h = 4;
  rectangle(w, h);
//  break;

  case 11:
  w = 37;
  h = 4;
  rectangle(w, h);
//  break;

  case 12:
  w = 42;
  h = 5;
  rectangle(w, h);
//  break;

  case 13:
  w = 45;
  h = 5;  
  rectangle(w, h);
//  break;

  case 14:
  w = 50;
  h = 6;
  rectangle(w, h);
//  break;

  case 15:
  w = 53;
  h = 6;
  rectangle(w, h);
//  break;

case 16:
w = 58;
h = 7;
rectangle(w, h);
//  break;

case 17:
  w = 61;
  h = 7;
  rectangle(w, h);
//  break;

case 18:
w = 66;
h = 8;
rectangle(w, h);
//  break;

case 19:
  w = 69;
  h = 8;
  rectangle(w, h);
//  break;

case 20:
  w = 74;
  h = 9;
  rectangle(w, h);
//  break;
   
  default:
  break;    
     
}

return 0;
}

/*****************************************/

void rectangle(int width, int height)
{

int length;

if (((width+1) % 2) == 0)

  {             // adjust visual height 
                // for alternate rectangles

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