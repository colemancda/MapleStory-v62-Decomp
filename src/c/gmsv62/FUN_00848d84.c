/* FUN_00848d84 - 0x00848d84 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00848d84(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  
  FUN_00879bb8();
  iStack_28 = 0;
  iStack_2c = 500;
  uStack_30 = 0x848da3;
  iVar2 = FUN_004becbc();
  if (iVar2 != 0) {
    iStack_28 = 0x848db6;
    iVar2 = FUN_0066127f();
    if (iVar2 == 0) {
      iStack_28 = unaff_EBP + -0x14;
      iStack_2c = 0x848dec;
      iVar2 = FUN_00455c59();
      iVar2 = *(int *)(iVar2 + 4);
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        iStack_28 = 0;
        iStack_2c = 0x848dfd;
        FUN_0045e7c2();
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
      }
      iStack_28 = *(undefined4 *)(iVar2 + 0x85);
      iStack_2c = iVar2 + 0x81;
      uStack_30 = 0x848e12;
      sVar1 = FUN_0045f084();
      if (0 < sVar1) {
        iStack_28 = 0;
        iStack_2c = 0;
        uStack_30 = 0x50;
        uStack_34 = 0x848e25;
        FUN_0060142b();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        iStack_28 = 0x848e2d;
        iStack_28 = FUN_007d1e08();
        iStack_2c = 0x848e36;
        FUN_00457d37();
        iStack_28 = *(undefined4 *)(unaff_EBP + 8);
        iStack_2c = 0x848e41;
        FUN_00457d37();
        iStack_28 = unaff_EBP + -0x24;
        iStack_2c = 0x848e50;
        FUN_004751b2();
        *(undefined4 *)(extraout_ECX + 0x208c) = 1;
        iStack_28 = 0x848e5f;
        uVar3 = FUN_007d1e08();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        *(undefined4 *)(extraout_ECX + 0x2090) = uVar3;
        iStack_28 = 0x848e71;
        FUN_0045ebca();
      }
    }
    else {
      iStack_28 = 0;
      iStack_2c = 0;
      uStack_30 = 0;
      uStack_34 = 0;
      *(undefined1 **)(unaff_EBP + 8) = auStack_38;
      FUN_00679d22(auStack_38,0x360);
      FUN_007db3ad();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


