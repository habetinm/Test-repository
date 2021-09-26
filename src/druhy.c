#include "druhy.h"
#include "treti.h"

int func_druhy(void)
{
    int var = DEF_DRUHY + func_treti();
    return var*3 + 12;
}
