#include <stdio.h>

// prints an ascii triangle from width w
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
  break;
    
  case 1:
  printf(".\n\n");
  break;

  case 2:
  printf("^\n\n");
  break;

  case 3:
  printf("/\\\n\n");
  break;

  case 4:
  printf(" ,\n");
  printf("/_\\\n");
  break;
  
  case 5:
  printf(" /\\\n");
  printf("/__\\\n");
  break;

  case 6:
  printf("  ,\n");
  printf(" / \\\n");
  printf("/___\\\n"); 
  break;

  case 7:
  printf("  /\\\n");
  printf(" /  \\\n");
  printf("/____\\\n"); 
  break;

  case 8:
  printf("   ,\n");
  printf("  / \\\n");
  printf(" /   \\\n");
  printf("/_____\\\n"); 
  break;

  case 9:
  printf("   /\\\n");
  printf("  /  \\\n");
  printf(" /    \\\n");
  printf("/______\\\n"); 
  break;

  case 10:
  printf("    ,\n");
  printf("   / \\\n");
  printf("  /   \\\n");
  printf(" /     \\\n");
  printf("/_______\\\n"); 
  break;

  case 11:
  printf("    /\\\n");
  printf("   /  \\\n");
  printf("  /    \\\n");
  printf(" /      \\\n");
  printf("/________\\\n"); 
  break;

case 12:
  printf("     ,\n");
  printf("    / \\\n");
  printf("   /   \\\n");
  printf("  /     \\\n");
  printf(" /       \\\n");
  printf("/_________\\\n"); 
  break;

  case 13:
  printf("     /\\\n");
  printf("    /  \\\n");
  printf("   /    \\\n");
  printf("  /      \\\n");
  printf(" /        \\\n");
  printf("/__________\\\n"); 
  break;

  case 14:
  printf("      ,\n");
  printf("     / \\\n");
  printf("    /   \\\n");
  printf("   /     \\\n");
  printf("  /       \\\n");
  printf(" /         \\\n");
  printf("/___________\\\n"); 
  break;

case 15:
  printf("      /\\\n");
  printf("     /  \\\n");
  printf("    /    \\\n");
  printf("   /      \\\n");
  printf("  /        \\\n");
  printf(" /          \\\n");
  printf("/____________\\\n"); 
  break;

case 16:
  printf("       ,\n");
  printf("      / \\\n");
  printf("     /   \\\n");
  printf("    /     \\\n");
  printf("   /       \\\n");
  printf("  /         \\\n");
  printf(" /           \\\n");
  printf("/_____________\\\n"); 
  break;

case 17:
  printf("       /\\\n");
  printf("      /  \\\n");
  printf("     /    \\\n");
  printf("    /      \\\n");
  printf("   /        \\\n");
  printf("  /          \\\n");
  printf(" /            \\\n");
  printf("/______________\\\n"); 
  break;
  
case 18:
  printf("        ,\n");
  printf("       / \\\n");
  printf("      /   \\\n");
  printf("     /     \\\n");
  printf("    /       \\\n");
  printf("   /         \\\n");
  printf("  /           \\\n");
  printf(" /             \\\n");
  printf("/_______________\\\n"); 
  break;
  
case 19:
  printf("        /\\\n");
  printf("       /  \\\n");
  printf("      /    \\\n");
  printf("     /      \\\n");
  printf("    /        \\\n");
  printf("   /          \\\n");
  printf("  /            \\\n");
  printf(" /              \\\n");
  printf("/________________\\\n"); 
  break;

case 20:
  printf("         ,\n");
  printf("        / \\\n");
  printf("       /   \\\n");
  printf("      /     \\\n");
  printf("     /       \\\n");
  printf("    /         \\\n");
  printf("   /           \\\n");
  printf("  /             \\\n");
  printf(" /               \\\n");
  printf("/_________________\\\n"); 
  break;
   
  default:
  break;    
     
}

return 0;
}