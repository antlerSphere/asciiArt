#include <stdio.h>

// prints sequential ascii squares
// from width w with switch breaks off
// programmed in C by antlerSphere 

int main() {

int w;

printf("Enter width 0-20: ");
scanf("%d", &w);

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
  printf("[]\n\n");
//  break;

  case 3:
  printf("%c\n\n", 254);
//  break;

  case 4:
  printf("%c\n", 219);
//  break;
  
  case 5:
  printf(" _\n");
  printf("!_!\n");
//  break;

  case 6:
  printf(".__.\n");
  printf("|  |\n");
  printf("'--'\n"); 
//  break;

  case 7:
  printf(",___.\n");
  printf("|   |\n");
  printf("!___!\n"); 
//  break;

  case 8:
  printf(".____.\n");
  printf("|    |\n");
  printf("|    |\n");
  printf("'----'\n");
//  break;

  case 9:
  printf("._____.\n");
  printf("|     |\n");
  printf("|     |\n");
  printf("!_____!\n");
//  break;
  
  case 10:
  printf(".______.\n");
  printf("|      |\n");
  printf("|      |\n");
  printf("|      |\n");
  printf("'------'\n");
//  break;

  case 11:
  printf("._______.\n");
  printf("|       |\n");
  printf("|       |\n");
  printf("|       |\n");
  printf("!_______!\n");
//  break;

  case 12:
  printf(".________.\n");
  printf("|        |\n");
  printf("|        |\n");
  printf("|        |\n");
  printf("|        |\n");
  printf("'--------'\n");
//  break;

  case 13:
  printf("._________.\n");
  printf("|         |\n");
  printf("|         |\n");
  printf("|         |\n");
  printf("|         |\n");
  printf("!_________!\n");
//  break;

  case 14:
  printf(".__________.\n");
  printf("|          |\n");
  printf("|          |\n");
  printf("|          |\n");
  printf("|          |\n");
  printf("|          |\n");
  printf("'----------'\n");
//  break;

  case 15:
  printf(".___________.\n");
  printf("|           |\n");
  printf("|           |\n");
  printf("|           |\n");
  printf("|           |\n");
  printf("|           |\n");
  printf("!___________!\n");
//  break;

case 16:
  printf(".____________.\n");
  printf("|            |\n");
  printf("|            |\n");
  printf("|            |\n");
  printf("|            |\n");
  printf("|            |\n");
  printf("|            |\n");
  printf("'------------'\n");
//  break;

case 17:
  printf("._____________.\n");
  printf("|             |\n");
  printf("|             |\n");
  printf("|             |\n");
  printf("|             |\n");
  printf("|             |\n");
  printf("|             |\n");
  printf("!_____________!\n");
//  break;

case 18:
  printf(".______________.\n");
  printf("|              |\n");
  printf("|              |\n");
  printf("|              |\n");
  printf("|              |\n");
  printf("|              |\n");
  printf("|              |\n");
  printf("|              |\n");
  printf("'--------------'\n");
//  break;

case 19:
  printf("._______________.\n");
  printf("|               |\n");
  printf("|               |\n");
  printf("|               |\n");
  printf("|               |\n");
  printf("|               |\n");
  printf("|               |\n");
  printf("|               |\n");
  printf("!_______________!\n");
//  break;

case 20:
  printf(".________________.\n");
  printf("|                |\n");
  printf("|                |\n");
  printf("|                |\n");
  printf("|                |\n");
  printf("|                |\n");
  printf("|                |\n");
  printf("|                |\n");
  printf("|                |\n");
  printf("'----------------'\n");
//  break;
   
  default:
  break;    
     
}

return 0;
}