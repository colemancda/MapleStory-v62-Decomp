/* FUN_0041f550 - 0x0041f550 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall
FUN_0041f550(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  _memset(&local_20,0,0x18);
  local_1c = param_2;
  local_18 = -(uint)(param_4 != 0) & 4;
  local_20 = param_1;
  local_14 = (*DAT_0097b3d4)(0,1,0,0);
  local_10 = (*DAT_0097b3d4)(0,1,0,0);
  local_c = 0;
  if ((local_14 == 0) || (local_10 == 0)) {
    iVar1 = (*DAT_0097b49c)();
    if (local_14 != 0) {
      (*DAT_0097b388)(local_14);
    }
    if (local_10 == 0) goto LAB_0041f680;
  }
  else {
    local_8 = 0;
    iVar1 = FUN_0087a915(param_6,param_5,&LAB_0041f68e,&local_20,local_18 | 4,&local_8);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 4) = local_8;
      if (param_3 != 0) {
        (*DAT_0097b3b0)(iVar1,param_3);
      }
      (*DAT_0097b3b4)(*(undefined4 *)(param_1 + 8));
      (*DAT_0097b3e4)(local_14,0xffffffff);
      (*DAT_0097b388)(local_14);
      if (local_c == 0) {
        if ((local_18 & 4) != 0) {
          (*DAT_0097b3b8)(*(undefined4 *)(param_1 + 8));
        }
        (*DAT_0097b3d8)(local_10);
        return 1;
      }
      (*DAT_0097b388)(*(undefined4 *)(param_1 + 8));
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      iVar1 = local_c;
      goto LAB_0041f680;
    }
    iVar1 = (*DAT_0097b49c)();
    (*DAT_0097b388)(local_14);
  }
  (*DAT_0097b388)(local_10);
LAB_0041f680:
  (*DAT_0097b4a0)(iVar1);
  return 0;
}


