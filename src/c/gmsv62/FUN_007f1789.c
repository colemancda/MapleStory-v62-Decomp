/* FUN_007f1789 - 0x007f1789 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_007f1789(int param_1,uint param_2)

{
  int iVar1;
  
  if (((param_2 == 0) || (iVar1 = *(int *)(param_1 + 0xa8), iVar1 == 0)) ||
     (*(uint *)(iVar1 + -4) <= param_2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_2 * 0x1c + iVar1;
  }
  return iVar1;
}


