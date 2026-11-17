/* FUN_006b2535 - 0x006b2535 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b2535(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  undefined4 *puStack_64;
  
  FUN_00879bb8();
  puStack_64 = (undefined4 *)0x0;
  iStack_68 = 0;
  puStack_74 = (undefined1 *)&iStack_6c;
  *(int **)(unaff_EBP + -0x18) = &iStack_6c;
  iStack_70 = 0x783;
  FUN_00679e4e();
  iStack_70 = 0x6b256a;
  FUN_008163ca();
  puStack_64 = &DAT_00980690;
  iStack_68 = 0x6b2578;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_64 = &DAT_00980690;
  iStack_68 = 0x6b2585;
  FUN_00403191();
  puStack_64 = (undefined4 *)0x0;
  iStack_68 = 0;
  iStack_6c = unaff_EBP + -0x50;
  iStack_70 = unaff_EBP + -0x40;
  *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_74;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&puStack_74,0x4e9);
  iVar2 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_6c = 0x6b25ce;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
  puStack_64 = (undefined4 *)(unaff_EBP + -0x18);
  iStack_68 = 0x6b25e0;
  puStack_64 = (undefined4 *)FUN_00404b30();
  if (((int)puStack_64 < 0) && (puStack_64 != (undefined4 *)0x80004002)) {
    iStack_68 = 0x6b25f1;
    FUN_00878dfb();
  }
  puStack_64 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_68 = 0x6b25fe;
  puStack_64 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_64 < 0) {
    iStack_68 = 0x6b2609;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_64 = (undefined4 *)(unaff_EBP + -0x40);
  iStack_68 = 0x6b2616;
  puStack_64 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_64 < 0) {
    iStack_68 = 0x6b2621;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_64 = (undefined4 *)(unaff_EBP + -0x50);
  iStack_68 = 0x6b262e;
  puStack_64 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_64 < 0) {
    iStack_68 = 0x6b2639;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  puStack_64 = (undefined4 *)0x112a;
  iStack_68 = unaff_EBP + -0x18;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  iStack_6c = 0x6b265c;
  puStack_64 = (undefined4 *)FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_68 = 0x6b2669;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_64 = (undefined4 *)0x6b2675;
  FUN_00402676();
  puStack_64 = (undefined4 *)0x578;
  iStack_68 = 0x6b2684;
  iVar2 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar2 == 0) {
    puStack_64 = (undefined4 *)0x0;
  }
  else {
    puStack_64 = (undefined4 *)0x6b2696;
    puStack_64 = (undefined4 *)FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_68 = 0x6b26aa;
  iVar2 = FUN_00450382();
  puStack_64 = (undefined4 *)(unaff_EBP + -0x30);
  iStack_68 = 1;
  iStack_6c = 0x9f;
  iStack_70 = 0x9b;
  puStack_74 = (undefined1 *)0x7d0;
  (**(code **)(**(int **)(iVar2 + 4) + 0x20))(extraout_ECX);
  *(undefined4 *)(unaff_EBP + -0x14) = 0xfffffaa8;
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) - extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0x7d1;
  *(undefined4 *)(unaff_EBP + -0x18) = 10;
  piVar4 = (int *)(extraout_ECX + 0x558);
  do {
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x1c,0x112b);
    uVar1 = *puVar3;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_0041354c(unaff_EBP + -0x24,uVar1,*(int *)(unaff_EBP + -0x10) + -2000);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00402676();
    iVar2 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x20) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar2 = FUN_00450382(uVar1);
    (**(code **)(**(int **)(iVar2 + 4) + 0x20))
              (extraout_ECX,*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x18),
               0x97,1,unaff_EBP + -0x30);
    (**(code **)(*(int *)(*piVar4 + 4) + 0x1c))
              (*(int *)(*(int *)(DAT_00978358 + 0x1744) + *(int *)(unaff_EBP + -0x14) + 4 +
                       (int)piVar4) != 0);
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 0x22;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    piVar4 = piVar4 + 2;
  } while (*(int *)(unaff_EBP + -0x10) + -0x7d1 < 3);
  puVar3 = (undefined4 *)FUN_004489f5(unaff_EBP + -0x14);
  piVar4 = (int *)*puVar3;
  *(undefined2 *)(unaff_EBP + -0x40) = 0xd;
  *(int **)(unaff_EBP + -0x38) = piVar4;
  iVar2 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  (**(code **)(iVar2 + 4))(piVar4);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x18);
  iVar2 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar4;
  iVar2 = *piVar4;
  *(int **)(unaff_EBP + -0x1c) = piVar4;
  iVar2 = (**(code **)(iVar2 + 0xfc))
                    (piVar4,*(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                     *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34));
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x1c),&DAT_00963df8);
  }
  piVar4 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iVar2 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar2 < 0) {
    FUN_00878dfb(iVar2);
  }
  piVar4 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  piVar4 = (int *)FUN_004489f5(unaff_EBP + -0x1c);
  iVar2 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (iVar2 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar4 = (int *)*piVar4;
  iVar2 = (**(code **)(*piVar4 + 0xb4))(piVar4,0xffffffff);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar4,&DAT_00963df8);
  }
  piVar4 = *(int **)(unaff_EBP + -0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  *(undefined4 *)(extraout_ECX + 0x56c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


