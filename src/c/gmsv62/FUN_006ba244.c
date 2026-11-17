/* FUN_006ba244 - 0x006ba244 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006ba244(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  int unaff_EBP;
  int iStack_204;
  int iStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined1 *puStack_1dc;
  int iStack_1d8;
  undefined4 *puStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  undefined4 *puVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x598) = 0;
  FUN_006bcc40();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x5b0) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5b0) + 4) + 0x24))();
  iVar1 = FUN_006ba228();
  if (iVar1 == 0) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5b0) + 4) + 0x1c))();
  }
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x5a8) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5a8) + 4) + 0x24))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x5c0) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5c0) + 4) + 0x24))();
  if ((*(int *)(extraout_ECX + 0x584) == 0) ||
     ((iVar1 = FUN_006ba228(), iVar1 == 0 &&
      (*(int *)(*(int *)(extraout_ECX + 0x584) + 0x10) != *(int *)(DAT_00978368 + 0x2088))))) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5c0) + 4) + 0x1c))();
  }
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x5b8) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5b8) + 4) + 0x24))();
  if ((*(int *)(extraout_ECX + 0x584) == 0) ||
     ((iVar1 = FUN_006ba228(), iVar1 == 0 &&
      (*(int *)(*(int *)(extraout_ECX + 0x584) + 0x10) != *(int *)(DAT_00978368 + 0x2088))))) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5b8) + 4) + 0x1c))();
  }
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x5d8) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5d8) + 4) + 0x24))();
  if (*(int *)(extraout_ECX + 0x584) == 0) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5d8) + 4) + 0x1c))();
  }
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x5e0) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5e0) + 4) + 0x24))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x5e8) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5e8) + 4) + 0x24))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x5f0) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5f0) + 4) + 0x24))();
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar1 != 0) {
    FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382();
  (**(code **)(**(int **)(extraout_ECX + 0x5f8) + 0x20))();
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5f8) + 4) + 0x24))();
  FUN_006bab6e();
  if (*(int *)(extraout_ECX + 0x584) != 0) {
    FUN_004a77eb();
    iStack_1c8 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_1cc = 0x6ba83c;
    piVar2 = (int *)FUN_00679e4e();
    *(int **)(unaff_EBP + -0x10) = piVar2;
    if (*piVar2 != 0) {
      iStack_1c8 = 0x6ba84f;
      InterlockedIncrement((LONG *)(*piVar2 + 8));
    }
    FUN_00402fa6();
    *(undefined4 *)(unaff_EBP + -0x70) = **(undefined4 **)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      FUN_004030b1();
    }
    *(undefined4 *)(unaff_EBP + -0x54) = 600;
    *(undefined4 *)(unaff_EBP + -0x50) = 0xf0;
    *(undefined4 *)(unaff_EBP + -0x4c) = 0xf;
    *(undefined4 *)(unaff_EBP + -0x58) = 1;
    iStack_1c8 = 0x6ba899;
    FUN_00414f8b();
    iStack_1c8 = 0x6ba8a8;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (iVar1 != 0) {
      FUN_004a8730();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_1c8 = 0x6ba8ce;
    FUN_00609bca();
    iStack_1c8 = 0xb4;
    iStack_1cc = 0xfa;
    iStack_1d0 = 0x53;
    puStack_1d4 = (undefined4 *)0x1a8;
    iStack_1d8 = 0x7e1;
    uStack_1e0 = 0x6ba8f4;
    (**(code **)(**(int **)(extraout_ECX + 0x620) + 8))();
    uStack_1e0 = 0x74;
    uStack_1e4 = 0x6ba900;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (iVar1 == 0) {
      uStack_1e0 = 0;
    }
    else {
      uStack_1e0 = 0x6ba912;
      uStack_1e0 = FUN_004abf25();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    uStack_1e4 = 0x6ba926;
    FUN_0048b9e9();
    uStack_1e0 = 0;
    uStack_1e4 = 0xbe;
    uStack_1e8 = 0x4e;
    uStack_1ec = 0x2c0;
    uStack_1f0 = 3;
    uStack_1f4 = 1;
    uStack_1f8 = 0x7e4;
    iStack_200 = 0x6ba948;
    (**(code **)(**(int **)(extraout_ECX + 0x638) + 0x20))();
    *(undefined4 *)(*(int *)(extraout_ECX + 0x638) + 0x34) = 300;
    iStack_200 = *(undefined4 *)(extraout_ECX + 0x638);
    *(int **)(unaff_EBP + -0x14) = &iStack_204;
    FUN_0048bae8();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_006bdc01();
    FUN_004aa49d();
    iStack_200 = 0x6ba98b;
    FUN_004aa4e2();
    iStack_200 = 0x6ba996;
    FUN_0049f842();
    iStack_200 = 10;
    iStack_204 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_200 = FUN_00679e4e();
    iStack_204 = 0x6ba9b3;
    FUN_00402f41();
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      iStack_200 = 0x6ba9bf;
      FUN_004030b1();
    }
    *(undefined4 *)(unaff_EBP + -0xa8) = 0xffffffff;
    iStack_200 = 0xb8;
    *(undefined4 *)(unaff_EBP + -0x94) = 0x19;
    iStack_204 = 0x6ba9df;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    if (iVar1 == 0) {
      iStack_200 = 0;
    }
    else {
      iStack_200 = 0x6ba9f1;
      iStack_200 = FUN_004a0726();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    iStack_204 = 0x6baa05;
    FUN_0045e196();
    iStack_200 = unaff_EBP + -0xc4;
    iStack_204 = 0x10;
    (**(code **)(**(int **)(extraout_ECX + 0x628) + 8))(extraout_ECX,0x7e2,0x1a8,0x1cb,0x100);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_0045c14e();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00608bf3();
  }
  iStack_1c8 = 0x6baa52;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  iStack_1c8 = unaff_EBP + -0x44;
  iStack_1cc = 0x6baa60;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_1c8 = 0x6baa6c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_1c8 = 0x6baa7a;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
  iStack_1c8 = unaff_EBP + -0x34;
  puVar4 = &DAT_00980690;
  iStack_1cc = 0x6baa88;
  iVar1 = FUN_00402e32();
  if (iVar1 < 0) {
    iStack_1c8 = 0x6baa94;
    FUN_00878dfb();
    puVar4 = extraout_ECX_00;
  }
  iStack_1c8 = 0;
  iStack_1cc = unaff_EBP + -0x44;
  iStack_1d0 = unaff_EBP + -0x34;
  puStack_1dc = (undefined1 *)&puStack_1d4;
  *(undefined4 ***)(unaff_EBP + -0x10) = &puStack_1d4;
  iStack_1d8 = 0xe4e;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  uStack_1e0 = 0x6baab5;
  puStack_1d4 = puVar4;
  FUN_00679e4e();
  iStack_1d8 = unaff_EBP + -0x8c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  puStack_1dc = (undefined1 *)0x6baac5;
  FUN_00405a1d();
  puStack_1dc = (undefined1 *)0x6baacc;
  FUN_00402660();
  puStack_1dc = (undefined1 *)0x6baad3;
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iStack_1cc = 0x6baade;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar3;
  iStack_1c8 = 0x6baaf0;
  iVar1 = FUN_0041a581();
  if ((iVar1 < 0) && (iVar1 != -0x7fffbffe)) {
    iStack_1c8 = 0x6bab01;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_1c8 = 0x6bab11;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_1c8 = 0x6bab1c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  iStack_1c8 = 0x6bab29;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_1c8 = 0x6bab34;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_1c8 = 0x6bab40;
  iVar1 = FUN_00402bc3();
  if (iVar1 < 0) {
    iStack_1c8 = 0x6bab4b;
    FUN_00878dfb();
  }
  iStack_1c8 = 0x6bab53;
  FUN_008161f1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


