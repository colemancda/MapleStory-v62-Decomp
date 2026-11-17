/* FUN_00474d57 - 0x00474d57 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_00474d57(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  int local_8;
  
  local_8 = 0;
  iVar1 = 1;
  if (*(int *)(param_1 + 0x18) == 0) goto LAB_00474db9;
  iVar1 = (*DAT_0097b434)(*(int *)(param_1 + 0x18));
  if (iVar1 != 0) {
    local_c = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar2 = (*DAT_0097b460)(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),&local_c,0)
    ;
    if (iVar2 != -1) goto LAB_00474db9;
    iVar2 = (*DAT_0097b49c)();
    if (iVar2 == 0) goto LAB_00474db9;
    iVar1 = 0;
  }
  local_8 = (*DAT_0097b49c)();
LAB_00474db9:
  if ((param_2 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar2 = (*DAT_0097b388)(*(int *)(param_1 + 0x14));
    if ((iVar2 == 0) || (iVar1 == 0)) {
      iVar1 = 0;
      if (local_8 == 0) {
        local_8 = (*DAT_0097b49c)();
      }
    }
    else {
      iVar1 = 1;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  (*DAT_0097b4a0)(local_8);
  return iVar1;
}


