/* FUN_50803d5b - 0x50803d5b in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int * __thiscall FUN_50803d5b(void *this,int *param_1)

{
  if (*param_1 != 0) {
    InterlockedIncrement((LONG *)(*param_1 + 8));
  }
  if (*(int **)this != (int *)0x0) {
    FUN_508040b6(*(int **)this);
    *(undefined4 *)this = 0;
  }
  *(int *)this = *param_1;
  return this;
}


