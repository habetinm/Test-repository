#include <stdio.h>
#include "prvni.h"
#include "druhy.h" 
#include "treti.h"
#include "prvni_lib.h"
#include "druha_lib.h"
#include "prvni_mod.h"

int main(int argc, char **argv)
{
  int result = 0;
  fun_lib_1();
  fun_lib_2();
  fun_mod_1();
  result = func_prvni() * func_druhy();
  printf("%s: %d, %d, %d, %d\n", "Ahoj 123456789 ***", func_prvni(), func_druhy(), func_treti(), result);
  
  if (argc == 1)
  {
    int arg;
    int res = sscanf(argv[0], "%d", (int*)(&arg));
    
    if (res == 1)
    {
      printf("%s\n", "Argumenty v poradku");
      return func_prvni() - arg;
    }
    else
    {
      printf("%s\n", "Nespravny typ, nebo pocet argumentu");
      return 255;
    }
  }
  else
  {
    printf("%s\n", "Normalni konec");
    return func_prvni();
  }
}
