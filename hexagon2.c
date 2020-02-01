#include <stdio.h>

// prints sequential ascii hexagons of 
// length l with switch breaks off
// programmed in C by antlerSphere 

int main() {

int l;

printf("Enter length 0-20: ");
scanf("%d", &l);

printf("\n\n");

switch (l)
{

  case 0:
  printf(" \n");
//  break;
    
  case 1:
  printf(".\n");
//  break;

  case 2:
  printf("o\n");
// break;
  
  case 3:
  printf("O\n");
//  break;

  case 4:
  printf("{}\n");
//  break;

  case 5:
  printf(" __\n");
  printf("/  \\\n");
  printf("\\__/\n"); 
//  break;

  case 6:
  printf("  ___\n");
  printf(" /   \\\n");
  printf("{     }\n");
  printf(" \\___/\n"); 
//  break;

  case 7:
  printf("  _____\n");
  printf(" /     \\\n");
  printf("/       \\\n");
  printf("\\       /\n");
  printf(" \\_____/\n"); 
//  break;

  case 8:
  printf("   ______\n");
  printf("  /      \\\n");
  printf(" /        \\\n");
  printf("{          }\n");
  printf(" \\        /\n");
  printf("  \\______/\n"); 
//  break;

  case 9:
  printf("   _______\n");
  printf("  /       \\\n");
  printf(" /         \\\n");
  printf("/           \\\n");
  printf("\\           /\n");
  printf(" \\         /\n");
  printf("  \\_______/\n"); 
//  break;

  case 10:
  printf("    ________\n");
  printf("   /        \\\n");
  printf("  /          \\\n");
  printf(" /            \\\n");
  printf("{              }\n");
  printf(" \\            /\n");
  printf("  \\          /\n");
  printf("   \\________/\n"); 
//  break;

  case 11:
  printf("    _________\n");
  printf("   /         \\\n");
  printf("  /           \\\n");
  printf(" /             \\\n");
  printf("/               \\\n");
  printf("\\               /\n");
  printf(" \\             /\n");
  printf("  \\           /\n");
  printf("   \\_________/\n"); 
//  break;

  case 12:
  printf("     __________\n");
  printf("    /          \\\n");
  printf("   /            \\\n");
  printf("  /              \\\n");
  printf(" /                \\\n");
  printf("{                  }\n");
  printf(" \\                /\n");
  printf("  \\              /\n");
  printf("   \\            /\n");
  printf("    \\__________/\n"); 
//  break;

  case 13:
  printf("     ___________\n");
  printf("    /           \\\n");
  printf("   /             \\\n");
  printf("  /               \\\n");
  printf(" /                 \\\n");
  printf("/                   \\\n");
  printf("\\                   /\n");
  printf(" \\                 /\n");
  printf("  \\               /\n");
  printf("   \\             /\n");
  printf("    \\___________/\n"); 
// break;

  case 14:
  printf("      ____________\n");
  printf("     /            \\\n");
  printf("    /              \\\n");
  printf("   /                \\\n");
  printf("  /                  \\\n");
  printf(" /                    \\\n");
  printf("{                      }\n");
  printf(" \\                    /\n");
  printf("  \\                  /\n");
  printf("   \\                /\n");
  printf("    \\              /\n");
  printf("     \\____________/\n"); 
// break;

  case 15:
  printf("      _____________\n");
  printf("     /             \\\n");
  printf("    /               \\\n");
  printf("   /                 \\\n");
  printf("  /                   \\\n");
  printf(" /                     \\\n");
  printf("/                       \\\n");
  printf("\\                       /\n");
  printf(" \\                     /\n");
  printf("  \\                   /\n");
  printf("   \\                 /\n");
  printf("    \\               /\n");
  printf("     \\_____________/\n"); 
// break;

  case 16:
  printf("       ______________\n");
  printf("      /              \\\n");
  printf("     /                \\\n");
  printf("    /                  \\\n");
  printf("   /                    \\\n");
  printf("  /                      \\\n");
  printf(" /                        \\\n");
  printf("{                          }\n");
  printf(" \\                        /\n");
  printf("  \\                      /\n");
  printf("   \\                    /\n");
  printf("    \\                  /\n");
  printf("     \\                /\n");
  printf("      \\______________/\n"); 
// break;

  case 17:
  printf("       _______________\n");
  printf("      /               \\\n");
  printf("     /                 \\\n");
  printf("    /                   \\\n");
  printf("   /                     \\\n");
  printf("  /                       \\\n");
  printf(" /                         \\\n");
  printf("/                           \\\n");
  printf("\\                           /\n");
  printf(" \\                         /\n");
  printf("  \\                       /\n");
  printf("   \\                     /\n");
  printf("    \\                   /\n");
  printf("     \\                 /\n");
  printf("      \\_______________/\n"); 
// break;

  case 18:
  printf("        ________________\n");
  printf("       /                \\\n");
  printf("      /                  \\\n");
  printf("     /                    \\\n");
  printf("    /                      \\\n");
  printf("   /                        \\\n");
  printf("  /                          \\\n");
  printf(" /                            \\\n");
  printf("{                              }\n");
  printf(" \\                            /\n");
  printf("  \\                          /\n");
  printf("   \\                        /\n");
  printf("    \\                      /\n");
  printf("     \\                    /\n");
  printf("      \\                  /\n");
  printf("       \\________________/\n"); 
// break;

  case 19:
  printf("        _________________\n");
  printf("       /                 \\\n");
  printf("      /                   \\\n");
  printf("     /                     \\\n");
  printf("    /                       \\\n");
  printf("   /                         \\\n");
  printf("  /                           \\\n");
  printf(" /                             \\\n");
  printf("/                               \\\n");
  printf("\\                               /\n");
  printf(" \\                             /\n");
  printf("  \\                           /\n");
  printf("   \\                         /\n");
  printf("    \\                       /\n");
  printf("     \\                     /\n");
  printf("      \\                   /\n");
  printf("       \\_________________/\n"); 
// break;

  case 20:
  printf("         __________________\n");
  printf("        /                  \\\n");
  printf("       /                    \\\n");
  printf("      /                      \\\n");
  printf("     /                        \\\n");
  printf("    /                          \\\n");
  printf("   /                            \\\n");
  printf("  /                              \\\n");
  printf(" /                                \\\n");
  printf("{                                  }\n");
  printf(" \\                                /\n");
  printf("  \\                              /\n");
  printf("   \\                            /\n");
  printf("    \\                          /\n");
  printf("     \\                        /\n");
  printf("      \\                      /\n");
  printf("       \\                    /\n");
  printf("        \\__________________/\n"); 
// break;
    
  default:
  break;    
     
}

return 0;
}