/* FUN_007052e6 - 0x007052e6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_007052e6(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (((*(int *)(param_1 + 0x57c) == 0) || (*(int *)(param_1 + 0x578) == 0)) ||
     (*(int *)(*(int *)(param_1 + 0x578) + -4) == 0)) {
    iVar4 = -10;
  }
  else {
    iVar4 = 0;
    for (; (iVar1 = *(int *)(param_1 + 0x578), iVar1 != 0 && (uVar5 < *(uint *)(iVar1 + -4)));
        uVar5 = uVar5 + 1) {
      iVar4 = iVar4 + 0x12;
      iVar2 = FUN_006fcb31(CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(iVar1 + uVar5 * 4))
                          );
      iVar1 = *(int *)(iVar2 + 0x50);
      uVar3 = 0;
      if ((iVar1 != 0) && (*(int *)(iVar1 + -4) != 0)) {
        for (; (iVar1 != 0 && (uVar3 < *(uint *)(iVar1 + -4))); uVar3 = uVar3 + 1) {
          iVar4 = iVar4 + 0x12;
        }
      }
      iVar1 = *(int *)(iVar2 + 0x54);
      uVar3 = 0;
      if ((iVar1 != 0) && (*(int *)(iVar1 + -4) != 0)) {
        for (; (iVar1 != 0 && (uVar3 < *(uint *)(iVar1 + -4))); uVar3 = uVar3 + 1) {
          iVar4 = iVar4 + 0x12;
        }
      }
      if (*(int *)(iVar2 + 0x2c) != 0) {
        iVar4 = iVar4 + 0x12;
      }
      iVar4 = iVar4 + 0x12;
    }
    iVar4 = iVar4 + -0x12;
  }
  return iVar4;
}


