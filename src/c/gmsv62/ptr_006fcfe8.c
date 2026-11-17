/* ptr_006fcfe8 - 0x006fcfe8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006fcfe8(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FUN_00878dfb(in_EAX);
  if (*(int *)(unaff_EBP + -0x14) == unaff_ESI) {
    FUN_00878dfb(0x80004003);
  }
  FUN_006e3d24(unaff_ESI);
  iVar1 = unaff_ESI;
  FUN_004115d9();
  FUN_006e3d45(iVar1);
  FUN_00424aee(unaff_EBX);
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00424aee(unaff_EBX);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00424aee(unaff_EBX);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00424aee(unaff_EBX);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_00424aee(unaff_EBX);
  iVar1 = unaff_EBP + -0x7c;
  iVar7 = unaff_EBP + -0x5c;
  iVar6 = unaff_EBP + -0x4c;
  iVar5 = unaff_EBP + -0x6c;
  iVar4 = unaff_EBP + -0x8c;
  uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
  iVar2 = unaff_EBP + -0x9c;
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00424e27(iVar2,uVar3,iVar4,iVar5,iVar6,iVar7,iVar1);
  FUN_004250ac(iVar2,uVar3,iVar4,iVar5,iVar6,iVar7,iVar1);
  iVar1 = FUN_00402bc3(unaff_EBP + -0x9c);
  if (iVar1 < unaff_ESI) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x8c);
  if (iVar1 < unaff_ESI) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x6c);
  if (iVar1 < unaff_ESI) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x4c);
  if (iVar1 < unaff_ESI) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar1 < unaff_ESI) {
    FUN_00878dfb(iVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar1 = FUN_00402bc3(unaff_EBP + -0x7c);
  if (iVar1 < unaff_ESI) {
    FUN_00878dfb(iVar1);
  }
  FUN_006fd13a();
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


