/* FUN_51005176 - 0x51005176 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


int * __thiscall FUN_51005176(void *this,int *param_1)

{
  if (*param_1 != 0) {
    InterlockedIncrement((LONG *)(*param_1 + 8));
  }
  if (*(int **)this != (int *)0x0) {
    FUN_510052d4(*(int **)this);
    *(undefined4 *)this = 0;
  }
  *(int *)this = *param_1;
  return this;
}


