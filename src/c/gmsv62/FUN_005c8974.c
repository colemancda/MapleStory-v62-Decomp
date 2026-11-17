/* FUN_005c8974 - 0x005c8974 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005c8974(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int extraout_ECX;
  uint extraout_ECX_00;
  int *extraout_ECX_01;
  int unaff_EBP;
  uint uVar10;
  int *piStack_100;
  uint uStack_d8;
  int *piStack_d4;
  int iStack_d0;
  int *piStack_cc;
  
  FUN_00879bb8();
  iVar2 = FUN_007d1e08();
  piStack_cc = (int *)(*(int *)(extraout_ECX + 0x15c) + 0x1a4);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  iStack_d0 = 0x5c89aa;
  uVar3 = FUN_00413367();
  iVar4 = *(int *)(extraout_ECX + 0x21c);
  *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
  if ((iVar4 != 0) && (999 < iVar2 - *(int *)(extraout_ECX + 0x3dc))) {
    piStack_cc = (int *)0x5c89d9;
    iVar4 = FUN_005dcae0();
    if (iVar4 == 0) {
      piStack_d4 = (int *)0x0;
    }
    else {
      piStack_d4 = *(int **)(unaff_EBP + -0x10);
      if ((int)piStack_d4 < 1) {
        piStack_d4 = *(int **)(extraout_ECX + 0x21c);
      }
    }
    piStack_cc = (int *)0x0;
    iStack_d0 = 0;
    uStack_d8 = 0x5c89f9;
    FUN_005ca219();
    *(int *)(extraout_ECX + 0x3dc) = iVar2;
  }
  if ((*(int *)(extraout_ECX + 0x2d0) != 0) && (999 < iVar2 - *(int *)(extraout_ECX + 0x3e0))) {
    piStack_cc = (int *)0x5c8a27;
    iVar4 = FUN_005dcae0();
    if (iVar4 == 0) {
      piStack_d4 = (int *)0x0;
    }
    else {
      piStack_d4 = *(int **)(unaff_EBP + -0x10);
      if ((int)piStack_d4 < 1) {
        piStack_d4 = *(int **)(extraout_ECX + 0x2d0);
      }
    }
    piStack_cc = (int *)0x0;
    iStack_d0 = 0;
    uStack_d8 = 0x5c8a47;
    FUN_005ca219();
    *(int *)(extraout_ECX + 0x3e0) = iVar2;
  }
  if ((*(int *)(extraout_ECX + 0x2c0) != 0) && (999 < iVar2 - *(int *)(extraout_ECX + 0x3e4))) {
    piStack_cc = (int *)0x5c8a75;
    iVar4 = FUN_005dcae0();
    if (iVar4 == 0) {
      piStack_d4 = (int *)0x0;
    }
    else {
      piStack_d4 = *(int **)(unaff_EBP + -0x10);
      if ((int)piStack_d4 < 1) {
        piStack_d4 = *(int **)(extraout_ECX + 0x2c0);
      }
    }
    piStack_cc = (int *)0x0;
    iStack_d0 = 0;
    uStack_d8 = 0x5c8a95;
    FUN_005ca219();
    *(int *)(extraout_ECX + 0x3e4) = iVar2;
  }
  iVar4 = *(int *)(extraout_ECX + 800);
  *(int *)(unaff_EBP + -0x1c) = iVar4;
  while (iVar4 != 0) {
    iVar4 = *(int *)(unaff_EBP + -0x1c);
    iVar2 = *(int *)((-(uint)(iVar4 != 0) & iVar4 - 0x10U) + 4);
    iVar1 = *(int *)(iVar4 + 4);
    *(uint *)(unaff_EBP + -0x1c) = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
    if ((iVar1 != 0) && (999 < *(int *)(unaff_EBP + -0x14) - *(int *)(iVar4 + 0xc))) {
      FUN_0066b9d3();
      piStack_cc = (int *)0x5c8aec;
      iVar2 = FUN_005dcae0();
      if (iVar2 == 0) {
        piStack_d4 = (int *)0x0;
      }
      else {
        piStack_d4 = *(int **)(unaff_EBP + -0x10);
        if ((int)piStack_d4 < 1) {
          piStack_d4 = *(int **)(iVar4 + 4);
        }
      }
      piStack_cc = (int *)0x0;
      iStack_d0 = 0;
      uStack_d8 = 0x5c8b09;
      FUN_005ca219();
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(unaff_EBP + -0x14);
    }
    iVar4 = *(int *)(unaff_EBP + -0x1c);
  }
  iStack_d0 = 0x5c8b26;
  piStack_cc = (int *)(extraout_ECX + 0x3b8);
  iVar4 = FUN_00413367();
  if (iVar4 != 0) {
    iStack_d0 = 0x5c8b3c;
    piStack_cc = (int *)(extraout_ECX + 0x3b8);
    iVar4 = FUN_00413367();
    if (*(int *)(unaff_EBP + -0x14) != iVar4 && -1 < *(int *)(unaff_EBP + -0x14) - iVar4) {
      uVar3 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0x3c0) = uVar3;
      piStack_cc = (int *)0x5c8b6b;
      FUN_00403191();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      piStack_cc = (int *)0x5c8b77;
      FUN_00403191();
      iVar4 = *(int *)(extraout_ECX + 0x440);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (iVar4 == 0) {
        piStack_cc = (int *)0x5c8b93;
        FUN_00878dfb();
      }
      piStack_cc = (int *)0x5c8b9e;
      piVar5 = (int *)FUN_004113e5();
      iVar4 = *piVar5;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar4 == 0) {
        piStack_cc = (int *)0x5c8bb2;
        FUN_00878dfb();
      }
      piStack_d4 = *(int **)(unaff_EBP + -0x94);
      iStack_d0 = *(int *)(unaff_EBP + -0x90);
      iVar4 = *(int *)*piVar5;
      piStack_cc = *(int **)(unaff_EBP + -0x8c);
      *(int **)(unaff_EBP + -0x28) = (int *)*piVar5;
      uStack_d8 = *(uint *)(unaff_EBP + -0x38);
      iVar4 = (**(code **)(iVar4 + 0x90))();
      if (iVar4 < 0) {
        piStack_cc = *(int **)(unaff_EBP + -0x28);
        piStack_d4 = (int *)0x5c8bf4;
        iStack_d0 = iVar4;
        FUN_00878e09();
      }
      FUN_004125d9();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      piStack_cc = (int *)0x5c8c09;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_cc = (int *)0x5c8c14;
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_cc = (int *)0x5c8c24;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        piStack_cc = (int *)0x5c8c2f;
        FUN_00878dfb();
      }
      uVar3 = FUN_0055a766();
      *(undefined4 *)(extraout_ECX + 0x3d8) = uVar3;
    }
  }
  iVar4 = FUN_005d04ff();
  if (iVar4 != 0) {
    piVar5 = (int *)(extraout_ECX + 0x3b8);
    iStack_d0 = 0x5c8c61;
    piStack_cc = piVar5;
    iVar4 = FUN_00413367();
    if (iVar4 == 0) {
LAB_005c8c91:
      if (*(int *)(extraout_ECX + 0x440) == 0) {
        piStack_cc = (int *)0x5c8ca9;
        FUN_00878dfb();
      }
      piVar5 = *(int **)(extraout_ECX + 0x440);
      iStack_d0 = 0x5c8cb9;
      piStack_cc = piVar5;
      iStack_d0 = (**(code **)(*piVar5 + 0xe0))();
      if (iStack_d0 < 0) {
        piStack_d4 = (int *)0x5c8cc9;
        piStack_cc = piVar5;
        FUN_00878e09();
      }
    }
    else {
      iStack_d0 = 0x5c8c73;
      piStack_cc = piVar5;
      iVar4 = FUN_00413367();
      if (iVar4 != 0) {
        iStack_d0 = 0x5c8c85;
        piStack_cc = piVar5;
        iVar4 = FUN_00413367();
        if (iVar4 + -500 < *(int *)(unaff_EBP + -0x14)) goto LAB_005c8c91;
      }
    }
  }
  uVar10 = -(uint)(*(int *)(extraout_ECX + 0xec) != 0) & *(int *)(extraout_ECX + 0xec) - 0xcU;
  *(uint *)(unaff_EBP + -0x20) =
       -(uint)(*(int *)(extraout_ECX + 0xf0) != 0) & *(int *)(extraout_ECX + 0xf0) - 0xcU;
  piStack_cc = (int *)(extraout_ECX + 0x34c);
  *(uint *)(unaff_EBP + -0x2c) = uVar10;
  iStack_d0 = 0x5c8cff;
  iVar4 = FUN_00413367();
  if (iVar4 != 0) {
    piStack_cc = (int *)(extraout_ECX + 0x34c);
    iStack_d0 = 0x5c8d17;
    iVar4 = FUN_00413367();
    if (-1 < *(int *)(unaff_EBP + -0x14) - iVar4) {
      uVar3 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0x354) = uVar3;
    }
  }
  piStack_cc = (int *)0x5c8d3d;
  FUN_005ce6dc();
  piStack_cc = (int *)(extraout_ECX + 0x3d0);
  iStack_d0 = 0x5c8d4f;
  iVar4 = FUN_004cd670();
  if (iVar4 == 0) {
    piStack_cc = (int *)0x5c8d5f;
    FUN_005ce84a();
    iVar4 = FUN_005c8935();
    if (iVar4 == 0) {
      FUN_005ce8c6();
      FUN_005cebbe();
    }
  }
  piStack_cc = (int *)(extraout_ECX + 0x340);
  iStack_d0 = 0x5c8d8a;
  uVar6 = FUN_00413367();
  if (0x7fffffff < uVar6) {
    if ((*(int *)(extraout_ECX + 0x274) == 0) ||
       (iVar4 = *(int *)(extraout_ECX + 0x160), iVar4 == 0)) {
      iVar4 = *(int *)(extraout_ECX + 0x15c);
    }
    piStack_cc = (int *)(iVar4 + 0x40);
    iStack_d0 = 0x5c8db9;
    iVar4 = FUN_00413367();
    if (((iVar4 == 3) || (*(int *)(uVar10 + 0x110) != 0)) &&
       (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x18) != 0)) {
      iVar4 = FUN_005d053d();
      if (iVar4 != 0) {
        piStack_cc = (int *)(unaff_EBP + -0x94);
        iStack_d0 = 0x5c8df7;
        FUN_005c5b12();
        if (1999 < *(int *)(unaff_EBP + -0x14) - *(int *)(DAT_0097813c + 0x6c)) {
          piStack_cc = (int *)0x5c8e1d;
          iVar4 = FUN_005d5a8e();
          *(int *)(unaff_EBP + -0x10) = iVar4;
          if (iVar4 != 0) {
            uVar3 = (**(code **)(*(int *)(iVar4 + 4) + 0x14))();
            *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
            (**(code **)(*(int *)(iVar4 + 4) + 0x10))();
            (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
            (**(code **)(*(int *)(extraout_ECX + 4) + 0x14))();
            piStack_cc = (int *)(*(int *)(unaff_EBP + -0x2c) + 0x11c);
            iStack_d0 = 0x5c8e6d;
            iVar4 = FUN_0048bb31();
            if (iVar4 != 0) {
              uVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x14))();
              iVar4 = *(int *)(extraout_ECX + 4);
              *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
              (**(code **)(iVar4 + 0x10))();
            }
            piStack_cc = (int *)0xffffffff;
            iStack_d0 = *(undefined4 *)(unaff_EBP + -0x10);
            piStack_d4 = (int *)0x0;
            uStack_d8 = 0;
            FUN_005d054c();
            piStack_cc = (int *)0xffffffff;
            piStack_d4 = (int *)0x0;
            uStack_d8 = 0;
            FUN_005d054c();
            *(undefined4 *)(DAT_0097813c + 0x6c) = *(undefined4 *)(unaff_EBP + -0x14);
          }
        }
      }
      piStack_cc = (int *)(extraout_ECX + 0x104);
      iStack_d0 = 0x5c8eda;
      iVar4 = FUN_00413367();
      if (iVar4 == 4) {
        piStack_cc = (int *)(unaff_EBP + -0x1c);
        iStack_d0 = unaff_EBP + -0x18;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        piStack_d4 = (int *)0x5c8ef7;
        iVar4 = FUN_005ced37();
        if (iVar4 == 0) {
          if (*(int *)(*(int *)(unaff_EBP + -0x20) + 0x240) != 0) {
            piStack_cc = (int *)(unaff_EBP + -0x1c);
            iStack_d0 = unaff_EBP + -0x18;
            piStack_d4 = (int *)0x3;
            uStack_d8 = 0x5c8f1b;
            iVar4 = FUN_005cb531();
            if (iVar4 != 0) goto LAB_005c8f1f;
          }
        }
        else {
LAB_005c8f1f:
          piStack_cc = (int *)0x0;
          iStack_d0 = 0;
          piStack_d4 = (int *)0x0;
          uStack_d8 = 1;
          *(undefined4 *)(extraout_ECX + 0x148) = 0;
          FUN_005cc564();
        }
      }
    }
  }
  if ((*(int *)(extraout_ECX + 0x124) != 0) &&
     (*(int *)(extraout_ECX + 0x124) - *(int *)(unaff_EBP + -0x14) < 0)) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    piStack_cc = (int *)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 3;
    iStack_d0 = 0x5c8f6f;
    puVar7 = (undefined4 *)FUN_00679d86();
    piStack_cc = (int *)*puVar7;
    iStack_d0 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piStack_d4 = (int *)0x5c8f85;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00402676();
    *(int ***)(unaff_EBP + -0x24) = &piStack_cc;
    iStack_d0 = 0;
    piStack_d4 = (int *)0x5c8fa5;
    FUN_00424e0a();
    iStack_d0 = *(undefined4 *)(extraout_ECX + 0x48c);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    piStack_d4 = *(int **)(extraout_ECX + 0x488);
    *(uint **)(unaff_EBP + -0x34) = &uStack_d8;
    FUN_00424dd7();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00411641();
    FUN_00424e82();
    FUN_0042b613();
    piStack_cc = *(int **)(extraout_ECX + 0x488);
    iStack_d0 = 0x5c8fec;
    iStack_d0 = FUN_007d3c48();
    piStack_d4 = *(int **)(extraout_ECX + 0x120);
    uStack_d8 = 0x5c8ff8;
    FUN_007d46ef();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(extraout_ECX + 0x124) = 0;
    FUN_00402676();
  }
  piStack_cc = (int *)(unaff_EBP + -0xb4);
  iStack_d0 = 0x5c901d;
  FUN_005c5b12();
  iVar4 = *(int *)(extraout_ECX + 1000);
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -100) = 0;
  if (999 < *(int *)(unaff_EBP + -0x14) - iVar4) {
    piStack_cc = (int *)(unaff_EBP + -0x5c);
    iStack_d0 = unaff_EBP + -100;
    piStack_d4 = (int *)(unaff_EBP + -0x4c);
    uStack_d8 = unaff_EBP - 0xb4;
    FUN_00429303();
    iVar4 = FUN_005a7eca();
    if ((iVar4 != 0) && (0 < *(int *)(unaff_EBP + -0x4c))) {
      piStack_cc = (int *)0x0;
      iStack_d0 = 0xa0;
      piStack_d4 = (int *)0x5c9078;
      FUN_0060142b();
      piStack_cc = (int *)(extraout_ECX + 0x150);
      *(undefined4 *)(unaff_EBP + -4) = 7;
      iStack_d0 = 0x5c9091;
      FUN_004b8c9b();
      piStack_cc = (int *)0x5c909c;
      FUN_00457d37();
      piStack_cc = (int *)0x5c90a7;
      FUN_00457d37();
      piStack_cc = (int *)0x5c90b6;
      FUN_004751b2();
      if ((*(int *)(unaff_EBP + -0x5c) == 0) && (*(int *)(unaff_EBP + -0x58) == 0)) {
        piVar5 = (int *)(extraout_ECX + 4);
        uVar3 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x14))();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
        piVar8 = (int *)(**(code **)(*piVar5 + 0x10))();
        *(int *)(unaff_EBP + -0x5c) = *piVar8 - **(int **)(unaff_EBP + -0x28);
        uVar3 = (**(code **)(*piVar5 + 0x14))();
        iVar4 = *piVar5;
        *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
        iVar4 = (**(code **)(iVar4 + 0x10))();
        *(int *)(unaff_EBP + -0x58) =
             *(int *)(iVar4 + 4) - *(int *)(*(int *)(unaff_EBP + -0x28) + 4);
      }
      *(undefined4 *)(extraout_ECX + 1000) = *(undefined4 *)(unaff_EBP + -0x14);
      if (*(int *)((-(uint)(*(int *)(extraout_ECX + 0xf0) != 0) &
                   *(int *)(extraout_ECX + 0xf0) - 0xcU) + 0x18) != 0) {
        piStack_cc = (int *)0x0;
        iStack_d0 = 0;
        piStack_d4 = (int *)0x1;
        uStack_d8 = 0;
        FUN_005c9cb2();
        FUN_005cc564();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
    }
  }
  iVar4 = *(int *)(DAT_0097813c + 0x5c);
  if (iVar4 != 0) {
    piStack_cc = (int *)(*(int *)(extraout_ECX + 0x15c) + 0xc);
    iStack_d0 = 0x5c916a;
    FUN_004b8c9b();
    piStack_cc = (int *)0x5c9174;
    iVar2 = FUN_005d04b9();
    if (iVar2 != 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(DAT_0097813c + 0x60);
      if (iVar4 != extraout_ECX) {
        iVar2 = FUN_005c4e46();
        if (iVar2 != 0) {
          piStack_cc = (int *)0x5c91a5;
          piVar5 = (int *)FUN_005c9ce2();
          *(bool *)(unaff_EBP + -0x2d) =
               *(int *)((-(uint)(*piVar5 != 0) & *piVar5 - 0xcU) + 0x240) == 0;
          if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
            piStack_cc = (int *)0x5c91c9;
            (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
          }
          if (*(char *)(unaff_EBP + -0x2d) != '\0') {
            piStack_cc = (int *)(iVar4 + 4);
            iStack_d0 = 1;
            piStack_d4 = (int *)0x5c91dd;
            FUN_005cc3d9();
          }
        }
        if ((((*(int *)(DAT_00978368 + 0x2b40) != 0) &&
             (*(int *)(DAT_00978368 + 0x2bf2) == *(int *)(DAT_00978368 + 0x2088))) ||
            (*(int *)(DAT_00978140 + 0x2c) == 0)) &&
           (0x5db < *(int *)(unaff_EBP + -0x14) - *(int *)(unaff_EBP + -0x10))) {
          piStack_cc = (int *)(unaff_EBP + -0xa4);
          iStack_d0 = 0x5c9226;
          FUN_005c5b12();
          piStack_cc = (int *)(unaff_EBP + -0x94);
          iStack_d0 = 0x5c9235;
          FUN_005c5b12();
          piStack_cc = (int *)(unaff_EBP + -0xa4);
          iStack_d0 = unaff_EBP + -0xc4;
          piStack_d4 = (int *)0x5c9250;
          iVar2 = (*DAT_0097b5a0)();
          if (iVar2 != 0) {
            piStack_cc = (int *)0x0;
            iStack_d0 = 0xa1;
            piStack_d4 = (int *)0x5c9267;
            FUN_0060142b();
            piStack_cc = (int *)(extraout_ECX + 0x150);
            *(undefined4 *)(unaff_EBP + -4) = 8;
            iStack_d0 = 0x5c9280;
            FUN_004b8c9b();
            piStack_cc = (int *)0x5c928b;
            FUN_00457d37();
            piStack_cc = (int *)0x5c929e;
            FUN_00457d37();
            piStack_cc = (int *)(iVar4 + 0x150);
            iStack_d0 = 0x5c92b0;
            FUN_004b8c9b();
            piStack_cc = (int *)0x5c92bb;
            FUN_00457d37();
            piStack_cc = (int *)0x5c92ca;
            FUN_004751b2();
            *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x14);
            piStack_cc = (int *)0x5c92db;
            piVar5 = (int *)FUN_005c9ce2();
            *(undefined4 *)(unaff_EBP + -0x18) =
                 *(undefined4 *)((-(uint)(*piVar5 != 0) & *piVar5 - 0xcU) + 0x18);
            if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
              piStack_cc = (int *)0x5c92fb;
              (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
            }
            if (*(int *)(unaff_EBP + -0x18) != 0) {
              piStack_cc = (int *)0x0;
              iStack_d0 = 0;
              piStack_d4 = (int *)0x0;
              uStack_d8 = 0;
              FUN_005c9cb2();
              FUN_005cc564();
            }
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_0045ebca();
          }
        }
      }
      *(undefined4 *)(DAT_0097813c + 0x60) = *(undefined4 *)(unaff_EBP + -0x10);
    }
  }
  iVar4 = *(int *)(extraout_ECX + 0x410);
  *(int *)(unaff_EBP + -0x1c) = iVar4;
  while (iVar4 != 0) {
    piVar5 = *(int **)(unaff_EBP + -0x1c);
    iVar4 = *(int *)((-(uint)(piVar5 != (int *)0x0) & (uint)(piVar5 + -4)) + 4);
    *(int **)(unaff_EBP + -0x24) = piVar5;
    *(uint *)(unaff_EBP + -0x1c) = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
    iStack_d0 = 0x5c9372;
    piStack_cc = piVar5;
    iVar4 = FUN_00413367();
    if (-1 < *(int *)(unaff_EBP + -0x14) - iVar4) {
      piStack_cc = (int *)0x5c938a;
      FUN_005c634c();
      piStack_cc = piVar5 + 0x27;
      iStack_d0 = 0x5c939c;
      uVar3 = FUN_004cd670();
      iStack_d0 = piVar5[0x26];
      *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
      piStack_d4 = piVar5 + 0x24;
      uStack_d8 = 0x5c93b1;
      uVar3 = FUN_00413367();
      uStack_d8 = piVar5[0x23];
      *(undefined4 *)(unaff_EBP + -0x7c) = uVar3;
      uVar3 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x78) = uVar3;
      uVar3 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x84) = uVar3;
      uVar3 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x60) = uVar3;
      uVar3 = FUN_004cd670();
      *(undefined4 *)(unaff_EBP + -0x6c) = uVar3;
      piStack_100 = (int *)0x5c9408;
      uVar3 = FUN_00413367();
      piStack_100 = (int *)piVar5[0x14];
      *(undefined4 *)(unaff_EBP + -0x74) = uVar3;
      uVar3 = FUN_004cd670(piVar5 + 0x12);
      *(undefined4 *)(unaff_EBP + -0x68) = uVar3;
      piStack_cc = piVar5 + 0xf;
      iStack_d0 = 0x5c9429;
      uVar3 = FUN_00413367();
      iStack_d0 = piVar5[0xe];
      *(undefined4 *)(unaff_EBP + -0x80) = uVar3;
      piStack_d4 = piVar5 + 0xc;
      uStack_d8 = 0x5c9438;
      uVar3 = FUN_004cd670();
      uStack_d8 = piVar5[0xb];
      *(undefined4 *)(unaff_EBP + -0x70) = uVar3;
      uVar3 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x50) = uVar3;
      *(int **)(unaff_EBP + -0x34) = piVar5 + 6;
      uVar3 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x54) = uVar3;
      FUN_004b8c9b();
      piStack_cc = *(int **)(unaff_EBP + -0x7c);
      iStack_d0 = *(undefined4 *)(unaff_EBP + -0x78);
      piStack_d4 = *(int **)(unaff_EBP + -0x84);
      uStack_d8 = *(uint *)(unaff_EBP + -0x60);
      FUN_005c9d88();
      piStack_cc = (int *)0x5c94a5;
      FUN_005c634c();
      piStack_cc = *(int **)(unaff_EBP + -0x34);
      iStack_d0 = 0x5c94b0;
      iVar4 = FUN_00413367();
      if ((iVar4 == 0x2195ac) && (*(int *)(unaff_EBP + -0x20) != *(int *)(unaff_EBP + -0x18))) {
        piStack_cc = (int *)(extraout_ECX + 0x334);
        iStack_d0 = 0x5c94d3;
        FUN_00413367();
        uVar3 = FUN_004133b5();
        *(undefined4 *)(extraout_ECX + 0x33c) = uVar3;
      }
      piStack_cc = (int *)0x5c9506;
      FUN_005d199f();
    }
    iVar4 = *(int *)(unaff_EBP + -0x1c);
  }
  iVar4 = *(int *)(extraout_ECX + 0x424);
  *(int *)(unaff_EBP + -0x1c) = iVar4;
  uVar10 = uStack_d8;
  while (iVar4 != 0) {
    piVar5 = *(int **)(unaff_EBP + -0x1c);
    iVar4 = *(int *)((-(uint)(piVar5 != (int *)0x0) & (uint)(piVar5 + -4)) + 4);
    uStack_d8 = -(uint)(iVar4 != 0) & iVar4 + 0x10U;
    iVar4 = *piVar5;
    *(int **)(unaff_EBP + -0x54) = piVar5;
    *(uint *)(unaff_EBP + -0x1c) = uStack_d8;
    if (-1 < *(int *)(unaff_EBP + -0x14) - iVar4) {
      if (piVar5[1] == 0x4e23ef) {
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        *(undefined4 *)(unaff_EBP + -4) = 9;
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        uStack_d8 = uVar10;
        do {
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            FUN_0087a1b0();
            iStack_d0 = *(int *)(unaff_EBP + -0x10) + -1;
            piStack_d4 = (int *)0x5c958a;
            piStack_cc = (int *)&stack0xffffff3c;
            FUN_0087a25a();
          }
          if ((undefined4 *)piVar5[4] == (undefined4 *)0x0) {
            piStack_cc = (int *)0x0;
          }
          else {
            piStack_cc = *(int **)piVar5[4];
          }
          iStack_d0 = unaff_EBP + -0x20;
          piStack_d4 = (int *)0x5c95a5;
          FUN_0041354c();
          piStack_cc = (int *)piVar5[6];
          iStack_d0 = piVar5[5];
          piStack_d4 = (int *)piVar5[2];
          uStack_d8 = 0x5c95c3;
          FUN_00411641();
          *(uint **)(unaff_EBP + -0x50) = &uStack_d8;
          uStack_d8 = extraout_ECX_00;
          FUN_004033a1();
          FUN_005ca3b4();
          if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
            piStack_cc = (int *)0x5c95e7;
            (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
          }
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        } while (*(int *)(unaff_EBP + -0x10) < 3);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00402676();
      }
      else {
        piStack_cc = (int *)piVar5[6];
        iStack_d0 = piVar5[5];
        piStack_d4 = (int *)piVar5[2];
        *(uint **)(unaff_EBP + -0x50) = &uStack_d8;
        FUN_004059fd();
        FUN_005ca3b4();
        if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
          piStack_cc = (int *)0x5c9633;
          (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
        }
      }
      if (piVar5[3] != 0) {
        piStack_cc = (int *)piVar5[1];
        iStack_d0 = 0x5c9642;
        FUN_007d3e08();
      }
      piStack_cc = (int *)0x5c9652;
      FUN_005d1b29();
      uVar10 = uStack_d8;
    }
    uStack_d8 = uVar10;
    uVar10 = uStack_d8;
    iVar4 = *(int *)(unaff_EBP + -0x1c);
  }
  piStack_cc = (int *)0x5c9665;
  uStack_d8 = uVar10;
  iVar4 = FUN_005cef6f();
  *(int *)(unaff_EBP + -0x24) = iVar4;
  if (iVar4 != 0) {
    piStack_cc = (int *)(extraout_ECX + 0x3d0);
    iStack_d0 = 0x5c967e;
    iVar4 = FUN_004cd670();
    if (iVar4 == 0) {
      if ((*(int *)(extraout_ECX + 0x274) == 0) ||
         (iVar4 = *(int *)(extraout_ECX + 0x160), iVar4 == 0)) {
        iVar4 = *(int *)(extraout_ECX + 0x15c);
      }
      if (0 < *(int *)(iVar4 + 0x1f0)) {
        _rand();
        uVar3 = FUN_004133b5();
        *(undefined4 *)(extraout_ECX + 0x348) = uVar3;
        FUN_005c5f49();
      }
    }
  }
  piStack_cc = (int *)(extraout_ECX + 0x3d0);
  iStack_d0 = 0x5c96dd;
  iVar4 = FUN_004cd670();
  if (iVar4 == 0) {
    iVar4 = FUN_007f1573();
  }
  else {
    iVar4 = -1;
  }
  piStack_cc = *(int **)(*(int *)(unaff_EBP + -0x2c) + 0x140);
  iStack_d0 = 0x5c9704;
  FUN_005c5ab5();
  if (iVar4 == -1) {
    piStack_cc = (int *)(extraout_ECX + 0x340);
    iStack_d0 = 0x5c971b;
    iVar4 = FUN_00413367();
    if ((iVar4 < 0) || (*(int *)(unaff_EBP + -0x24) != 0)) {
      piStack_cc = (int *)(extraout_ECX + 0x3d0);
      iStack_d0 = 0x5c9738;
      iVar4 = FUN_004cd670();
      if (iVar4 == 0) {
        piStack_cc = (int *)(extraout_ECX + 0x104);
        iStack_d0 = 0x5c9756;
        iVar4 = FUN_00413367();
        if (iVar4 != 3) {
          piStack_cc = (int *)(extraout_ECX + 0x104);
          iStack_d0 = 0x5c976b;
          iVar4 = FUN_00413367();
          if (iVar4 != 4) goto LAB_005c9782;
        }
        piStack_cc = (int *)0x0;
        iStack_d0 = 0;
        piStack_d4 = (int *)0x0;
        uStack_d8 = 0;
        FUN_005cc564();
      }
    }
  }
LAB_005c9782:
  piStack_cc = (int *)0x5c978a;
  FUN_005cfb64();
  piStack_cc = (int *)0x5c9794;
  FUN_005c7601();
  piStack_cc = (int *)0x5c979e;
  FUN_005c775e();
  *(undefined4 *)(extraout_ECX + 0x488) = *(undefined4 *)(extraout_ECX + 0x480);
  *(undefined4 *)(extraout_ECX + 0x48c) = *(undefined4 *)(extraout_ECX + 0x484);
  piStack_cc = (int *)0x5c97c3;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
  piStack_cc = (int *)(unaff_EBP + -0x44);
  iStack_d0 = 0x5c97d1;
  iVar4 = FUN_00402e32();
  if (iVar4 < 0) {
    piStack_cc = (int *)0x5c97dd;
    FUN_00878dfb();
  }
  iVar4 = *(int *)(extraout_ECX + 0xec);
  *(undefined4 *)(unaff_EBP + -4) = 10;
  if (iVar4 == 0) {
    piStack_cc = (int *)0x5c97f6;
    FUN_00878dfb();
  }
  iVar4 = **(int **)(extraout_ECX + 0xec);
  uStack_d8 = 0;
  piStack_d4 = *(int **)(unaff_EBP + -0x44);
  iStack_d0 = *(undefined4 *)(unaff_EBP + -0x40);
  piStack_cc = *(int **)(unaff_EBP + -0x3c);
  *(int **)(unaff_EBP + -0x24) = *(int **)(extraout_ECX + 0xec);
  iVar4 = (**(code **)(iVar4 + 0x8c))();
  if (iVar4 < 0) {
    piStack_100 = *(int **)(unaff_EBP + -0x24);
    FUN_00878e09(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_100 = (int *)0x5c9849;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    piStack_100 = (int *)0x5c9856;
    FUN_00878dfb();
  }
  if ((*(int *)(extraout_ECX + 0x128) != 0) &&
     (*(int *)(extraout_ECX + 0x128) - *(int *)(unaff_EBP + -0x14) < 0)) {
    if (*(int *)(extraout_ECX + 0x440) == 0) {
      piStack_100 = (int *)0x5c987d;
      FUN_00878dfb();
    }
    piVar5 = *(int **)(extraout_ECX + 0x440);
    piStack_100 = piVar5;
    iVar4 = (**(code **)(*piVar5 + 0xe0))();
    if (iVar4 < 0) {
      piStack_100 = piVar5;
      FUN_00878e09(iVar4);
    }
    *(undefined4 *)(extraout_ECX + 0x128) = 0;
  }
  if (*(int *)(*(int *)(extraout_ECX + 0x15c) + 0x1d8) != 0) {
    piStack_100 = (int *)(extraout_ECX + 0x34c);
    iVar4 = FUN_00413367();
    if ((iVar4 != 0) &&
       (*(int *)(extraout_ECX + 0x14c) = *(int *)(extraout_ECX + 0x14c) + 1,
       ((byte)*(undefined4 *)(extraout_ECX + 0x14c) & 3) < 2)) {
      if (*(int *)(extraout_ECX + 0x440) == 0) {
        piStack_100 = (int *)0x5c98f3;
        FUN_00878dfb();
      }
      piVar5 = *(int **)(extraout_ECX + 0x440);
      piStack_100 = piVar5;
      iVar4 = (**(code **)(*piVar5 + 0xe0))();
      if (iVar4 < 0) {
        piStack_100 = piVar5;
        FUN_00878e09(iVar4);
      }
    }
  }
  if (*(int *)(*(int *)(extraout_ECX + 0x15c) + 0x1d8) == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    uVar3 = FUN_00429303();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
    piVar5 = *(int **)(extraout_ECX + 0x464);
    if (piVar5 != (int *)0x0) {
      piVar8 = piVar5 + *(int *)(extraout_ECX + 0x468);
      for (; piVar5 < piVar8; piVar5 = piVar5 + 1) {
        if (*piVar5 != 0) {
          iVar4 = *piVar5;
          goto LAB_005c9959;
        }
      }
    }
    iVar4 = 0;
LAB_005c9959:
    *(int *)(unaff_EBP + -0x48) = iVar4;
    while (iVar4 != 0) {
      piStack_100 = (int *)(unaff_EBP + -0x48);
      puVar7 = (undefined4 *)FUN_004b9043();
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + 1;
      *(undefined4 *)(unaff_EBP + -0x20) = *puVar7;
      if ((*(int *)(unaff_EBP + -0x2c) == 1) ||
         (uVar10 = (*DAT_0097b704)(), *(uint *)(unaff_EBP + -0x20) < uVar10)) {
        piStack_100 = (int *)0x5c99a4;
        FUN_005d1070();
        if (*(int *)(unaff_EBP + -0x18) < *(int *)(unaff_EBP + -0x20)) {
          piStack_100 = (int *)(*(int *)(extraout_ECX + 0x15c) + 0x1b0);
          iVar4 = FUN_004cd670();
          if (iVar4 == 0) {
            piStack_100 = *(int **)(unaff_EBP + -0x28);
            FUN_005d019c();
            piStack_100 = *(int **)(extraout_ECX + 0xec);
            piVar5 = (int *)&stack0xffffff04;
            *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff04;
            if (piStack_100 != (int *)0x0) {
              (**(code **)(*piStack_100 + 4))();
              piVar5 = extraout_ECX_01;
            }
            *(int ***)(unaff_EBP + -0x34) = &piStack_100;
            piStack_100 = piVar5;
            FUN_0041160e(extraout_ECX + 0x440);
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            FUN_005c9cab();
            uVar3 = FUN_00449713();
            FUN_005cd4b4(uVar3);
          }
          else if (*(int *)(unaff_EBP + -0x10) != 0) {
            piStack_100 = (int *)(*(int *)(extraout_ECX + 0x15c) + 0x7c);
            FUN_00413367();
            iVar4 = FUN_00413367(*(int *)(extraout_ECX + 0x15c) + 0x7c,
                                 *(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x84));
            uVar3 = FUN_00413367(*(int *)(extraout_ECX + 0x15c) + 0x1c8,
                                 *(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x1d0));
            *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
            uVar3 = FUN_00413367(*(int *)(extraout_ECX + 0x15c) + 0x1bc,
                                 *(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x1c4));
            *(undefined4 *)(unaff_EBP + -0x34) = uVar3;
            uVar3 = FUN_004b8c9b(*(int *)(extraout_ECX + 0x15c) + 0xc,
                                 *(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x14));
            piStack_100 = (int *)((iVar4 * *(int *)(unaff_EBP + -0x28)) / 100);
            FUN_004ed012(uVar3,*(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x24)
                        );
          }
          *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x20);
        }
      }
      iVar4 = *(int *)(unaff_EBP + -0x48);
    }
    piStack_100 = (int *)(*(int *)(extraout_ECX + 0x15c) + 0x1b0);
    iVar4 = FUN_004cd670();
    if ((((iVar4 != 0) && (*(int *)(extraout_ECX + 0x458) != 0)) &&
        (*(int *)(unaff_EBP + -0x10) != 0)) &&
       (uVar10 = (*DAT_0097b704)(), *(int *)(extraout_ECX + 0x458) + 20000U < uVar10)) {
      piStack_100 = (int *)(*(int *)(extraout_ECX + 0x15c) + 0x7c);
      FUN_00413367();
      uVar3 = FUN_00413367(*(int *)(extraout_ECX + 0x15c) + 0x1c8,
                           *(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x1d0));
      uVar9 = FUN_00413367(*(int *)(extraout_ECX + 0x15c) + 0x1bc,
                           *(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x1c4));
      *(undefined4 *)(unaff_EBP + -0x24) = uVar9;
      uVar9 = FUN_004b8c9b(*(int *)(extraout_ECX + 0x15c) + 0xc,
                           *(undefined4 *)(*(int *)(extraout_ECX + 0x15c) + 0x14));
      piStack_100 = (int *)0xffffffff;
      FUN_004ed012(uVar9,*(undefined4 *)(unaff_EBP + -0x24),uVar3);
    }
    if (*(int *)(extraout_ECX + 0x448) != 0) {
      uVar10 = (*DAT_0097b704)();
      if (*(int *)(extraout_ECX + 0x458) + 5000U < uVar10) {
        FUN_005c9d07();
        piStack_100 = (int *)0x5c9bcd;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x448),
                   (IBinding *)0x0);
      }
      else if ((*(int *)(DAT_00978368 + 0x3324) == 0) ||
              (*(int *)(*(int *)(extraout_ECX + 0x15c) + 0x1f8) != 0)) {
        FUN_005c9d07();
      }
      else {
        FUN_005c4b14();
      }
      piStack_100 = (int *)0x5c9bd5;
      FUN_005c9c3b();
    }
    FUN_005d004e();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


