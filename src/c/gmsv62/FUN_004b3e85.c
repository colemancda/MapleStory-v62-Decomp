/* FUN_004b3e85 - 0x004b3e85 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_004b3e85(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x20))();
  if (iVar1 != param_2) {
    param_1[10] = param_2;
    if (param_2 == 0) {
      iVar1 = FUN_004b3d90();
      if (iVar1 != 0) {
        FUN_00817f6e(0);
      }
    }
    FUN_004b3daf();
  }
  return;
}


