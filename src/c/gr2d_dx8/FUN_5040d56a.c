/* FUN_5040d56a - 0x5040d56a in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl
FUN_5040d56a(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,int param_8,int param_9,uint param_10)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  longlong lVar8;
  
  param_1[1] = param_6;
  param_1[2] = param_7;
  if (param_10 == 2) {
    param_10 = 0;
    param_5 = -param_5;
    param_4 = -param_4;
  }
  iVar5 = 1;
  if ((((param_10 & 1) == 0) &&
      ((iVar4 = iVar5, param_4 == param_2 || (iVar4 = (param_4 != -param_2) - 1, iVar4 != 0)))) &&
     ((param_5 == param_3 || (iVar5 = (param_5 != -param_3) - 1, iVar5 != 0)))) {
    *param_1 = (uint)(iVar5 == -1) << 1 | (uint)(iVar4 == -1);
  }
  else {
    uVar1 = param_4 * param_4 + param_5 * param_5;
    *param_1 = 4;
    if (((uVar1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
      puVar6 = &DAT_50435588;
      puVar7 = param_1 + 4;
      for (iVar5 = 0xc; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    else {
      uVar2 = param_4 * param_8 + param_5 * param_9;
      uVar3 = param_4 * param_9 - param_5 * param_8;
      lVar8 = __allmul(param_4,(int)param_4 >> 0x1f,uVar2,(int)uVar2 >> 0x1f);
      *(longlong *)(param_1 + 4) = lVar8;
      lVar8 = __allmul(param_5,(int)param_5 >> 0x1f,uVar3,(int)uVar3 >> 0x1f);
      param_1[6] = -(int)lVar8;
      param_1[7] = -((int)((ulonglong)lVar8 >> 0x20) + (uint)((int)lVar8 != 0));
      lVar8 = __allmul(param_4,(int)param_4 >> 0x1f,uVar3,(int)uVar3 >> 0x1f);
      *(longlong *)(param_1 + 8) = lVar8;
      lVar8 = __allmul(param_5,(int)param_5 >> 0x1f,uVar2,(int)uVar2 >> 0x1f);
      *(longlong *)(param_1 + 10) = lVar8;
      lVar8 = __allmul(param_2,(int)param_2 >> 0x1f,uVar1,(int)uVar1 >> 0x1f);
      *(longlong *)(param_1 + 0xc) = lVar8;
      lVar8 = __allmul(param_3,(int)param_3 >> 0x1f,uVar1,(int)uVar1 >> 0x1f);
      *(longlong *)(param_1 + 0xe) = lVar8;
    }
  }
  return;
}


