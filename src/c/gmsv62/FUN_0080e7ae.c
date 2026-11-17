/* FUN_0080e7ae - 0x0080e7ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_0080e7ae(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_1c [20];
  undefined4 local_8;
  
  local_8 = param_3;
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0xa8);
  do {
    if (*(int *)(param_1 + 0x9c) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 0x9c) + 0x38);
    }
    iVar1 = (iVar3 - iVar1) * 0x12;
    (*DAT_0097b504)(local_1c,7,iVar1 + 0x56,0x9d,iVar1 + 0x65);
    iVar1 = (*DAT_0097b57c)(local_1c,param_2,local_8);
    if (iVar1 != 0) {
      if (*piVar2 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*piVar2 + -4);
      }
      if ((iVar1 != 0) && (*(int *)(param_1 + 0xa0) != iVar3)) {
        iVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x84) + 4) + 0x20))();
        if (iVar1 == 0) {
          (**(code **)(*(int *)(*(int *)(param_1 + 0x84) + 4) + 0x1c))(1);
        }
        FUN_00817f6e(-(uint)(*(int *)(param_1 + 0x84) != 0) & *(int *)(param_1 + 0x84) + 4U);
        *(int *)(param_1 + 0xa0) = iVar3;
        return 1;
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (9 < iVar3) {
      return 0;
    }
  } while( true );
}


