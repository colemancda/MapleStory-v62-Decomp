/* FUN_007db682 - 0x007db682 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007db682(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_00879bb8();
  uStack_1c = 0xa8;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_20 = 0x7db6a6;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uStack_1c = 0x7db6b8;
    iVar1 = FUN_007db4ad();
  }
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
  *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar2 != 0) & uVar2 - 8;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_1c = 0x7db6de;
  FUN_007e19fc();
  iVar1 = *(int *)(unaff_EBP + 0x10);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      uVar3 = 3;
      goto LAB_007db769;
    }
    uStack_1c = *(undefined4 *)(unaff_EBP + -0x14);
    uStack_20 = 0x7db6fd;
    FUN_0057bb37();
  }
  uStack_1c = *(undefined4 *)(unaff_EBP + 0x18);
  uStack_20 = 0;
  uStack_24 = *(undefined4 *)(unaff_EBP + 0x14);
  uStack_28 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 **)(unaff_EBP + 0x10) = &uStack_2c;
  FUN_00450368(unaff_EBP + 8);
  uVar3 = 1000;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_007e19f8(1000);
  FUN_007db991(uVar3);
  uStack_1c = 0;
  uStack_20 = 1;
  uStack_24 = 0xd3;
  uStack_28 = 0;
  uStack_2c = 0;
  _OOBECompleteWnfWaitCallback_28(400,300);
  uStack_1c = 0x7db752;
  uVar3 = FUN_004bc6a2();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == *(int *)(unaff_EBP + -0x14))) {
    uStack_1c = 0x7db767;
    FUN_0045e621();
  }
LAB_007db769:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_1c = 0x7db774;
  FUN_007e1a19();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_1c = 0x7db780;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


