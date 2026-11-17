/* FUN_006a1a87 - 0x006a1a87 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_006a1a87(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  uint uVar4;
  int unaff_EBP;
  undefined4 uVar5;
  uint auStack_28 [3];
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x1c) = extraout_ECX;
  auStack_28[2] = 0x6a1aa1;
  FUN_004bc4fa();
  auStack_28[0] = -(uint)(extraout_ECX != (undefined4 *)0xffffff8b) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  DAT_0097bcf0 = auStack_28[0];
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x28] = 0;
  auStack_28[2] = 0;
  auStack_28[1] = 0;
  *(uint **)(unaff_EBP + -0x18) = auStack_28;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  extraout_ECX[0x2c] = 0;
  extraout_ECX[0x2e] = 0;
  *extraout_ECX = &PTR_FUN_008ef0fc;
  extraout_ECX[1] = &PTR_FUN_008ef0b0;
  extraout_ECX[2] = &PTR_FUN_008ef0ac;
  FUN_00679e4e(auStack_28,0xf0f);
  FUN_008163ca();
  if (extraout_ECX[0x18] == 0) {
    auStack_28[2] = 0x80004003;
    auStack_28[1] = 0x6a1b2e;
    FUN_00878dfb();
  }
  iVar3 = extraout_ECX[0x18];
  *(int *)(unaff_EBP + -0x10) = iVar3;
  if (iVar3 == 0) {
    auStack_28[2] = 0x80004003;
    auStack_28[1] = 0x6a1b3e;
    FUN_00878dfb();
  }
  iVar3 = extraout_ECX[0x18];
  *(int *)(unaff_EBP + -0x14) = iVar3;
  if (iVar3 == 0) {
    auStack_28[2] = 0x80004003;
    auStack_28[1] = 0x6a1b4e;
    FUN_00878dfb();
  }
  iVar3 = extraout_ECX[0x18];
  *(int *)(unaff_EBP + -0x18) = iVar3;
  if (iVar3 == 0) {
    auStack_28[2] = 0x80004003;
    auStack_28[1] = 0x6a1b5e;
    FUN_00878dfb();
  }
  auStack_28[2] = 1;
  auStack_28[1] = 0;
  auStack_28[0] = 1;
  uVar5 = 10;
  uVar1 = FUN_0040e53d(10);
  uVar2 = FUN_0040e48b(uVar1);
  iVar3 = FUN_0040e53d(uVar2);
  uVar4 = 600U - iVar3 >> 1;
  iVar3 = FUN_0040e48b(uVar4);
  FUN_0081420c(800U - iVar3 >> 1,uVar4,uVar2,uVar1,uVar5);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


