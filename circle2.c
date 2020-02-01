#include <stdio.h>

// prints sequential ascii circles from 
// radius r with switch breaks off
// programmed in C by antlerSphere 

int main() {

int r;

printf("Enter radius 0-20: ");
scanf("%d", &r);

printf("\n\n");

switch (r)
{

  case 0:
  printf(" \n");
//  break;
    
  case 1:
  printf(".\n");
//  break;

  case 2:
  printf("%c\n", 248);
//  break;

  case 3:
  printf("%c\n", 167);
//  break;

  case 4:
  printf("o\n");
//  break;
  
  case 5:
  printf("O\n");
//  break;

  case 6:
  printf("()\n");
//  break;

  case 7:
  printf(" _\n");
  printf("( )\n");
  printf(" `\n"); 
//  break;

  case 8:
  printf(",--.\n");
  printf(":  :\n");
  printf("`--'\n");
//  break;

  case 9:
  printf(",---.\n");
  printf("|   |\n");
  printf("`---'\n");
//  break;
  
  case 10:
  printf(" ,--.\n");
  printf("(    )\n");
  printf("`.__.'\n");
//  break;

  case 11:
  printf(" ,---.\n");
  printf("|     |\n");
  printf("`.___.'\n");
//  break;

  case 12:
  printf(" ,----.\n");
  printf("|      |\n");
  printf("|      |\n");
  printf("`.____.'\n");
//  break;

  case 13:
  printf(" ,=====.\n");
  printf(":       :\n");
  printf("|       |\n");
  printf("!       !\n");
  printf("`._____.'\n");
//  break;

case 14:
  printf("   ____\n");
  printf(" /'    '\\\n");
  printf("|        |\n");
  printf("|        |\n");
  printf("!        !\n");
  printf(" \\.____./\n");
//  break;

case 15:
  printf("   ______ \n");
  printf(" /'      '\\\n");
  printf("/          \\\n");
  printf("|          |\n");
  printf("|          |\n");
  printf("\\          /\n");
  printf(" \\.______./\n");
//  break;

case 16:
  printf("    ______ \n");
  printf("  /'      '\\\n");
  printf(" /          \\\n");
  printf("|            |\n");
  printf("|            |\n");
  printf("|            |\n");
  printf(" \\          /\n");
  printf("  \\.______./\n");
//  break;

case 17:
  printf("    _______ \n");
  printf("  /'       '\\\n");
  printf(" /           \\\n");
  printf("|'           '|\n");
  printf("|             |\n");
  printf("|.           ,|\n");
  printf(" \\           /\n");
  printf("  \\._______./\n");
//  break;

case 18:
  printf("    ________\n");
  printf("  /'        '\\\n");
  printf(" /            \\\n");
  printf("|'            '|\n");
  printf("|              |\n");
  printf("|              |\n");
  printf("|              |\n");
  printf(" \\'          '/\n");
  printf("  \\.________./\n");
//  break;

case 19:
  printf("    _________\n");
  printf("  /'         '\\\n");
  printf(" /             \\\n");
  printf("/               \\\n");
  printf("|'             '|\n");
  printf("|               |\n");
  printf("|               |\n");
  printf("|               |\n");
  printf("\\'             '/\n");
  printf(" \\             /\n");
  printf("  \\._________./\n");
//  break;

case 20:
  printf("    __________  \n");
  printf("  /'          '\\\n");
  printf(" /              \\\n");
  printf("/                \\\n");
  printf("|'              '|\n");
  printf("|                |\n");
  printf("|                |\n");
  printf("|                |\n");
  printf("\\'              '/\n");
  printf(" \\              /\n");
  printf("  \\.__________./\n");
//  break;
   
  default:
  break;    
     
}

    return 0;
}