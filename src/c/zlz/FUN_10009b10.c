/* FUN_10009b10 - 0x10009b10 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void __cdecl FUN_10009b10(int *param_1)

{
  int iVar1;
  
  FUN_10009b80((int)param_1,(int)(param_1 + 0x23),param_1[0x2c5]);
  FUN_10009b80((int)param_1,(int)(param_1 + 0x260),param_1[0x2c8]);
  FUN_10009560(param_1,param_1 + 0x2ca);
  iVar1 = 0x12;
  do {
    if (*(short *)((int)param_1 + (uint)(byte)(&DAT_1000e4d8)[iVar1] * 4 + 0xa76) != 0) break;
    iVar1 = iVar1 + -1;
  } while (2 < iVar1);
  param_1[0x5a8] = param_1[0x5a8] + iVar1 * 3 + 0x11;
  return;
}


