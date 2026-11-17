/* FUN_0053a851 - 0x0053a851 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_0053a851(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int local_c;
  int local_8;
  
  iVar4 = *(int *)(param_1 + 0x26c);
  if (iVar4 / 100000 == 0x11) {
    local_c = param_1;
    local_8 = param_1;
    iVar1 = FUN_0054e7b3(iVar4);
    if (iVar1 == 0) {
      iVar4 = *(int *)(param_1 + 0xa9);
    }
    else {
      iVar4 = 0;
      bVar3 = 0;
      piVar5 = &DAT_009641fc;
      do {
        uVar2 = 1 << (bVar3 & 0x1f);
        if ((uVar2 & *(uint *)(iVar1 + 0x1a4)) != 0) {
          iVar4 = 1;
          do {
            if ((uVar2 & 1 << ((byte)iVar4 & 0x1f)) != 0) {
              iVar4 = (&DAT_009641fc)[iVar4] * 10000 + 0xf4a10;
              goto LAB_0053a8b9;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x12);
          iVar4 = 0;
LAB_0053a8b9:
          if (*piVar5 == param_2) {
            iVar1 = FUN_004084c5(&local_c,iVar4);
            *param_3 = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x2c);
            if (local_8 == 0) {
              return iVar4;
            }
            FUN_00412f17(0);
            return iVar4;
          }
        }
        piVar5 = piVar5 + 1;
        bVar3 = bVar3 + 1;
      } while ((int)piVar5 < 0x96427c);
    }
  }
  return iVar4;
}


