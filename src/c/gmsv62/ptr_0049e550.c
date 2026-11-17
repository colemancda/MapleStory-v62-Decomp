/* ptr_0049e550 - 0x0049e550 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall ptr_0049e550(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x24);
  }
  if (iVar1 != 0) {
    FUN_004b3daf();
  }
  return iVar1;
}


