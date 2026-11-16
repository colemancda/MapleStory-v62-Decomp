/* FUN_50402a44 - 0x50402a44 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int * FUN_50402a44(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((DAT_50439094 & 1) == 0) {
    DAT_50439094 = DAT_50439094 | 1;
    FUN_5040548e();
    FUN_5042a482((_onexit_t)&LAB_50402b6d);
  }
  iVar1 = DAT_50439098;
  bVar2 = DAT_50439098 != 0;
  *param_1 = DAT_50439098;
  if (bVar2) {
    InterlockedIncrement((LONG *)(iVar1 + 8));
  }
  return param_1;
}


