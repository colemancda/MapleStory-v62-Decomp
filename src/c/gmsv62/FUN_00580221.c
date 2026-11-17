/* FUN_00580221 - 0x00580221 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00580221(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar5;
  int iStack_b4;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  int *piStack_90;
  
  FUN_00879bb8();
  piStack_90 = (int *)(unaff_EBP + -0x14);
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX;
  uStack_94 = 0x580242;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar5 = (undefined4 *)(extraout_ECX + 0x1b8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX + 400;
  *(undefined4 **)(unaff_EBP + -0x28) = puVar5;
  iVar2 = extraout_ECX;
  while( true ) {
    piStack_90 = &DAT_00980690;
    if (*(int *)(iVar2 + 0xd0) == *(int *)(unaff_EBP + -0x24)) {
      uStack_94 = 0x58028a;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x30) = puVar5[1];
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piVar3 == (int *)0x0) {
        piStack_90 = (int *)0x80004003;
        uStack_94 = 0x5802a5;
        FUN_00878dfb();
        piVar3 = *(int **)(unaff_EBP + -0x14);
      }
      iVar2 = *piVar3;
      uStack_9c = *(undefined4 *)(unaff_EBP + -0x5c);
      uStack_98 = *(undefined4 *)(unaff_EBP + -0x58);
      uStack_94 = *(undefined4 *)(unaff_EBP + -0x54);
      *(int **)(unaff_EBP + -0x34) = piVar3;
      piStack_90 = *(int **)(unaff_EBP + -0x50);
      iVar2 = (**(code **)(iVar2 + 0x80))();
      if (iVar2 < 0) {
        iStack_b4 = *(int *)(unaff_EBP + -0x34);
        FUN_00878e09(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    else {
      uStack_94 = 0x5802eb;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -0x34) = *puVar5;
      piVar3 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (piVar3 == (int *)0x0) {
        piStack_90 = (int *)0x80004003;
        uStack_94 = 0x580305;
        FUN_00878dfb();
        piVar3 = *(int **)(unaff_EBP + -0x14);
      }
      iVar2 = *piVar3;
      uStack_9c = *(undefined4 *)(unaff_EBP + -0x6c);
      uStack_98 = *(undefined4 *)(unaff_EBP + -0x68);
      uStack_94 = *(undefined4 *)(unaff_EBP + -100);
      *(int **)(unaff_EBP + -0x30) = piVar3;
      piStack_90 = *(int **)(unaff_EBP + -0x60);
      iVar2 = (**(code **)(iVar2 + 0x80))();
      if (iVar2 < 0) {
        iStack_b4 = *(int *)(unaff_EBP + -0x30);
        FUN_00878e09(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    iStack_b4 = 0x580347;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_b4 = 0x580352;
      FUN_00878dfb();
    }
    cVar1 = *(char *)(*(int *)(unaff_EBP + -0x2c) + 0xd4);
    if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      iStack_b4 = 0x580377;
      FUN_0056ad27();
    }
    iStack_b4 = 0x580386;
    FUN_00414f8b();
    iStack_b4 = 0x58038f;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_b4 = 0x58039f;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + -0x34) = &iStack_b4;
    FUN_00448a17(uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_007d4a9a(unaff_EBP + -0x38,1);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_0044974c();
    FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (*(int **)(unaff_EBP + -0x38) != (int *)0x0) {
      iStack_b4 = 0x5803e1;
      (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_b4 = 0x5803ee;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_b4 = 0x5803f9;
      FUN_00878dfb();
    }
    iStack_b4 = 0x580403;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x4c));
    iStack_b4 = unaff_EBP + -0x4c;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      iStack_b4 = 0x580419;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iStack_b4 = 0x580429;
    FUN_00403191();
    iStack_b4 = unaff_EBP + -0x8c;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_007d4a9a(unaff_EBP + -0x3c,1);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uStack_98 = 0x580450;
    uStack_98 = FUN_00449749();
    uStack_9c = 0x580459;
    FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x34) = &uStack_9c;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_004115d9();
    FUN_00448e3a();
    piStack_90 = *(int **)(unaff_EBP + -0x3c);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (piStack_90 != (int *)0x0) {
      uStack_94 = 0x58049f;
      (**(code **)(*piStack_90 + 8))();
    }
    piStack_90 = (int *)(unaff_EBP + -0x8c);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uStack_94 = 0x5804af;
    piStack_90 = (int *)FUN_00402bc3();
    if ((int)piStack_90 < 0) {
      uStack_94 = 0x5804ba;
      FUN_00878dfb();
    }
    piStack_90 = (int *)(unaff_EBP + -0x4c);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_94 = 0x5804c7;
    piStack_90 = (int *)FUN_00402bc3();
    if ((int)piStack_90 < 0) {
      uStack_94 = 0x5804d2;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x12;
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 4;
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 8;
    if (0xa1 < *(int *)(unaff_EBP + -0x10)) break;
    iVar2 = *(int *)(unaff_EBP + -0x2c);
    puVar5 = *(undefined4 **)(unaff_EBP + -0x28);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_90 = (int *)0x5804fa;
  FUN_0056ad97();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_90 = (int *)0x580506;
  FUN_00414ebb();
  piStack_90 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_90 != (int *)0x0) {
    uStack_94 = 0x580517;
    (**(code **)(*piStack_90 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


