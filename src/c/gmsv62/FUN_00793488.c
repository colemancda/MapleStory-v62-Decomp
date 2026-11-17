/* FUN_00793488 - 0x00793488 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00793488(void)

{
  int iVar1;
  undefined4 uVar2;
  int *extraout_ECX;
  int unaff_EBP;
  uint uVar3;
  int *piStack_30;
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8) / 10000;
  if (iVar1 == 0xbe) {
    extraout_ECX[0x5ea] = 0xf0;
    iStack_20 = 0x3ec;
  }
  else {
    if (iVar1 != 0xc1) goto LAB_00793607;
    extraout_ECX[0x5ea] = 0x21c;
    iStack_20 = 0x4faa8e;
  }
  uStack_24 = 0x7934e2;
  iVar1 = FUN_0064d61f();
  if ((extraout_ECX[0x149] == 0) && (iVar1 != 0)) {
    iStack_20 = unaff_EBP + 8;
    uStack_24 = 0x793502;
    FUN_00790038();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_20 = 3;
    uStack_24 = 0x7fffffff;
    uStack_28 = 1000;
    piStack_30 = extraout_ECX + 0x34f;
    *(undefined1 **)(unaff_EBP + -0x14) = auStack_2c;
    FUN_0041160e();
    *(int ***)(unaff_EBP + -0x18) = &piStack_30;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00486ada(&piStack_30);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int **)(unaff_EBP + -0x10) = extraout_ECX + 0x1e;
    iVar1 = FUN_0043f900();
    uVar3 = (uint)(iVar1 == 0);
    uVar2 = FUN_004091f9(uVar3);
    FUN_00424e82(uVar2);
    FUN_0042d941(uVar2,uVar3);
    iStack_20 = 0x793569;
    (**(code **)(*extraout_ECX + 4))();
    iStack_20 = 0x793570;
    iVar1 = FUN_00793618();
    if (iVar1 != 0) {
      iStack_20 = 3;
      uStack_24 = 0x7fffffff;
      uStack_28 = 1000;
      piStack_30 = extraout_ECX + 0x34f;
      *(undefined1 **)(unaff_EBP + -0x18) = auStack_2c;
      FUN_0041160e();
      *(int ***)(unaff_EBP + -0x1c) = &piStack_30;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00486ada(&piStack_30);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_004ef663(unaff_EBP + -0x14,&DAT_00964310);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar1 = FUN_0043f900();
      uVar3 = (uint)(iVar1 == 0);
      uVar2 = FUN_004091f9(uVar3);
      FUN_00424e82(uVar2);
      FUN_0042d941(uVar2,uVar3);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        iStack_20 = 0x7935ed;
        FUN_004030b1();
      }
      iStack_20 = 0x1e;
      uStack_24 = 0x4faa8e;
      uStack_28 = 0x7935f9;
      FUN_007d3e08();
    }
    if (*(int *)(unaff_EBP + 8) != 0) {
      iStack_20 = 0x793607;
      FUN_004030b1();
    }
  }
LAB_00793607:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


