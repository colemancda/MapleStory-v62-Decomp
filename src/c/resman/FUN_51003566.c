/* FUN_51003566 - 0x51003566 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


undefined4 FUN_51003566(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((param_3 < -1) || (param_4 < -1)) {
LAB_510035dd:
    uVar2 = 0x80070057;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar3 = param_2 & 7;
    if (uVar3 != 0) {
      if ((uVar3 == 0) || ((2 < uVar3 && (uVar3 != 4)))) goto LAB_510035dd;
      uVar1 = uVar1 ^ (uVar1 ^ param_2) & 7;
    }
    uVar3 = param_2 & 0x30;
    if (uVar3 != 0) {
      if ((uVar3 != 0x10) && (uVar3 != 0x20)) goto LAB_510035dd;
      uVar1 = uVar1 ^ (uVar1 ^ param_2) & 0x30;
    }
    *(uint *)(param_1 + 0x10) = uVar1;
    *(int *)(param_1 + 0x14) = param_3;
    *(int *)(param_1 + 0x4c) = param_4;
    FUN_510033f8();
    FUN_5100349b();
    uVar2 = 0;
  }
  return uVar2;
}


