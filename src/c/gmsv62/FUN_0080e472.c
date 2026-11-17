/* FUN_0080e472 - 0x0080e472 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0080e472(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int *piVar4;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  int iVar5;
  undefined4 uStack_8c;
  int iStack_88;
  int iStack_84;
  
  FUN_00879bb8();
  iStack_84 = 0x80e48c;
  FUN_0081622a();
  iStack_84 = 0x80e497;
  FUN_00448dc6();
  iVar2 = *(int *)(extraout_ECX + 0x9c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x38);
  }
  *(int *)(unaff_EBP + -0x24) = iVar2 + 10;
  iVar5 = iVar2 * 0x12;
  *(int *)(unaff_EBP + -0x20) = iVar2;
  *(int *)(unaff_EBP + -0x1c) = iVar5;
  *(int *)(unaff_EBP + -0x10) = iVar5;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0xa8 + iVar2 * 4;
  while( true ) {
    iVar1 = 10;
    if (*(int *)(unaff_EBP + -0x24) < 10) {
      iVar1 = *(int *)(unaff_EBP + -0x24);
    }
    if (iVar1 <= iVar2) break;
    if (**(int **)(unaff_EBP + -0x18) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(**(int **)(unaff_EBP + -0x18) + -4);
    }
    if (iVar1 != 0) {
      if (iVar2 == *(int *)(extraout_ECX + 0xa0)) {
        iStack_84 = 0xff;
        iStack_88 = 0x80e512;
        FUN_004031b7();
        piVar4 = *(int **)(unaff_EBP + -0x14);
        uVar3 = *(undefined4 *)(extraout_ECX + 0xd0);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
        if (piVar4 == (int *)0x0) {
          iStack_84 = 0x80e530;
          FUN_00878dfb();
          piVar4 = *(int **)(unaff_EBP + -0x14);
        }
        iVar2 = *piVar4;
        uStack_8c = *(undefined4 *)(unaff_EBP + -0x5c);
        iStack_88 = *(int *)(unaff_EBP + -0x58);
        iStack_84 = *(int *)(unaff_EBP + -0x54);
        *(int **)(unaff_EBP + -0x2c) = piVar4;
        iVar2 = (**(code **)(iVar2 + 0x80))
                          (piVar4,7,(*(int *)(unaff_EBP + -0x10) - iVar5) + 0x56,
                           *(undefined4 *)(unaff_EBP + -0x28));
        if (iVar2 < 0) {
          iStack_84 = *(int *)(unaff_EBP + -0x2c);
          uStack_8c = 0x80e56b;
          iStack_88 = iVar2;
          FUN_00878e09();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_84 = 0x80e578;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          iStack_84 = 0x80e583;
          FUN_00878dfb();
        }
        iVar2 = *(int *)(unaff_EBP + -0x20);
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      iStack_84 = 0x80e595;
      FUN_00414f8b();
      iStack_88 = extraout_ECX + 0xd4;
      *(int **)(unaff_EBP + -0x2c) = &iStack_84;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      uStack_8c = 0x80e5b0;
      FUN_0046fcc9();
      iStack_88 = unaff_EBP + 8;
      uStack_8c = 0x80e5b9;
      FUN_007d3a22();
      if (iVar2 == *(int *)(extraout_ECX + 0xa0)) {
        iStack_84 = 0x80e5d6;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_84 = 0x80e5e3;
        FUN_00403191();
        iStack_84 = unaff_EBP + -0x6c;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iStack_88 = 0x80e5f7;
        iStack_88 = FUN_004458be();
        uStack_8c = 0x80e600;
        uVar3 = FUN_00449713();
        *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_8c;
        uStack_8c = extraout_ECX_00;
        FUN_00448a17(uVar3);
        iVar5 = (*(int *)(unaff_EBP + -0x10) - *(int *)(unaff_EBP + -0x1c)) + 0x59;
        uVar3 = 0xe;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_0044974c(0xe,iVar5);
        FUN_005c1d2c(uVar3,iVar5);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_84 = 0x80e63b;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_84 = 0x80e646;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
      }
      else {
        iStack_84 = 0x80e65e;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
        iStack_84 = unaff_EBP + -0x4c;
        iStack_88 = 0x80e66c;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          iStack_84 = 0x80e678;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_84 = 0x80e682;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
        iStack_84 = unaff_EBP + -0x3c;
        iStack_88 = 0x80e690;
        iVar5 = FUN_00402e32();
        if (iVar5 < 0) {
          iStack_84 = 0x80e69c;
          FUN_00878dfb();
        }
        iStack_84 = unaff_EBP + -0x3c;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_88 = 0x80e6b0;
        iStack_88 = FUN_004458be();
        uStack_8c = 0x80e6b9;
        uVar3 = FUN_00449713();
        *(undefined4 **)(unaff_EBP + -0x2c) = &uStack_8c;
        uStack_8c = extraout_ECX_01;
        FUN_00448a17(uVar3);
        iVar5 = (*(int *)(unaff_EBP + -0x10) - *(int *)(unaff_EBP + -0x1c)) + 0x59;
        uVar3 = 0xe;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_0044974c(0xe,iVar5);
        FUN_005c1d2c(uVar3,iVar5);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_84 = 0x80e6f4;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_84 = 0x80e6ff;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
      }
      iStack_84 = 0x80e70c;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_84 = 0x80e717;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00414ebb();
      iVar5 = *(int *)(unaff_EBP + -0x1c);
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
    iVar2 = iVar2 + 1;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
    *(int *)(unaff_EBP + -0x20) = iVar2;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    iStack_84 = 0x80e748;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


