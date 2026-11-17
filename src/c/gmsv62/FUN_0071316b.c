/* FUN_0071316b - 0x0071316b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0071316b(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  
  FUN_00879bb8();
  *(uint *)(unaff_EBP + -0x14) = (-(uint)(*(int *)(DAT_00978360 + 0xc78) != 0) & 0xffffffb2) + 0x1bb
  ;
  puVar1 = *(undefined4 **)(extraout_ECX + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    while( true ) {
      iVar4 = *(int *)((-(uint)(puVar1 != (undefined4 *)0x0) & (uint)(puVar1 + -4)) + 4);
      uVar3 = *puVar1;
      *(uint *)(unaff_EBP + -0x18) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
      *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
      FUN_00424ed4();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x1c);
      iVar4 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      uVar3 = FUN_00424ee1();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      *(undefined4 *)(unaff_EBP + -0x30) = uVar3;
      FUN_004125d9();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x20);
      iVar4 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar4 = FUN_00424f08();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004125d9();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x24);
      iVar5 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004308ad(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004125d9();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar2 = (int *)FUN_0042fb5e(unaff_EBP + -0x28);
      iVar5 = *piVar2;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_00429607(&DAT_0097bb30);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004125d9();
      iVar5 = unaff_EBP + -0x2c;
      FUN_00424e27(iVar5);
      FUN_0042fb5e(iVar5);
      iVar5 = unaff_EBP + -0x84;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00424df4(iVar5);
      FUN_00429607(iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_004125d9();
      FUN_00424aee(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00424aee(&DAT_00980690);
      iVar5 = unaff_EBP + -0x34;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_00424e27(iVar5);
      FUN_0042fb5e(iVar5);
      iVar5 = unaff_EBP + -0x54;
      iVar8 = unaff_EBP + -0x44;
      uVar3 = *(undefined4 *)(unaff_EBP + -0x30);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar7 = iVar4;
      FUN_00424df4(uVar3,iVar4,iVar8,iVar5);
      FUN_00424f2f(uVar3,iVar7,iVar8,iVar5);
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x44);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar5 = FUN_00402bc3(unaff_EBP + -0x54);
      if (iVar5 < 0) {
        FUN_00878dfb(iVar5);
      }
      iVar4 = FUN_0087a90a(iVar4 - *(int *)(unaff_EBP + -0x14));
      FUN_00424aee(&DAT_00980690);
      uVar3 = 3;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00424e27(3);
      iVar5 = FUN_0042a378();
      FUN_004295f1(iVar5 + iVar4 * 5,uVar3);
      iVar4 = unaff_EBP + -0x74;
      iVar5 = unaff_EBP + -100;
      uVar3 = *(undefined4 *)(unaff_EBP + -0x14);
      uVar6 = 0x1f8;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00424e27(0x1f8,uVar3,iVar5,iVar4);
      FUN_00424f2f(uVar6,uVar3,iVar5,iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      iVar4 = FUN_00402bc3(unaff_EBP + -100);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x74);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0xe;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x84);
      if (iVar4 < 0) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00412600();
      if (*(int *)(unaff_EBP + -0x18) == 0) break;
      puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


