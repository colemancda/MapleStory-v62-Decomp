/* FUN_0042c33e - 0x0042c33e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0042c33e(void)

{
  short *psVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int unaff_EBP;
  int iStack_c4;
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  int iStack_b0;
  int *piStack_ac;
  int iStack_a8;
  int iStack_a4;
  short *local_a0;
  int iStack_9c;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) <= extraout_ECX[3]) {
    uVar6 = 0;
    goto LAB_0042c74a;
  }
  if (*extraout_ECX == 0) {
    iStack_9c = 0x42c519;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_9c = 0x42c525;
    FUN_00403191();
    iStack_9c = 0;
    local_a0 = (short *)(unaff_EBP + -0x54);
    iStack_a4 = unaff_EBP + -100;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_a8 = 0x42c53b;
    piStack_ac = (int *)FUN_00411641();
    *(int **)(unaff_EBP + -0x10) = &iStack_a8;
    iStack_b0 = 0x42c547;
    FUN_004033a1();
    piStack_ac = (int *)(unaff_EBP + -0x84);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_b0 = 0x42c557;
    FUN_00405a1d();
    iStack_b0 = 0x42c55e;
    FUN_00402660();
    iStack_b0 = 0x42c565;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    local_a0 = (short *)0x42c570;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x1c) = iVar4;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (iVar4 != 0) {
      iStack_9c = 0x42c58b;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_9c = 0x42c599;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_9c = 0x42c5a9;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_9c = 0x42c5b4;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_9c = 0x42c5c1;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_9c = 0x42c5cc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_9c = 0x42c5d9;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_9c = 0x42c5e4;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 8) != 0) {
      iVar4 = FUN_0040cf4d();
      if (iVar4 != 0) {
        FUN_0087a1b0();
        iStack_9c = 0;
        iStack_a4 = 0;
        iStack_a8 = 0x42c612;
        local_a0 = (short *)&stack0xffffff6c;
        FUN_0040263d();
        iStack_a8 = 0x42c619;
        iStack_a8 = FUN_0040cf4d();
        piStack_ac = (int *)0x42c61f;
        iStack_a4 = FUN_0042517f();
        iStack_a8 = 0x42c627;
        iStack_a4 = FUN_00412335();
        *(short ***)(unaff_EBP + -0x10) = &local_a0;
        iStack_a8 = 0x42c633;
        FUN_004033a1();
        iStack_a4 = unaff_EBP + -0x94;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iStack_a8 = 0x42c646;
        FUN_0040263d();
        iStack_a8 = 0x42c64d;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        local_a0 = (short *)0x42c658;
        iVar4 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x20) = iVar4;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        if (iVar4 != 0) {
          iStack_9c = 0x42c66e;
          iVar4 = FUN_00404b30();
          if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
            iStack_9c = 0x42c67c;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iStack_9c = 0x42c68c;
        iVar4 = FUN_00402bc3();
        if (iVar4 < 0) {
          iStack_9c = 0x42c697;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
LAB_0042c727:
          FUN_004027eb();
          dVar3 = (double)CONCAT44(iStack_b0,local_b8._4_4_);
          dVar2 = (double)CONCAT44(local_b8._0_4_,local_c0._4_4_);
        }
        else {
          iVar4 = FUN_0040cf4d();
          if (iVar4 == 0) goto LAB_0042c727;
          iStack_9c = 0;
          iStack_a4 = 0;
          local_a0 = (short *)0x3ff00000;
          iStack_a8 = extraout_ECX[6];
          *(int ***)(unaff_EBP + -0x10) = &piStack_ac;
          iStack_b0 = 0;
          local_b8._4_4_ = 0x42c6c8;
          piStack_ac = extraout_ECX_02;
          FUN_00424e0a();
          unique0x10000427 = (double)extraout_ECX[5];
          unique0x10000437 = (double)extraout_ECX[4];
          iStack_c4 = unaff_EBP + -0x14;
          *(undefined1 **)(unaff_EBP + -0x34) = local_c0;
          local_c0._0_4_ = extraout_ECX_03;
          FUN_00424dbc();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          iStack_c4 = 0x42c6f0;
          FUN_00424e82();
          iStack_c4 = 0x42c6f7;
          FUN_0042b7b9();
          psVar1 = (short *)extraout_ECX[2];
          if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
            iStack_9c = 100;
            iStack_a4 = 0x42c714;
            local_a0 = psVar1;
            FUN_00433c19();
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          dVar2 = unique0x10000505;
          dVar3 = unique0x10000515;
          if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
            iStack_9c = 0x42c725;
            (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
            dVar2 = stack0xffffff44;
            dVar3 = stack0xffffff4c;
          }
        }
        iStack_b0 = (int)((ulonglong)dVar3 >> 0x20);
        local_b8._4_4_ = SUB84(dVar3,0);
        local_b8._0_4_ = (undefined4)((ulonglong)dVar2 >> 0x20);
        local_c0._4_4_ = SUB84(dVar2,0);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piVar5 = *(int **)(unaff_EBP + 8);
LAB_0042c4de:
        if (piVar5 != (int *)0x0) {
          iStack_9c = 0x42c4ec;
          (**(code **)(*piVar5 + 8))();
        }
        goto LAB_0042c743;
      }
    }
    FUN_004027eb();
  }
  else if (*extraout_ECX == 1) {
    iStack_9c = 0x42c37c;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    iStack_9c = unaff_EBP + -0x44;
    local_a0 = (short *)0x42c38b;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_9c = 0x42c397;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
    iStack_9c = 0x42c3a8;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x30));
    iStack_9c = unaff_EBP + -0x30;
    local_a0 = (short *)0x42c3b2;
    iVar4 = FUN_00402e32();
    if (iVar4 < 0) {
      iStack_9c = 0x42c3be;
      FUN_00878dfb();
    }
    iStack_9c = 0;
    local_a0 = (short *)(unaff_EBP + -0x44);
    iStack_a4 = unaff_EBP + -0x30;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_a8 = 0x42c3d4;
    piStack_ac = (int *)FUN_00411641();
    *(int **)(unaff_EBP + 8) = &iStack_a8;
    iStack_b0 = 0x42c3e0;
    FUN_004033a1();
    piStack_ac = (int *)(unaff_EBP + -0x74);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iStack_b0 = 0x42c3ed;
    FUN_00405a1d();
    iStack_b0 = 0x42c3f4;
    FUN_00402660();
    iStack_b0 = 0x42c3fb;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    local_a0 = (short *)0x42c406;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x18) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar4 != 0) {
      iStack_9c = 0x42c41c;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_9c = 0x42c42d;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    iStack_9c = 0x42c43a;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_9c = 0x42c445;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    iStack_9c = 0x42c452;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_9c = 0x42c45d;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_9c = 0x42c46a;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_9c = 0x42c475;
      FUN_00878dfb();
    }
    piVar5 = (int *)0x0;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      iVar4 = FUN_0040cf4d();
      if (iVar4 != 0) {
        piStack_ac = extraout_ECX + 2;
        local_a0 = (short *)*(undefined8 *)(extraout_ECX + 10);
        iStack_9c = (int)((ulonglong)*(undefined8 *)(extraout_ECX + 10) >> 0x20);
        iStack_a4 = extraout_ECX[7];
        *(int **)(unaff_EBP + 8) = &iStack_a8;
        iStack_b0 = 0x42c4a2;
        iStack_a8 = extraout_ECX_00;
        FUN_004343e4();
        local_b8 = (undefined1  [8])(double)extraout_ECX[5];
        piStack_ac = (int *)extraout_ECX[9];
        iStack_b0 = extraout_ECX[8];
        local_c0 = (undefined1  [8])(double)extraout_ECX[4];
        *(int **)(unaff_EBP + -0x14) = &iStack_c4;
        iStack_c4 = extraout_ECX_01;
        FUN_00424dbc(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        FUN_00424e82();
        FUN_0042c761();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        piVar5 = *(int **)(unaff_EBP + -0x10);
        goto LAB_0042c4de;
      }
      piVar5 = *(int **)(unaff_EBP + -0x10);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar5 != (int *)0x0) {
      iStack_9c = 0x42c506;
      (**(code **)(*piVar5 + 8))();
    }
  }
LAB_0042c743:
  uVar6 = 1;
LAB_0042c74a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar6;
}


