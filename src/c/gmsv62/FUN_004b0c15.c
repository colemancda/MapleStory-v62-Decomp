/* FUN_004b0c15 - 0x004b0c15 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b0c15(int param_1,int param_2)

{
  int iVar1;
  int unaff_ESI;
  
  if (param_2 < 1) {
    param_2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x38) + -1;
  if (iVar1 <= param_2) {
    param_2 = iVar1;
  }
  *(int *)(param_1 + 0x34) = param_2;
  (**(code **)(**(int **)(param_1 + 0x24) + 0x1c))(*(undefined4 *)(param_1 + 0x14),700,param_2);
  if (unaff_ESI != 0) {
    FUN_004b3daf();
  }
  return;
}


