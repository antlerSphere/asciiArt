#include <stdio.h>

// derived from rectangle4.c
// generates sequential ascii cubes
// starting from width w
// programmed in C by antlerSphere

void cube(int width, int height, int length);
void top(int width, int height, int margin);
void middle(int height, int width, int margin);
void lineFeed(int width, int height, int margin, int lines);
void bottom1(int width);
void bottom2(int width);
void space(void);

int main() {

int w = 0; // underscores, spaces, dashes
int h = 0; // pipebars and exclamations
int l = 0; // forward slashes, margin

// a pixel-based cube would have w = h = l,
// these dimensions are for scalable ascii

printf("Enter width 0-20: ");
scanf("%2d", &w);

printf("\n\n");

switch (w)
{

  case 0:
  printf(" \n");
//  break;
   
  case 1:
  printf(".\n\n");
//  break;

  case 2:
  printf("#\n\n");
//  break;
 
  case 3:
  printf("[]\n\n");
//  break;

  case 4:
  printf(",_,\n");
  printf(";_;\n\n");
//  break;
 
  case 5:
  printf(",!,!\n");
  printf("!_!\'\n");
//  break;

  case 6:
  w = 2;
  h = 1;
  l = 1;
  cube(w, h, l);
//  break;

  case 7:
  w = 3;
  h = 1;
  l = 1;
  cube(w, h, l);
//  break;

  case 8:
  w = 4;
  h = 2;
  l = 1;
  cube(w, h, l);
//  break;

  case 9:
  w = 5;
  h = 2;
  l = 2;
  cube(w, h, l);
//  break;
 
  case 10:
  w = 6;
  h = 3;
  l = 2;
  cube(w, h, l);
//  break;

  case 11:
  w = 7;
  h = 3;
  l = 2;
  cube(w, h, l);
//  break;

  case 12:
  w = 8;
  h = 4;
  l = 3;
  cube(w, h, l);
//  break;

  case 13:
  w = 9;
  h = 4;
  l = 3; 
  cube(w, h, l);
//  break;

  case 14:
  w = 10;
  h = 5;
  l = 3;
  cube(w, h, l);
//  break;

  case 15:
  w = 11;
  h = 5;
  l = 3;
  cube(w, h, l);
//  break;

case 16:
w = 12;
h = 6;
l = 4;
cube(w, h, l);
//  break;

case 17:
  w = 13;
  h = 6;
  l = 4;
  cube(w, h, l);
//  break;

case 18:
w = 14;
h = 7;
l = 4;
cube(w, h, l);
//  break;

case 19:
  w = 15;
  h = 7;
  l = 4;
  cube(w, h, l);
//  break;

case 20:
  w = 16;
  h = 8;
  l = 5;
  cube(w, h, l);
  break;
  
default:
  printf("Error: %d entered, width must be 0-20\n", w);
  break;
    
}

return 0;
}

/*****************************************/

void cube(int width, int height, int margin)
{

// adjust visual height
// for alternate cubes

  if (((width+1) % 2) == 0)
  {           
  top(width, height, margin);
  middle(height, width, margin);
  bottom1(width);

  } else {

  top(width, height, margin);
  middle(height, width, margin);
  bottom2(width);   
  }
   
}

/*****************************************/

void top(int width, int height, int length)
{

  int i, j, k;   

  for (i = 0; i < length; i++)
    space();    // 1st line margin

  putchar('.');

  for (i=0; i<width; i++)
    putchar('_');

  printf(".\n"); 

  for (j = 1; j < length+1; j++)
  {

    for (i = 0; i < length-j; i++)
      space();    // 2nd line margin

     putchar('/');

     for (i=0; i<width; i++)
     {
       if ((j > height-1) || (j == length))
       { putchar('_');
       } else {
           space(); }
     }
    
     putchar('/');

    for (k = 0; k < j-1; k++)
       space();
    
     printf("|\n");

  }
   
}

/*****************************************/

void middle(int height, int width, int margin)

{

int i;    // number of midLines

  for (i=0; i<height; i++)
    lineFeed(width, height, margin, i);

}

/*****************************************/

void lineFeed(int width, int height, int margin, int lines)
{

   int i, offset = 0;
   putchar('|');
   for (i=0; i<width; i++)
     space();
   putchar('|');

  if ((lines < height-1) || (width % 2 == 1))
    { offset = 1;
  } else {
      offset = 2; }

  if (((width == 8) || (width == 10) || (width == 13) || (width == 15)) && (lines == height-2))
  { offset = 2; }

  if (((width == 8) || (width == 10) || (width == 13) || (width == 15)) && (lines == height-1))
  { offset = 3; }

  if (((width == 9) || (width == 11)) && (lines == height-1))
  { offset = 2; }

  if (((width == 12) || (width == 14)) && (lines == height-3))
  { offset = 2; }

  if (((width == 12) || (width == 14)) && (lines == height-2))
  { offset = 3; }
 
  if (((width == 12) || (width == 16)) && (lines == height-1))
  { offset = 5; }
 
  if ((width == 14) && (lines == height-1))
  { offset = 4; }

  if ((width == 16) && (lines == height-4))
  { offset = 2; }
 
  if ((width == 16) && (lines == height-3))
  { offset = 3; }
 
  if ((width == 16) && (lines == height-2))
  { offset = 4; }
 

  for (i = 0; i < margin-offset; i++)
    space();    // end of lineFeed margin

  if (((width == 4) || (width == 7)) && (lines < height-1))
  {  printf("|\n");
     return; }

  if (((width == 7) || (width == 9) || (width == 13) || (width % 3 == 2)) && (lines == height-1))
  {  printf("/\n");
     return; }

  if (((width == 8) || (width == 9)) && (lines == height-2))
  {  printf("/\n");
     return; }

  if ((width == 8) && (lines == height-3))
  {  printf("/\n");
    return; }

  if ((width == 9) && (lines == height-3))
  {  printf("|\n");
     return; }

  if (((width == 10) || (width == 13)) && (lines < height-3))
  {  printf("|\n");
     return; }

  if ((width == 11) && (lines > height-3))
  {  printf("/\n");
     return; }

  if ((width == 14) && (lines > height-5))
  {  printf("/\n");
     return; }
   
  if ((width == 15) && (lines > height-4))
  {  printf("/\n");
     return; }
   
  if ((width == 16) && (lines < height-5))
  {  printf("|\n");
     return; }

   
  if ((width % 3 == 1) && (lines < height-1))
  {  printf("/\n");
     return; }

  if ((width % 3 == 2) && (lines < height-1))
  {  printf("|\n");
     return; }
   
  if ((lines < height-margin) || (width % 2 == 1))
  { printf("|\n");
  } else {
      printf("/\n"); }

}
   
/*****************************************/   

void bottom1(int width)
{
   
int i;

  printf("!");

  for (i=0; i<width; i++)
    putchar('_');

  printf("!/\n");  
   
}

/*****************************************/

void bottom2(int width)
{
   
int i;

  printf("\'");

  for (i=0; i<width; i++)
    putchar('-');

  if (width % 2 != 0)
  { printf("\'/\n");
  } else {
    printf("\'\n"); }
      
}

/*****************************************/

void space(void)
{
   
putchar(' ');  
   
}

/*****************************************/