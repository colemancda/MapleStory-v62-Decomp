/* FUN_50c0be56 - 0x50c0be56 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int FUN_50c0be56(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    iVar1 = FUN_50c0bfd3();
    if (-1 < iVar1) {
      (**(code **)(iRam00000000 + 4))(0);
      FUN_50c04098(0x10);
      FUN_50c0b77a((void *)0x10,param_1 + 0x10);
      uRam00000024 = *(undefined4 *)(param_1 + 0x24);
      *param_2 = 0;
      iVar1 = 0;
    }
  }
  return iVar1;
}


