/* FUN_007953b8 - 0x007953b8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007953b8(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int *extraout_ECX_00;
  int *extraout_ECX_01;
  int unaff_EBP;
  int iVar5;
  int iStack_78;
  int *piStack_74;
  
  FUN_00879bb8();
  iVar5 = *(int *)(extraout_ECX + 0x524);
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  if (iVar5 != 0) goto LAB_007959dc;
  puVar3 = (undefined4 *)(unaff_EBP + -0x34);
  piVar1 = (int *)(*(int *)(extraout_ECX + 0x1744) + 4);
  iVar5 = 3;
  do {
    if (*piVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = **(undefined4 **)(*piVar1 + 0x78);
    }
    *puVar3 = uVar4;
    piVar1 = piVar1 + 2;
    puVar3 = puVar3 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  piStack_74 = (int *)0x795420;
  iVar5 = FUN_005583b2();
  *(int *)(unaff_EBP + -0x10) = iVar5;
  if (((iVar5 < 0) || (*(int *)(extraout_ECX + 0x4e0) != 0)) ||
     (*(int *)(extraout_ECX + 0x4f4) != 0)) {
    FUN_0079ba1a();
    FUN_0079ba1a();
    iVar5 = 0;
    do {
      if (*(int *)(*(int *)(extraout_ECX + 0x1744) + 4 + iVar5 * 8) == 0) break;
      FUN_00616bbe();
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    goto LAB_007959dc;
  }
  iVar5 = FUN_0079b949();
  if (*(int *)(iVar5 + 8) == *(int *)(unaff_EBP + -0x10)) goto LAB_007959dc;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_74 = (int *)0x795485;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(unaff_EBP + -0x10);
  FUN_00424e27();
  FUN_0043210d();
  piStack_74 = (int *)0x7954b9;
  iStack_78 = FUN_00411641();
  *(int ***)(unaff_EBP + -0x28) = &piStack_74;
  piStack_74 = extraout_ECX_00;
  FUN_004033a1();
  iStack_78 = 0x7954cc;
  iVar2 = FUN_0079be1e();
  if (iVar2 == 0) {
    FUN_0079ba1a();
    iVar5 = extraout_ECX;
  }
  else {
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00403191();
    iVar2 = *(int *)(iVar5 + 0x14);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar2 == 0) {
      FUN_00878dfb();
    }
    piVar1 = *(int **)(iVar5 + 0x14);
    piStack_74 = *(int **)(unaff_EBP + -0x44);
    iVar5 = *piVar1;
    *(int **)(unaff_EBP + -0x28) = piVar1;
    iStack_78 = *(int *)(unaff_EBP + -0x48);
    iVar5 = (**(code **)(iVar5 + 0x110))
                      (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x54),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c));
    if (iVar5 < 0) {
      piStack_74 = (int *)0x79553d;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    iVar5 = *(int *)(unaff_EBP + -0x1c);
  }
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  piStack_74 = (int *)0x795595;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  puVar3 = (undefined4 *)FUN_0079b949();
  *(undefined4 *)(unaff_EBP + -0x20) = 0xffffffff;
  FUN_00424e27();
  FUN_0043210d();
  piStack_74 = (int *)0x7955d5;
  iStack_78 = FUN_00411641();
  *(int ***)(unaff_EBP + -0x28) = &piStack_74;
  piStack_74 = extraout_ECX_01;
  FUN_004033a1();
  iStack_78 = 0x7955e8;
  iVar2 = FUN_0079be1e();
  if (iVar2 == 0) {
    FUN_0079ba1a();
  }
  else {
    puVar3[2] = 0;
    puVar3[3] = 1;
    if (puVar3[5] == 0) {
      FUN_00878dfb();
    }
    piVar1 = (int *)puVar3[5];
    iVar5 = (**(code **)(*piVar1 + 0xb4))();
    if (iVar5 < 0) {
      iStack_78 = iVar5;
      piStack_74 = piVar1;
      FUN_00878e09();
    }
    if (*(int *)(unaff_EBP + -0x20) < 0) {
      piStack_74 = (int *)0x7956f4;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
      piStack_74 = (int *)(unaff_EBP + -0x54);
      iStack_78 = 0x795702;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        piStack_74 = (int *)0x79570e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      piStack_74 = (int *)0x795718;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
      piStack_74 = (int *)(unaff_EBP + -0x44);
      iStack_78 = 0x795726;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        piStack_74 = (int *)0x795732;
        FUN_00878dfb();
      }
      iVar5 = puVar3[5];
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (iVar5 == 0) {
        piStack_74 = (int *)0x795745;
        FUN_00878dfb();
      }
      piVar1 = (int *)puVar3[5];
      iStack_78 = *(int *)(unaff_EBP + -0x50);
      iVar5 = *piVar1;
      piStack_74 = *(int **)(unaff_EBP + -0x4c);
      *(int **)(unaff_EBP + -0x28) = piVar1;
      iVar5 = (**(code **)(iVar5 + 0x110))
                        (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x54));
      if (iVar5 < 0) {
        piStack_74 = (int *)0x795780;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
      *puVar3 = *(undefined4 *)(unaff_EBP + -0x10);
      piStack_74 = *(int **)(unaff_EBP + -0x20);
      iStack_78 = 0x795642;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      piStack_74 = (int *)0x795650;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
      piStack_74 = (int *)(unaff_EBP + -0x44);
      iStack_78 = 0x79565e;
      iVar5 = FUN_00402e32();
      if (iVar5 < 0) {
        piStack_74 = (int *)0x79566a;
        FUN_00878dfb();
      }
      iVar5 = puVar3[5];
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (iVar5 == 0) {
        piStack_74 = (int *)0x79567d;
        FUN_00878dfb();
      }
      piVar1 = (int *)puVar3[5];
      iStack_78 = *(int *)(unaff_EBP + -0x50);
      iVar5 = *piVar1;
      piStack_74 = *(int **)(unaff_EBP + -0x4c);
      *(int **)(unaff_EBP + -0x28) = piVar1;
      iVar5 = (**(code **)(iVar5 + 0x110))
                        (piVar1,0x20,*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x54));
      if (iVar5 < 0) {
        piStack_74 = (int *)0x7956b8;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      FUN_00878dfb();
    }
    FUN_007959eb();
    iVar5 = *(int *)(unaff_EBP + -0x1c);
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_74 = (int *)0x7957f4;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00402676();
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x54));
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  piStack_74 = (int *)(unaff_EBP + -0x54);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_78 = 0x795863;
  uVar4 = FUN_00411641();
  *(int **)(unaff_EBP + -0x1c) = &iStack_78;
  FUN_004033a1(uVar4);
  iVar2 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x28) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
LAB_00795933:
    *(undefined4 *)(iVar5 + 0x1748) = 1;
  }
  else {
    iVar2 = FUN_0040cf4d();
    if (iVar2 == 0) goto LAB_00795933;
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      FUN_00878dfb();
    }
    uVar4 = FUN_0040cf4d();
    *(undefined4 *)(iVar5 + 0x1748) = uVar4;
  }
  piStack_74 = (int *)(unaff_EBP + -0x24);
  iStack_78 = 0x79594f;
  FUN_005d0ab2();
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iVar2 = 0;
  do {
    if (*(int *)(iVar2 + 4 + *(int *)(iVar5 + 0x1744)) == 0) break;
    FUN_00616bbe();
    *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 4;
    iVar2 = iVar2 + 8;
  } while (iVar2 < 0x18);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00445a30();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
LAB_007959dc:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


