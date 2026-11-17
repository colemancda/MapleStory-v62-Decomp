/* FUN_006851fe - 0x006851fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006851fe(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  *param_3 = 0xffffffff;
  *param_4 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    if ((0x16 < param_2[1]) && (param_2[1] < 0x37)) {
      iVar1 = *(int *)(param_1 + 0xc) * 0x20;
      iVar2 = *param_2 + -0x31d + iVar1;
      if ((-1 < iVar2) && (iVar2 < iVar1)) {
        iVar2 = FUN_00686af2(iVar2 / 0x20);
        iVar2 = *(int *)(iVar2 + 4);
        if (iVar2 != 0) {
          InterlockedIncrement((LONG *)(iVar2 + 4));
        }
        *param_3 = *(undefined4 *)(iVar2 + 0x1c);
        *param_4 = *(undefined4 *)(iVar2 + 0x20);
        if (iVar2 != 0) {
          FUN_006868f7(0);
        }
      }
    }
  }
  return;
}


