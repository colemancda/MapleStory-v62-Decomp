/* FUN_0069d35c - 0x0069d35c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0069d35c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  code *pcStack_1c;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x18) = extraout_ECX;
  pcStack_1c = (code *)0x69d376;
  FUN_004bc4fa();
  DAT_0097bce8 = -(uint)(extraout_ECX != (undefined4 *)0xffffff8b) & (uint)extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x21] = 0;
  pcStack_1c = FUN_004115a0;
  puStack_20 = &LAB_006a7cc4;
  uStack_24 = 6;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x26] = 1;
  FUN_0087b2f0(extraout_ECX + 0xab,4);
  pcStack_1c = FUN_00411629;
  puStack_20 = &LAB_0048c051;
  uStack_24 = 6;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087b2f0(extraout_ECX + 0xb1,4);
  pcStack_1c = FUN_00411629;
  puStack_20 = &LAB_0048c051;
  uStack_24 = 2;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0087b2f0(extraout_ECX + 0xb7,4);
  pcStack_1c = (code *)0x0;
  puStack_20 = (undefined1 *)0x0;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_24;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *extraout_ECX = &PTR_LAB_008eefec;
  extraout_ECX[1] = &PTR_FUN_008eefa0;
  extraout_ECX[2] = &PTR_FUN_008eef9c;
  FUN_00679e4e(&uStack_24,0xc09);
  FUN_008163ca();
  if (extraout_ECX[0x18] == 0) {
    pcStack_1c = (code *)0x80004003;
    puStack_20 = (undefined1 *)0x69d446;
    FUN_00878dfb();
  }
  iVar3 = extraout_ECX[0x18];
  *(int *)(unaff_EBP + -0x10) = iVar3;
  if (iVar3 == 0) {
    pcStack_1c = (code *)0x80004003;
    puStack_20 = (undefined1 *)0x69d456;
    FUN_00878dfb();
  }
  iVar3 = extraout_ECX[0x18];
  *(int *)(unaff_EBP + -0x14) = iVar3;
  if (iVar3 == 0) {
    pcStack_1c = (code *)0x80004003;
    puStack_20 = (undefined1 *)0x69d466;
    FUN_00878dfb();
  }
  pcStack_1c = (code *)0x1;
  puStack_20 = (undefined1 *)0x0;
  uStack_24 = 1;
  uVar5 = 10;
  uVar1 = FUN_0040e53d(10);
  uVar2 = FUN_0040e48b(uVar1);
  uVar4 = 10;
  iVar3 = FUN_0040e48b(10,uVar2);
  FUN_0081420c(0x2f8 - iVar3,uVar4,uVar2,uVar1,uVar5);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


