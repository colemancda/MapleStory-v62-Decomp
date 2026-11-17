/* FUN_004b0b3d - 0x004b0b3d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b0b3d(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x38) = param_2;
  iVar1 = param_2 + -1;
  if (*(int *)(param_1 + 0x34) < param_2 + -1) {
    iVar1 = *(int *)(param_1 + 0x34);
  }
  *(int *)(param_1 + 0x34) = iVar1;
  if (*(int *)(param_1 + 0x44) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    FUN_00818111(-(uint)(param_1 != 0) & param_1 + 4U);
  }
  FUN_004b3daf();
  return;
}


