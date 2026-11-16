/* FUN_51805720 - 0x51805720 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int * __thiscall FUN_51805720(void *this,int *param_1)

{
  if (*param_1 != 0) {
    InterlockedIncrement((LONG *)(*param_1 + 8));
  }
  if (*(int **)this != (int *)0x0) {
    FUN_51802c43(*(int **)this);
    *(undefined4 *)this = 0;
  }
  *(int *)this = *param_1;
  return this;
}


