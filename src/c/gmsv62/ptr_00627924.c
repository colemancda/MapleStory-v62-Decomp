/* ptr_00627924 - 0x00627924 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00627924(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int *unaff_EBX;
  int unaff_EBP;
  uint uVar6;
  uint uStack_c;
  
  uStack_c = 0x627937;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x31;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  uStack_c = 0x6270f7;
  puVar1 = (uint *)FUN_00679d86();
  uStack_c = *puVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  VariantInit((VARIANTARG *)(unaff_EBP + -200));
  uStack_c = 0x62713d;
  iVar2 = FUN_00402e32();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
  uStack_c = 0x62715d;
  iVar2 = FUN_00402e32();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  uStack_c = unaff_EBP - 200;
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  uVar3 = FUN_00411641();
  *(undefined1 **)(unaff_EBP + -0x50) = &stack0xffffffec;
  FUN_004033a1(uVar3);
  iVar2 = unaff_EBP + -0xd8;
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  uStack_c = 0x6271b7;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  iVar2 = FUN_00404b30();
  if ((iVar2 < (int)unaff_EBX) && (iVar2 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(int **)(unaff_EBP + -0x38) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
    FUN_005f3a71();
    uStack_c = 0x627af2;
    FUN_004655d4();
    FUN_00414f8b();
  }
  else {
    FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    FUN_004035f5();
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    if (*(int **)(unaff_EBP + -0x50) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    *(int **)(unaff_EBP + -100) = unaff_EBX;
    while( true ) {
      if (*(int **)(unaff_EBP + -0x1c) == unaff_EBX) {
        FUN_00878dfb();
      }
      uStack_c = 1;
      iVar2 = (**(code **)(**(int **)(unaff_EBP + -0x1c) + 0xc))();
      if (iVar2 != 0) break;
      *(undefined1 **)(unaff_EBP + -0x70) = &stack0xfffffff8;
      uStack_c = *(uint *)(unaff_EBP + -0x58);
      FUN_004033a1();
      uStack_c = unaff_EBP - 0xd8;
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      uStack_c = 0x6272cc;
      FUN_004343c5();
      *(int **)(unaff_EBP + 8) = unaff_EBX;
      uStack_c = 0x6272dc;
      FUN_00454081();
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      if ((*(int **)(unaff_EBP + 8) != unaff_EBX) &&
         ((char)**(int **)(unaff_EBP + 8) != (char)unaff_EBX)) {
        uStack_c = 0x627310;
        FUN_004655d4();
        FUN_00414f8b();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      FUN_00414ebb();
      iVar2 = FUN_00402bc3();
      if (iVar2 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    iVar2 = FUN_00402bc3();
    if (iVar2 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    if (*(int **)(unaff_EBP + -0x1c) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
  }
  uVar6 = 0;
  do {
    if ((*(int **)(unaff_EBP + -0x38) == unaff_EBX) ||
       ((uint)(*(int **)(unaff_EBP + -0x38))[-1] <= uVar6)) break;
    piVar4 = (int *)FUN_004029b9();
    *(int **)(unaff_EBP + 8) = piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    if (piVar4 == unaff_EBX) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_007e62e9();
    }
    uVar5 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x2c) = -(uint)(uVar5 != 0) & uVar5 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    FUN_004c26c4();
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    uStack_c = uVar6;
    FUN_004726fc();
    *(uint **)(unaff_EBP + 8) = &uStack_c;
    FUN_00450368();
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    FUN_004c2677();
    FUN_007eddac();
    uStack_c = 0x627bb2;
    FUN_007edf11();
    FUN_007e6e3c();
    iVar2 = FUN_004bc6a2();
    if (iVar2 == 0x2000) {
      uVar6 = uVar6 - 1;
    }
    else {
      if (iVar2 != 0x2001) {
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        FUN_004c26e1();
        break;
      }
      uVar6 = uVar6 + 1;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    FUN_004c26e1();
  } while ((int)unaff_EBX <= (int)uVar6);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045f10c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


