/* FUN_0080e8e2 - 0x0080e8e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0080e8e2(int param_1)

{
  int iVar1;
  
  if (-1 < *(int *)(param_1 + 0xa0)) {
    iVar1 = FUN_004b3d90();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
      FUN_008161f1(0);
    }
    if (-1 < *(int *)(param_1 + 0xa0)) goto LAB_0080e93c;
  }
  iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x84) + 4) + 0x20))();
  if (iVar1 != 0) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x84) + 4) + 0x1c))(0);
  }
LAB_0080e93c:
  FUN_008162ff();
  return;
}


