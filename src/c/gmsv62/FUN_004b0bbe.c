/* FUN_004b0bbe - 0x004b0bbe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004b0bbe(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x38) < 2) {
    iVar1 = 0;
  }
  else {
    iVar1 = ((*(int *)(param_1 + 0x3c) + -0x1b) * param_2) / (*(int *)(param_1 + 0x38) + -1) + 0xd;
  }
  return iVar1;
}


