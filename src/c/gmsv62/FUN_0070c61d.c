/* FUN_0070c61d - 0x0070c61d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0070c61d(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_008140e5();
  iVar1 = *(int *)(unaff_EBP + 0x10);
  uVar3 = *(undefined4 *)(unaff_EBP + 0x18);
  extraout_ECX[0x19] = *(undefined4 *)(unaff_EBP + 8);
  extraout_ECX[0x1a] = *(undefined4 *)(unaff_EBP + 0xc);
  uVar2 = *(undefined4 *)(unaff_EBP + 0x14);
  extraout_ECX[0x1b] = iVar1;
  extraout_ECX[0x1c] = uVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1d] = 0;
  FUN_00419192(uVar3);
  uVar3 = *(undefined4 *)(unaff_EBP + 0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[0x1e] = 0;
  FUN_00414f8b(uVar3);
  uVar3 = *(undefined4 *)(unaff_EBP + 0x20);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  extraout_ECX[0x1f] = 0;
  FUN_004725b8(uVar3);
  uVar3 = *(undefined4 *)(unaff_EBP + 0x24);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  extraout_ECX[0x20] = 0;
  FUN_00627ce8(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  extraout_ECX[0x21] = -iVar1;
  FUN_0087b2f0(extraout_ECX + 0x26,4,9,&LAB_00450362,FUN_004115cc);
  extraout_ECX[0x2f] = 0;
  extraout_ECX[0x30] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_0074b9b2();
  extraout_ECX[0x16c] = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  *extraout_ECX = &PTR_FUN_008f0950;
  extraout_ECX[1] = &PTR_LAB_008f0904;
  extraout_ECX[2] = &PTR_FUN_008f0900;
  uVar3 = FUN_00679e4e(unaff_EBP + 8,0x10c3);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0070cfc3(extraout_ECX + 0x26,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_004030b1();
  }
  uVar3 = FUN_00679e4e(unaff_EBP + 8,0x10c4);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_0070cfc3(extraout_ECX + 0x29,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_004030b1();
  }
  uVar3 = FUN_00679e4e(unaff_EBP + 8,0x10c5);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_0070cfc3(extraout_ECX + 0x2c,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_004030b1();
  }
  if (extraout_ECX[0x26] == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar3 = FUN_0040e48b();
  extraout_ECX[0x22] = uVar3;
  if (extraout_ECX[0x28] == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar3 = FUN_0040e48b();
  extraout_ECX[0x23] = uVar3;
  if (extraout_ECX[0x26] == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar3 = FUN_0040e53d();
  extraout_ECX[0x24] = uVar3;
  if (extraout_ECX[0x2c] == 0) {
    FUN_00878dfb(0x80004003);
  }
  uVar3 = FUN_0040e53d();
  extraout_ECX[0x25] = uVar3;
  FUN_0060142b(0xcd,0,0);
  uVar3 = extraout_ECX[0x19];
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00457d37(uVar3);
  FUN_00457cda(1);
  FUN_004751b2(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


