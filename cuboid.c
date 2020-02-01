#include <stdio.h>

// derived from cube3.c
// generates sequential ascii cuboids
// starting from width w
// programmed in C by antlerSphere

void cuboid(int width, int height, int length);
void top(int width, int height, int margin);
void middle(int width, int height, int margin);
void lineFeed(int width, int height, int margin, int lines);
void bottom1(int width);
void bottom2(int width);
void space(void);

int main() {

int w = 0; // underscores, spaces, dashes
int h = 0; // pipebars and exclamations
int l = 0; // forward slashes, margin

// dimensions proportionate for
// a scalable ascii cuboid

printf("Enter width 0-20: ");
scanf("%2d", &w);

printf("\n\n");

switch (w)
{

  case 0:
  printf(" \n");
   
  case 1:
  printf(".\n\n");

  case 2:
  printf("#\n\n");
 
  case 3:
  printf("[]\n\n");

  case 4:
  printf(",_,\n");
  printf(";_;\n\n");
 
  case 5:
  printf(",!_,!\n");
  printf("!__!\'\n");

  case 6:
  w = 3;    // +3
  h = 1;    // +1
  l = 1;    // +1
  cuboid(w, h, l);

  case 7:
  w = 5;    // +2
  h = 1;
  l = 1;
  cuboid(w, h, l);

  case 8:
  w = 7;    // +2
  h = 2;    // +1
  l = 1;
  cuboid(w, h, l);

  case 9:
  w = 9;    // +2
  h = 2;
  l = 2;    // +1
  cuboid(w, h, l);
 
  case 10:
  w = 11;   // +2
  h = 3;    // +1
  l = 2;
  cuboid(w, h, l);

  case 11:
  w = 13;   // +2
  h = 3;
  l = 2;
  cuboid(w, h, l);

  case 12:
  w = 15;   // +2
  h = 4;    // +1
  l = 3;    // +1
  cuboid(w, h, l);

  case 13:
  w = 17;   // +2
  h = 4;
  l = 3; 
  cuboid(w, h, l);

  case 14:
  w = 19;   // +2
  h = 5;    // +1
  l = 3;
  cuboid(w, h, l);

  case 15:
  w = 21;   // +2
  h = 5;
  l = 3;
  cuboid(w, h, l);

case 16:
  w = 23;   // +2
  h = 6;    // +1
  l = 4;    // +1
cuboid(w, h, l);

case 17:
  w = 25;   // +2
  h = 6;
  l = 4;
  cuboid(w, h, l);

case 18:
  w = 27;   // +2
  h = 7;    // +1
  l = 4;
  cuboid(w, h, l);

case 19:
  w = 29;   // +2
  h = 7;
  l = 4;
  cuboid(w, h, l);

case 20:
  w = 31;   // +2
  h = 8;    // +1
  l = 5;    // +1
  cuboid(w, h, l);
  break;
  
default:
  printf("Error: %d entered, width must be 0-20\n", w);
  break;
    
}

return 0;
}

/*****************************************/

void cuboid(int width, int height, int margin)
{

// adjust visual height
// for alternate cuboids

  if (((width+1) % 4) == 0)
  {           

  top(width, height, margin);
  middle(width, height, margin);
  bottom1(width);

  } else {

  top(width, height, margin);
  middle(width, height, margin);
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

void middle(int width, int height, int margin)

{

int i;    // number of lineFeeds

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

  if (((width == 9) || (width == 13)) && (lines <= height-1))
  { offset = 1; }

  if (((width == 11) || (width == 17) || (width == 21)) && (lines == height-1))
  { offset = 2; }
 
  if (((width == 15) || (width == 19) || (width == 25) || (width == 29)) && (lines == height-2))
  { offset = 2; }
 
  if (((width == 15) || (width == 19) || (width == 25) || (width == 29)) && (lines == height-1))
  { offset = 3; } 
 
  if (((width == 23) || (width == 27)) && (lines == height-3))
  { offset = 2; }
 
  if (((width == 23) || (width == 27)) && (lines == height-2))
  { offset = 3; }
 
  if (((width == 23) || (width == 27)) && (lines == height-1))
  { offset = 4; }
 
  if ((width == 31) && (lines == height-4))
  { offset = 2; }
 
  if ((width == 31) && (lines == height-3))
  { offset = 3; }

  if ((width == 31) && (lines == height-2))
  { offset = 4; }
 
  if ((width == 31) && (lines == height-1))
  { offset = 5; }

  for (i = 0; i < margin-offset; i++)
    space();    // end of lineFeed margin

  if ((width == 5) && (lines == height-1))
  {  printf("|\n");
     return; }

  if (((width == 3) || (width == 7) || (width == 9) || (width == 13) || (width == 19) || (width % 3 == 2)) && (lines == height-1))
  {  printf("/\n");
     return; }
           
  if ((width == 7) && (lines < height-1))
  {  printf("|\n");
     return; }
   
  if (((width == 11) || (width == 17)) && (lines == height-2))
  {  printf("/\n");
     return; }
    
  if ((width == 13) && (lines < height))
  {  printf("|\n");
     return; }

  if ((width == 15) && (lines > height-4))
  {  printf("/\n");
     return; }

  if ((width == 19) && (lines < height-3))
  {  printf("|\n");
     return; }

  if ((width == 21) && (lines >= height-2))
  {  printf("/\n");
     return; }
    
  if ((width == 23) && (lines >= height-4))
  {  printf("/\n");
     return; }

  if ((width == 25) && (lines <= height-4))
  {  printf("|\n");
     return; }
    
  if (((width == 25) || (width == 29)) && (lines >= height-3))
  {  printf("/\n");
     return; }
    
  if ((width == 27) && (lines >= height-4))
  {  printf("/\n");
     return; }

  if ((width == 31) && (lines <= height-6))
  {  printf("|\n");
     return; }

  if ((width == 31) && (lines > height-5))
  {  printf("/\n");
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

  printf("\'");

  for (i=0; i<width; i++)
    putchar('-');

  if ((width + 1) % 4 == 0)
  { printf("\'\n");
  } else {
    printf("\'/\n"); }

}

/*****************************************/   

void bottom2(int width)
{
   
int i;

  printf("!");

  for (i=0; i<width; i++)
    putchar('_');

  printf("!/\n");  
   
}

/*****************************************/

void space(void)
{
   
putchar(' ');  
   
}

/*****************************************/