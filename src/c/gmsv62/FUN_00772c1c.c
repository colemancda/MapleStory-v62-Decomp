/* FUN_00772c1c - 0x00772c1c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00772c1c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2 + -6;
  param_2 = 0;
  iVar4 = param_1 + 100;
  do {
    iVar5 = *(int *)(iVar4 + 0x18) * 0x14 + -0x14;
    iVar2 = FUN_00772cb9();
    if (iVar5 < iVar2) {
      iVar2 = iVar5 * 0x40;
      do {
        iVar3 = (*DAT_0097b57c)(iVar2 + 0x18 + *(int *)(iVar4 + 0x70),iVar1,
                                param_4 * 0x21 + -0x71 + param_3);
        if (iVar3 != 0) {
          return *(undefined4 *)(*(int *)(param_2 * 0x7c + 0xd4 + param_1) + iVar5 * 0x40);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + 0x40;
        iVar3 = FUN_00772cb9();
      } while (iVar5 < iVar3);
    }
    param_2 = param_2 + 1;
    iVar4 = iVar4 + 0x7c;
  } while (param_2 < 2);
  return 0;
}


