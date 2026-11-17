/* FUN_006e30f3 - 0x006e30f3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006e30f3(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_2) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x44) + -4);
    }
    if (param_2 < iVar1) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x44) + 4 + param_2 * 8);
      if (*(int *)(iVar1 + 0xc) != param_3) {
        *(int *)(iVar1 + 0xc) = param_3;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x44) + 4 + param_2 * 8) + 0x10) = 1;
        if (param_2 == *(int *)(param_1 + 0x38)) {
          *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
        }
        FUN_004b3daf();
      }
    }
  }
  return;
}


