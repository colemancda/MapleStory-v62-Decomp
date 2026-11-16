/* FUN_50006469 - 0x50006469 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int * __thiscall FUN_50006469(void *this,int *param_1)

{
  if (*param_1 != 0) {
    InterlockedIncrement((LONG *)(*param_1 + 8));
  }
  if (*(int **)this != (int *)0x0) {
    FUN_500028a0(*(int **)this);
    *(undefined4 *)this = 0;
  }
  *(int *)this = *param_1;
  return this;
}


