/* FUN_006a39d0 - 0x006a39d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a39d0(uint param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  undefined1 *puStack_14;
  undefined1 local_8 [4];
  
  if ((param_2 & 0x80000000) == 0) {
    if (param_1 == 0xd) {
      puStack_14 = (undefined1 *)0x6a3a55;
      iVar2 = FUN_004aa480();
      if (0x13 < iVar2) {
        uVar3 = 0x1114;
LAB_006a3a38:
        puStack_14 = (undefined1 *)0x0;
        uStack_18 = 0;
        uStack_1c = 0;
        uStack_20 = 0;
        FUN_00679d22(auStack_24,uVar3);
        FUN_007db3ad();
        return;
      }
      puStack_14 = (undefined1 *)0x6a3a75;
      iVar2 = FUN_004b3d90();
      if (iVar2 != 0) {
        return;
      }
    }
    else if ((param_1 < 0x25) || (0x28 < param_1)) {
      puStack_14 = local_8;
      uStack_18 = 0x6a3a04;
      piVar1 = (int *)FUN_00605efb();
      if (*piVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*piVar1 + -4);
      }
      puStack_14 = (undefined1 *)0x6a3a21;
      FUN_00414ebb();
      if (0x12d < iVar2) {
        uVar3 = 0x1115;
        goto LAB_006a3a38;
      }
    }
  }
  puStack_14 = (undefined1 *)param_2;
  uStack_18 = param_1;
  uStack_1c = 0x6a3a86;
  FUN_004bc822();
  return;
}


