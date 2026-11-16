/* FUN_50419ede - 0x50419ede in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_50419ede(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  undefined1 *extraout_EDX;
  undefined1 *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)((int)this + 0x1048) != 0) {
    param_3 = FUN_5041841d(this,param_3);
  }
  iVar1 = *(int *)((int)this + 0x2c);
  FUN_50418baf(iVar1);
  uVar3 = 0;
  puVar4 = extraout_EDX;
  if (*(int *)((int)this + 0x1058) != 0) {
    do {
      pfVar2 = (float *)(param_3 + iVar5);
      *puVar4 = (char)(int)ROUND(*(float *)(iVar1 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 +
                                           (uVar3 & 3) * 4) +
                                 (*pfVar2 * _DAT_5042e138 +
                                 pfVar2[1] * _DAT_5042e13c + pfVar2[2] * _DAT_5042e140) *
                                 _DAT_5042e1cc);
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar3 < *(uint *)((int)this + 0x1058));
  }
  return;
}


