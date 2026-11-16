/* FUN_5040d6f7 - 0x5040d6f7 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void __cdecl
FUN_5040d6f7(uint *param_1,int *param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*param_1 & 4) == 0) {
    if ((*param_1 & 1) != 0) {
      param_3 = -param_3;
    }
    *param_2 = param_1[1] + param_3;
    if ((*param_1 & 2) != 0) {
      param_4 = -param_4;
    }
    param_2[1] = param_1[2] + param_4;
  }
  else {
    lVar1 = __allmul(param_1[6],param_1[7],param_4,(int)param_4 >> 0x1f);
    uVar2 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),param_1[0xe],param_1[0xf]);
    lVar1 = __allmul(param_1[4],param_1[5],param_3,(int)param_3 >> 0x1f);
    uVar3 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),param_1[0xc],param_1[0xd]);
    *param_2 = (int)uVar2 + (int)uVar3 + param_1[1];
    lVar1 = __allmul(param_1[10],param_1[0xb],param_4,(int)param_4 >> 0x1f);
    uVar2 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),param_1[0xe],param_1[0xf]);
    lVar1 = __allmul(param_1[8],param_1[9],param_3,(int)param_3 >> 0x1f);
    uVar3 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),param_1[0xc],param_1[0xd]);
    param_2[1] = (int)uVar2 + (int)uVar3 + param_1[2];
  }
  if (param_5 != 0) {
    *param_2 = param_6 * 2 - *param_2;
  }
  return;
}


