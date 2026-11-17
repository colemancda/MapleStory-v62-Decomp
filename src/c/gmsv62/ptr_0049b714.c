/* ptr_0049b714 - 0x0049b714 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall ptr_0049b714(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x30);
  *piVar1 = param_3 / 0x10;
  iVar2 = *(int *)(param_1 + 0x34) + -1;
  if (iVar2 < param_3 / 0x10) {
    *piVar1 = iVar2;
  }
  if (*piVar1 < 0) {
    *piVar1 = 0;
  }
  FUN_004b3daf();
  return 1;
}


