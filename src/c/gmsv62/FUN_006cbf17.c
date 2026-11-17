/* FUN_006cbf17 - 0x006cbf17 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_006cbf17(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_1c [20];
  int local_8;
  
  if ((((int)param_3 < 0xbf) || (0x117 < (int)param_3)) || (*(int *)(param_1 + 0xa8) < 0)) {
    iVar2 = 0;
    local_8 = (int)param_3;
    if ((-(uint)(*(int *)(param_1 + 0xe8) != 0) & 5) != 0xfffffffb) {
      param_3 = (int *)(param_1 + 0xb0);
      do {
        if (*(int *)(param_1 + 0xa4) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(*(int *)(param_1 + 0xa4) + 0x38);
        }
        iVar1 = (iVar2 - iVar1) * 0x12;
        (*DAT_0097b504)(local_1c,9,iVar1 + 0x54,0x9f,iVar1 + 99);
        iVar1 = (*DAT_0097b57c)(local_1c,param_2,local_8);
        if (((iVar1 != 0) && (*param_3 != 999999999)) && (*(int *)(param_1 + 0xa8) != iVar2)) {
          FUN_00817f6e(-(uint)(*(int *)(param_1 + 0x7c) != 0) & *(int *)(param_1 + 0x7c) + 4U);
          *(int *)(param_1 + 0xa8) = iVar2;
          goto LAB_006cc027;
        }
        param_3 = param_3 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)((-(uint)(*(int *)(param_1 + 0xe8) != 0) & 5) + 5));
    }
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
    FUN_00817f6e(-(uint)(*(int *)(param_1 + 0x9c) != 0) & *(int *)(param_1 + 0x9c) + 4U);
LAB_006cc027:
    uVar3 = 1;
  }
  return uVar3;
}


