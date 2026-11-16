/* FUN_50c04b87 - 0x50c04b87 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int * __thiscall FUN_50c04b87(void *this,int *param_1)

{
  if (*param_1 != 0) {
    InterlockedIncrement((LONG *)(*param_1 + 8));
  }
  if (*(int **)this != (int *)0x0) {
    FUN_50c02a85(*(int **)this);
    *(undefined4 *)this = 0;
  }
  *(int *)this = *param_1;
  return this;
}


