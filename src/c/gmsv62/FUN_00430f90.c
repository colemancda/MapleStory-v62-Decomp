/* FUN_00430f90 - 0x00430f90 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00430f90(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int unaff_EBP;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 uStack_84;
  int iStack_80;
  int iStack_7c;
  undefined4 uStack_70;
  int iStack_6c;
  int *piStack_68;
  int *piStack_64;
  
  FUN_00879bb8();
  iVar5 = *(int *)(unaff_EBP + 8);
  if (iVar5 == extraout_ECX[9] || iVar5 - extraout_ECX[9] < 0) {
    if (-1 < iVar5 - extraout_ECX[8]) {
      extraout_ECX[8] = extraout_ECX[6] + extraout_ECX[8];
      iVar5 = extraout_ECX[3];
      iVar6 = extraout_ECX[2] - iVar5;
      uVar2 = 4;
      iVar7 = extraout_ECX[4];
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(int *)(unaff_EBP + -0x20) = iVar6;
      extraout_ECX[3] = (iVar5 * 3) / 4;
      iVar5 = extraout_ECX[5];
      iVar7 = iVar7 - iVar5;
      iVar1 = extraout_ECX[7];
      *(int *)(unaff_EBP + -0x1c) = iVar7;
      extraout_ECX[5] = (iVar5 * 3) / 4;
      if (0 < iVar1) {
        *(int *)(unaff_EBP + -0x10) = iVar7 - (iVar7 >> 0x1f);
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) >> 1;
        *(int *)(unaff_EBP + -0x14) = iVar6 - (iVar6 >> 0x1f);
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) >> 1;
        while( true ) {
          piStack_64 = (int *)0x0;
          piStack_68 = (int *)0xff;
          iStack_6c = 0xc00614a4;
          *(undefined4 **)(unaff_EBP + -0x24) = &uStack_70;
          uStack_70 = uVar2;
          FUN_00424e0a();
          *(undefined4 *)(unaff_EBP + -4) = 0;
          iStack_7c = 0x43104a;
          FUN_0042517f();
          iStack_80 = 0x431059;
          iStack_7c = iVar6;
          iVar5 = *extraout_ECX - *(int *)(unaff_EBP + -0x14);
          FUN_0042517f();
          iStack_7c = iVar5;
          *(int **)(unaff_EBP + -0x30) = &iStack_7c;
          iStack_80 = 0;
          uStack_84 = 0x43106a;
          FUN_00424dd7();
          iStack_80 = 0;
          uStack_84 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          uVar2 = FUN_00434401();
          uStack_84 = FUN_0042517f(uVar2);
          uVar2 = FUN_00437287();
          *(undefined4 **)(unaff_EBP + -0x30) = &uStack_84;
          uStack_84 = extraout_ECX_00;
          FUN_00424dbc(uVar2);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_0042e5bf(unaff_EBP + 8);
          bVar8 = DAT_0097c1ac == 0;
          *(undefined4 *)(unaff_EBP + -4) = 2;
          if (bVar8) {
            piStack_64 = (int *)0x80004003;
            piStack_68 = (int *)0x4310bf;
            FUN_00878dfb();
          }
          piStack_64 = (int *)(unaff_EBP + -0x2c);
          piStack_68 = (int *)0x4310ce;
          puVar3 = (undefined4 *)FUN_00429328();
          piStack_68 = (int *)*puVar3;
          piStack_64 = (int *)0x1;
          iStack_6c = 0x4310db;
          FUN_0040ee87();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (*(int *)(unaff_EBP + 8) == 0) {
            piStack_64 = (int *)0x80004003;
            piStack_68 = (int *)0x4310ee;
            FUN_00878dfb();
          }
          piStack_64 = (int *)(unaff_EBP + -0x28);
          piStack_68 = (int *)0x4310fa;
          piVar4 = (int *)FUN_0042fb5e();
          iVar5 = *piVar4;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          if (iVar5 == 0) {
            piStack_64 = (int *)0x80004003;
            piStack_68 = (int *)0x43110e;
            FUN_00878dfb();
          }
          iVar5 = *(int *)*piVar4;
          uStack_70 = *(undefined4 *)(unaff_EBP + -0x60);
          iStack_6c = *(int *)(unaff_EBP + -0x5c);
          piStack_68 = *(int **)(unaff_EBP + -0x58);
          *(int **)(unaff_EBP + -0x24) = (int *)*piVar4;
          piStack_64 = *(int **)(unaff_EBP + -0x54);
          iVar5 = (**(code **)(iVar5 + 100))();
          if (iVar5 < 0) {
            iStack_7c = *(int *)(unaff_EBP + -0x24);
            uStack_84 = 0x431137;
            iStack_80 = iVar5;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
            iStack_7c = 0x431148;
            (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iStack_7c = 0x431155;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            iStack_7c = 0x431160;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
            iStack_7c = 0x431171;
            (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
          }
          iStack_7c = 0x43117d;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
          iStack_7c = unaff_EBP + -0x50;
          iStack_80 = 0x43118c;
          iVar5 = FUN_00402e32();
          if (iVar5 < 0) {
            iStack_7c = 0x431198;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iStack_7c = 0x4311a2;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
          iStack_7c = unaff_EBP + -0x40;
          iStack_80 = 0x4311ac;
          iVar5 = FUN_00402e32();
          if (iVar5 < 0) {
            iStack_7c = 0x4311b8;
            FUN_00878dfb();
          }
          piVar4 = *(int **)(unaff_EBP + 8);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          if (piVar4 == (int *)0x0) {
            iStack_7c = 0x4311cd;
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + 8);
          }
          uStack_84 = *(undefined4 *)(unaff_EBP + -0x50);
          iStack_80 = *(undefined4 *)(unaff_EBP + -0x4c);
          iVar5 = *piVar4;
          iStack_7c = *(int *)(unaff_EBP + -0x48);
          *(int **)(unaff_EBP + -0x24) = piVar4;
          iVar5 = (**(code **)(iVar5 + 0x110))
                            (piVar4,0,*(undefined4 *)(unaff_EBP + -0x40),
                             *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                             *(undefined4 *)(unaff_EBP + -0x34));
          if (iVar5 < 0) {
            piStack_64 = (int *)&DAT_00963df8;
            piStack_68 = *(int **)(unaff_EBP + -0x24);
            uStack_70 = 0x431208;
            iStack_6c = iVar5;
            FUN_00878e09();
          }
          piStack_64 = (int *)(unaff_EBP + -0x40);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          piStack_68 = (int *)0x431215;
          piStack_64 = (int *)FUN_00402bc3();
          if ((int)piStack_64 < 0) {
            piStack_68 = (int *)0x431220;
            FUN_00878dfb();
          }
          piStack_64 = (int *)(unaff_EBP + -0x50);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          piStack_68 = (int *)0x43122d;
          piStack_64 = (int *)FUN_00402bc3();
          if ((int)piStack_64 < 0) {
            piStack_68 = (int *)0x431238;
            FUN_00878dfb();
          }
          piStack_64 = *(int **)(unaff_EBP + 8);
          piStack_68 = *(int **)(unaff_EBP + 8);
          *(int ***)(unaff_EBP + -0x30) = &piStack_64;
          if (piStack_68 != (int *)0x0) {
            iStack_6c = 0x431250;
            (**(code **)(*piStack_68 + 4))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          piStack_68 = (int *)0x431259;
          FUN_00424e82();
          piStack_68 = (int *)0x431260;
          FUN_00427af9();
          piStack_64 = *(int **)(unaff_EBP + 8);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          uVar2 = extraout_ECX_01;
          if (piStack_64 != (int *)0x0) {
            piStack_68 = (int *)0x431271;
            (**(code **)(*piStack_64 + 8))();
            uVar2 = extraout_ECX_02;
          }
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
          if (extraout_ECX[7] <= *(int *)(unaff_EBP + -0x18)) break;
          iVar6 = *(int *)(unaff_EBP + -0x20);
        }
      }
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


