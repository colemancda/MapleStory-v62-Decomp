/* FUN_00605f1c - 0x00605f1c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00605f1c(void)

{
  int *piVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  
  FUN_00879bb8();
  piStack_30 = (int *)(unaff_EBP + -0x2c);
  iStack_34 = 0x605f3d;
  iVar4 = FUN_00455c59();
  iVar4 = *(int *)(iVar4 + 4);
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    piStack_30 = (int *)0x0;
    iStack_34 = 0x605f50;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
  }
  piStack_30 = *(int **)(iVar4 + 0xad);
  iStack_34 = iVar4 + 0xa5;
  iStack_38 = 0x605f65;
  uVar5 = FUN_00413367();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  *(double *)(unaff_EBP + -0x1c) = (double)*(int *)(unaff_EBP + -0x10);
  if ((((_DAT_008ece58 <= (double)*(int *)(unaff_EBP + -0x10) * _DAT_008ece60) ||
       ((dVar2 = *(double *)(unaff_EBP + -0x1c) * _DAT_008ece50, dVar2 < _DAT_008ece58 &&
        (_DAT_008ece48 <= dVar2)))) ||
      ((dVar2 = *(double *)(unaff_EBP + -0x1c) * _DAT_008ece40, dVar2 < _DAT_008ece48 &&
       (_DAT_008ece38 <= dVar2)))) ||
     (((dVar2 = *(double *)(unaff_EBP + -0x1c) * _DAT_008ece30, dVar2 < _DAT_008ece38 &&
       (_DAT_008ece28 <= dVar2)) ||
      ((dVar2 = *(double *)(unaff_EBP + -0x1c) * _DAT_008ece20, dVar2 < _DAT_008ece28 &&
       (_DAT_008ece18 <= dVar2)))))) {
    piStack_30 = (int *)0x60600e;
    uVar5 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
  }
  if (99999999 < *(int *)(unaff_EBP + -0x10)) {
    *(undefined1 **)(unaff_EBP + -0x10) = &DAT_05f5e100;
  }
  piStack_30 = (int *)0x69c;
  iStack_34 = 0x606031;
  iVar6 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar6;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    piStack_30 = (int *)0x606042;
    iVar6 = FUN_007e62e9();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar7 = -(uint)(iVar6 != 0) & iVar6 + 8U;
  *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar7 != 0) & uVar7 - 8;
  piStack_30 = (int *)0x606069;
  FUN_004c26c4();
  piStack_30 = (int *)0x0;
  iStack_34 = 1;
  puStack_40 = (undefined1 *)&iStack_38;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(int **)(unaff_EBP + -0x14) = &iStack_38;
  uStack_3c = 0x1aa;
  FUN_00679d22();
  uStack_3c = 0;
  puStack_40 = (undefined1 *)0x2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004c2677();
  FUN_007eddac();
  piStack_30 = (int *)0x0;
  iStack_34 = 10;
  iStack_38 = 0;
  uStack_3c = *(undefined4 *)(unaff_EBP + -0x10);
  puStack_40 = (undefined1 *)0x0;
  FUN_007edf4a(0);
  piStack_30 = (int *)0x6060b6;
  FUN_007e6e3c();
  piStack_30 = (int *)0x6060be;
  iVar6 = FUN_004bc6a2();
  if (iVar6 == 1) {
    *(undefined4 *)(extraout_ECX + 0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0xbc);
    piStack_30 = *(int **)(iVar4 + 0x35);
    iStack_34 = iVar4 + 0x33;
    iStack_38 = 0x6060df;
    bVar3 = FUN_0045f03e();
    if ((bVar3 < 0x10) && (1000000 < *(int *)(extraout_ECX + 0x18))) {
      piStack_30 = (int *)0x0;
      iStack_34 = 0;
      iStack_38 = 0;
      uStack_3c = 0;
      puStack_40 = (undefined1 *)0xf4240;
      *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_40;
      FUN_00679d22(&puStack_40,0xf43);
      FUN_007db3ad();
      *(undefined4 *)(extraout_ECX + 0x18) = 0;
    }
    else {
      iVar4 = *(int *)(extraout_ECX + 0x18);
      if (iVar4 < 100000) {
        iStack_34 = unaff_EBP + -0x10;
        piStack_30 = (int *)0x2c;
        iStack_38 = 0x60612e;
        piVar8 = (int *)FUN_007d4a9a();
        piVar8 = (int *)*piVar8;
        piVar1 = *(int **)(extraout_ECX + 0x518);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (piVar1 != piVar8) {
          *(int **)(extraout_ECX + 0x518) = piVar8;
          piStack_30 = (int *)0x60614d;
          FUN_0045e787();
          if (piVar1 != (int *)0x0) {
            iStack_34 = 0x606157;
            piStack_30 = piVar1;
            (**(code **)(*piVar1 + 8))();
          }
        }
        piStack_30 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      else if (iVar4 < 1000000) {
        iStack_34 = unaff_EBP + -0x10;
        piStack_30 = (int *)0x2d;
        iStack_38 = 0x606172;
        piVar8 = (int *)FUN_007d4a9a();
        piVar8 = (int *)*piVar8;
        piVar1 = *(int **)(extraout_ECX + 0x518);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (piVar1 != piVar8) {
          *(int **)(extraout_ECX + 0x518) = piVar8;
          piStack_30 = (int *)0x606191;
          FUN_0045e787();
          if (piVar1 != (int *)0x0) {
            iStack_34 = 0x60619b;
            piStack_30 = piVar1;
            (**(code **)(*piVar1 + 8))();
          }
        }
        piStack_30 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      else if (iVar4 < 10000000) {
        iStack_34 = unaff_EBP + -0x10;
        piStack_30 = (int *)0x2e;
        iStack_38 = 0x6061b9;
        piVar8 = (int *)FUN_007d4a9a();
        piVar8 = (int *)*piVar8;
        piVar1 = *(int **)(extraout_ECX + 0x518);
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (piVar1 != piVar8) {
          *(int **)(extraout_ECX + 0x518) = piVar8;
          piStack_30 = (int *)0x6061d8;
          FUN_0045e787();
          if (piVar1 != (int *)0x0) {
            iStack_34 = 0x6061e2;
            piStack_30 = piVar1;
            (**(code **)(*piVar1 + 8))();
          }
        }
        piStack_30 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      else if (iVar4 < 100000000) {
        iStack_34 = unaff_EBP + -0x10;
        piStack_30 = (int *)0x2f;
        iStack_38 = 0x606200;
        piVar8 = (int *)FUN_007d4a9a();
        piVar8 = (int *)*piVar8;
        piVar1 = *(int **)(extraout_ECX + 0x518);
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (piVar1 != piVar8) {
          *(int **)(extraout_ECX + 0x518) = piVar8;
          piStack_30 = (int *)0x60621f;
          FUN_0045e787();
          if (piVar1 != (int *)0x0) {
            iStack_34 = 0x606229;
            piStack_30 = piVar1;
            (**(code **)(*piVar1 + 8))();
          }
        }
        piStack_30 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      else if (iVar4 < 1000000000) {
        iStack_34 = unaff_EBP + -0x10;
        piStack_30 = (int *)0x30;
        iStack_38 = 0x606244;
        piVar8 = (int *)FUN_007d4a9a();
        piVar8 = (int *)*piVar8;
        piVar1 = *(int **)(extraout_ECX + 0x518);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (piVar1 != piVar8) {
          *(int **)(extraout_ECX + 0x518) = piVar8;
          piStack_30 = (int *)0x606263;
          FUN_0045e787();
          if (piVar1 != (int *)0x0) {
            iStack_34 = 0x60626d;
            piStack_30 = piVar1;
            (**(code **)(*piVar1 + 8))();
          }
        }
        piStack_30 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      else {
        iStack_34 = unaff_EBP + -0x10;
        piStack_30 = (int *)0x31;
        iStack_38 = 0x606281;
        piVar8 = (int *)FUN_007d4a9a();
        piVar8 = (int *)*piVar8;
        piVar1 = *(int **)(extraout_ECX + 0x518);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (piVar1 != piVar8) {
          *(int **)(extraout_ECX + 0x518) = piVar8;
          piStack_30 = (int *)0x6062a0;
          FUN_0045e787();
          if (piVar1 != (int *)0x0) {
            iStack_34 = 0x6062aa;
            piStack_30 = piVar1;
            (**(code **)(*piVar1 + 8))();
          }
        }
        piStack_30 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 1;
      }
      if (piStack_30 != (int *)0x0) {
        iStack_34 = 0x6062bb;
        (**(code **)(*piStack_30 + 8))();
      }
      iVar4 = *(int *)(extraout_ECX + 0x18);
      if (iVar4 == 0) {
        piStack_30 = (int *)0x6062cd;
        FUN_00414f29();
      }
      else {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        piStack_30 = (int *)0x1;
        iStack_38 = unaff_EBP + -0x10;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        uStack_3c = 0x6062e2;
        iStack_34 = iVar4;
        FUN_007d3546();
        piStack_30 = (int *)0x1ae;
        iStack_34 = unaff_EBP + -0x14;
        iStack_38 = 0x6062f8;
        puVar9 = (undefined4 *)FUN_00679d22();
        piStack_30 = *(int **)(unaff_EBP + -0x10);
        iStack_34 = *puVar9;
        iStack_38 = extraout_ECX + 0x520;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        uStack_3c = 0x60630e;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        piStack_30 = (int *)0x60631d;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        piStack_30 = (int *)0x606329;
        FUN_00414ebb();
      }
      piStack_30 = (int *)0x0;
      iStack_34 = 0x606332;
      FUN_008161f1();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_30 = (int *)0x60633e;
  FUN_004c26e1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


