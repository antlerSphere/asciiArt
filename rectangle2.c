#include <stdio.h>

// prints sequential ascii rectangles
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
  printf(".\n");
//  break;

  case 2:
  printf("%c\n", 220);
//  break;
  
  case 3:
  printf(".__.\n");
  printf("|__|\n");
//  break;

  case 4:
  printf(".____.\n");
  printf("|    |\n");
  printf("'----'\n"); 
//  break;

  case 5:
  printf(",______.\n");
  printf("|      |\n");
  printf("!______!\n"); 
//  break;

  case 6:
  printf(".________.\n");
  printf("|        |\n");
  printf("|        |\n");
  printf("'--------'\n");
//  break;

  case 7:
  printf(".__________.\n");
  printf("|          |\n");
  printf("|          |\n");
  printf("!__________!\n");
//  break;
  
  case 8:
  printf(".____________.\n");
  printf("|            |\n");
  printf("|            |\n");
  printf("|            |\n");
  printf("'------------'\n");
//  break;

  case 9:
  printf(".______________.\n");
  printf("|              |\n");
  printf("|              |\n");
  printf("|              |\n");
  printf("!______________!\n");
//  break;

  case 10:
  printf(".________________.\n");
  printf("|                |\n");
  printf("|                |\n");
  printf("|                |\n");
  printf("|                |\n");
  printf("'----------------'\n");
//  break;

  case 11:
  printf(".__________________.\n");
  printf("|                  |\n");
  printf("|                  |\n");
  printf("|                  |\n");
  printf("|                  |\n");
  printf("!__________________!\n");
//  break;

  case 12:
  printf(".____________________.\n");
  printf("|                    |\n");
  printf("|                    |\n");
  printf("|                    |\n");
  printf("|                    |\n");
  printf("|                    |\n");
  printf("'--------------------'\n");
//  break;

  case 13:
  printf(".______________________.\n");
  printf("|                      |\n");
  printf("|                      |\n");
  printf("|                      |\n");
  printf("|                      |\n");
  printf("|                      |\n");
  printf("!______________________!\n");
//  break;

case 14:
  printf(".________________________.\n");
  printf("|                        |\n");
  printf("|                        |\n");
  printf("|                        |\n");
  printf("|                        |\n");
  printf("|                        |\n");
  printf("|                        |\n");
  printf("'------------------------'\n");
//  break;

case 15:
  printf(".__________________________.\n");
  printf("|                          |\n");
  printf("|                          |\n");
  printf("|                          |\n");
  printf("|                          |\n");
  printf("|                          |\n");
  printf("|                          |\n");
  printf("!__________________________!\n");
//  break;

case 16:
  printf(".____________________________.\n");
  printf("|                            |\n");
  printf("|                            |\n");
  printf("|                            |\n");
  printf("|                            |\n");
  printf("|                            |\n");
  printf("|                            |\n");
  printf("|                            |\n");
  printf("'----------------------------'\n");
//  break;

case 17:
  printf(".______________________________.\n");
  printf("|                              |\n");
  printf("|                              |\n");
  printf("|                              |\n");
  printf("|                              |\n");
  printf("|                              |\n");
  printf("|                              |\n");
  printf("|                              |\n");
  printf("!______________________________!\n");
//  break;

case 18:
  printf(".________________________________.\n");
  printf("|                                |\n");
  printf("|                                |\n");
  printf("|                                |\n");
  printf("|                                |\n");
  printf("|                                |\n");
  printf("|                                |\n");
  printf("|                                |\n");
  printf("|                                |\n");
  printf("'--------------------------------'\n");
//  break;

case 19:
  printf(".___________________________________.\n");
  printf("|                                   |\n");
  printf("|                                   |\n");
  printf("|                                   |\n");
  printf("|                                   |\n");
  printf("|                                   |\n");
  printf("|                                   |\n");
  printf("|                                   |\n");
  printf("|                                   |\n");
  printf("!___________________________________!\n");
//  break;

case 20:
  printf(".______________________________________.\n");
  printf("|                                      |\n");
  printf("|                                      |\n");
  printf("|                                      |\n");
  printf("|                                      |\n");
  printf("|                                      |\n");
  printf("|                                      |\n");
  printf("|                                      |\n");
  printf("|                                      |\n");
  printf("|                                      |\n");
  printf("'--------------------------------------'\n");
//  break;

   
  default:
  break;    
     
}

return 0;
}