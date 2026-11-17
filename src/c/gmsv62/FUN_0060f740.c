/* FUN_0060f740 - 0x0060f740 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0060f740(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  iStack_20 = 0;
  uStack_24 = 500;
  uStack_28 = 0x60f766;
  iVar2 = FUN_004becbc();
  if (((iVar2 == 0) || (*(int *)(unaff_EBP + 8) < 0)) ||
     (*(int *)(extraout_ECX[99] + *(int *)(unaff_EBP + 8) * 0x14) < 1)) {
LAB_0060f7e6:
    iVar2 = 0;
  }
  else {
    iStack_20 = 0x60f78a;
    iVar2 = (**(code **)(*extraout_ECX + 0x5c))();
    if (iVar2 != 0) {
      iStack_20 = 0x60f7a0;
      uVar3 = FUN_0045e2eb();
      uStack_24 = 0x60f7ae;
      iStack_20 = uVar3;
      iVar2 = FUN_0055416a();
      if (iVar2 != 0) {
        uStack_24 = 0x60f7be;
        iStack_20 = uVar3;
        iVar2 = FUN_008496ef();
        if (iVar2 != 0) {
          iStack_20 = 0;
          uStack_24 = 0;
          uStack_28 = 0;
          uStack_2c = 0;
          *(undefined1 **)(unaff_EBP + 8) = auStack_30;
          FUN_00679d22(auStack_30,0xd56);
          FUN_007db3ad();
          goto LAB_0060f7e6;
        }
      }
    }
    iStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0x6f;
    uStack_2c = 0x60f807;
    FUN_0060142b();
    iVar2 = *extraout_ECX;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_20 = 0x60f811;
    iVar2 = (**(code **)(iVar2 + 0x5c))();
    uVar4 = CONCAT31((int3)((uint)-iVar2 >> 8),-(iVar2 != 0)) & 0xffffff0b;
    iStack_20 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + '\x19');
    uStack_24 = 0x60f822;
    FUN_00457cda();
    iStack_20 = *(undefined4 *)(unaff_EBP + 8);
    uStack_24 = 0x60f82d;
    FUN_0045d247();
    iStack_20 = unaff_EBP + -0x1c;
    uStack_24 = 0x60f83c;
    FUN_004751b2();
    iStack_20 = 1;
    iVar2 = iStack_20;
    *(undefined4 *)(iVar1 + 0x208c) = 1;
    iStack_20 = 0x60f84a;
    uVar3 = FUN_007d1e08();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0x2090) = uVar3;
    iStack_20 = 0x60f85c;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


