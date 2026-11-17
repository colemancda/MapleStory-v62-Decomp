/* FUN_0052f88a - 0x0052f88a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052f88a(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  uStack_28 = 0x52f8a9;
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  uStack_28 = 0x52f8b6;
  FUN_0052b7ca();
  if (0 < *(int *)(unaff_EBP + -0x14)) {
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x14);
    do {
      uStack_28 = *(undefined4 *)(unaff_EBP + 8);
      iStack_2c = unaff_EBP + -0x1c;
      uStack_30 = 0x52f8d0;
      FUN_0052db8e();
      uStack_28 = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_2c = 0x52f8de;
      iVar3 = FUN_0052fee3();
      uStack_28 = 0x52f8e8;
      FUN_0052e131();
      uStack_28 = 0x52f8ef;
      FUN_0052e143();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(unaff_EBP + -0x18);
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        uStack_28 = 0;
        iStack_2c = 0x52f909;
        FUN_0048ba7b();
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
      piVar1 = (int *)(unaff_EBP + -0x10);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    uStack_28 = 0;
    iStack_2c = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    *(undefined1 **)(unaff_EBP + 8) = auStack_38;
    FUN_00679d22(auStack_38,0x11a1);
    FUN_007db3ad();
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    uStack_28 = 0x578;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iStack_2c = 0x52f955;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar3 == 0) {
      uStack_28 = 0;
    }
    else {
      iStack_2c = 0x52f968;
      uStack_28 = FUN_0053490e();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_2c = 0x52f979;
    FUN_0052fde2();
    uStack_28 = 0x52f981;
    FUN_004bc6a2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_28 = 0x52f98d;
    FUN_0052fe60();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


