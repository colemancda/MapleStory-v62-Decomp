/* FUN_0072d5e3 - 0x0072d5e3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0072d5e3(void)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  code *pcVar9;
  undefined4 uVar10;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 *puStack_98;
  int *piStack_94;
  undefined4 *puStack_90;
  IBinding *pIVar11;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  
  FUN_00879bb8();
  puStack_80 = (undefined4 *)0x72d5fd;
  FUN_0081622a();
  puStack_80 = (undefined4 *)0x72d608;
  FUN_00448dc6();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_80 = (undefined4 *)(unaff_EBP + -0x20);
  FUN_007d4a9a();
  puStack_88 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_007d4a9a();
  puStack_90 = (undefined4 *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_94 = (int *)0x72d635;
  FUN_007d4a9a();
  puStack_98 = (undefined4 *)(unaff_EBP + -0x28);
  piStack_94 = (int *)0x19;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_007d4a9a();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar7 = DAT_00978368;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_80 = (undefined4 *)0x72d660;
  iVar3 = FUN_00455c59();
  puVar5 = *(undefined4 **)(iVar3 + 4);
  *(undefined4 **)(unaff_EBP + -0x1c) = puVar5;
  FUN_0045e4a2();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  uVar4 = *(undefined4 *)(iVar7 + 0x2d70);
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  *(undefined4 *)(unaff_EBP + -100) = uVar4;
  FUN_0052e11f();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int *)(unaff_EBP + -100) != 0) {
    FUN_0045e2eb();
    puStack_80 = (undefined4 *)0x72d6ae;
    iVar3 = FUN_00732f96();
    if (iVar3 != 0) {
      iVar3 = 0;
      if (*(int *)((int)puVar5 + 0x3eb) != 0) {
        iVar3 = *(int *)(*(int *)((int)puVar5 + 0x3eb) + -4);
      }
      *(int *)(unaff_EBP + -0x3c) = iVar3 + -1;
      *(undefined4 *)(unaff_EBP + -0x30) = 1;
      if (0 < iVar3 + -1) {
        do {
          puStack_80 = (undefined4 *)0x2;
          puStack_88 = (undefined4 *)0x72d6e6;
          iVar3 = FUN_00458c4f();
          *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar3 + 4);
          FUN_0046575e();
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            uVar4 = FUN_0045e2eb();
            *(undefined4 *)(unaff_EBP + 8) = uVar4;
            FUN_0045e2eb();
            puStack_80 = *(undefined4 **)(unaff_EBP + 8);
            iVar3 = FUN_0073302a();
            if ((iVar3 != 0) &&
               (iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x18) + 0x18))(), 0 < iVar3)) {
              puStack_80 = (undefined4 *)((int)puVar5 + 0x33);
              uVar1 = FUN_0045f03e();
              *(undefined1 *)(unaff_EBP + 0xb) = uVar1;
              *(undefined4 *)(unaff_EBP + -0x38) = DAT_00973a94;
              iVar3 = FUN_0045e2eb();
              if (iVar3 == 0) {
                iVar3 = 0;
              }
              else {
                puStack_80 = (undefined4 *)0x72d763;
                iVar3 = FUN_00554db7();
              }
              if (((iVar3 <= (int)(uint)*(byte *)(unaff_EBP + 0xb)) &&
                  (iVar3 = FUN_0045e2eb(), iVar3 / 1000 != 0x91b)) &&
                 (iVar3 = FUN_0045e2eb(), iVar3 / 1000 != 0x91c)) {
                *(undefined4 *)(unaff_EBP + 8) = DAT_00973a94;
                FUN_0045e2eb();
                puStack_80 = (undefined4 *)0x72d7d0;
                uVar4 = FUN_00554b40();
                *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
                break;
              }
            }
          }
          *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 1;
        } while (*(int *)(unaff_EBP + -0x30) <= *(int *)(unaff_EBP + -0x3c));
      }
    }
  }
  puStack_80 = (undefined4 *)(iVar7 + 0x2114);
  uVar4 = FUN_00413367();
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  puStack_80 = (undefined4 *)0x72d7e9;
  iVar3 = FUN_00662964();
  iVar3 = iVar3 + *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x34);
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  *(int *)(unaff_EBP + 8) = iVar3;
  if (0x7ce < iVar3) {
    *(undefined4 *)(unaff_EBP + 8) = 1999;
  }
  puStack_80 = (undefined4 *)(iVar7 + 0x287c);
  iVar3 = FUN_00413367();
  *(int *)(unaff_EBP + -0x34) = iVar3;
  if ((0 < iVar3) &&
     (iVar3 = (iVar3 * *(int *)(unaff_EBP + 8)) / 100 + *(int *)(unaff_EBP + 8),
     *(int *)(unaff_EBP + 8) = iVar3, 0x7ce < iVar3)) {
    *(undefined4 *)(unaff_EBP + 8) = 1999;
  }
  if (*(int *)(unaff_EBP + -100) == 0) {
    iVar3 = (**(code **)(*(int *)(DAT_00978358 + 0x78) + 4))();
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      goto LAB_0072d937;
    }
    *(undefined4 *)(unaff_EBP + -0x30) = 0x27;
LAB_0072d875:
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    FUN_0045e2eb();
    puStack_80 = (undefined4 *)0x72d850;
    uVar4 = FUN_0044dddc();
    *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
LAB_0072d937:
    iVar3 = *(int *)(unaff_EBP + -0x30);
    if ((iVar3 == 0) || (iVar3 == 0x27)) goto LAB_0072d875;
    if ((iVar3 < 0x2d) || ((0x2f < iVar3 && (iVar3 != 0x31)))) {
      puStack_88 = (undefined4 *)0x0;
    }
    else {
      puStack_88 = (undefined4 *)0x1;
    }
    puStack_80 = (undefined4 *)0x0;
    FUN_0045e2eb();
    piStack_94 = (int *)0x72d97b;
    puStack_90 = puVar5;
    uVar4 = FUN_00652c29();
    *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  }
  *(double *)(unaff_EBP + -0x58) =
       ((double)*(int *)(unaff_EBP + -0x18) * _DAT_008ecb30 + _DAT_008ecb38) * _DAT_008ed7b0;
  switch(*(undefined4 *)(unaff_EBP + -0x30)) {
  case 0x1e:
  case 0x21:
    puStack_80 = (undefined4 *)(iVar7 + 0x20b4);
    iVar3 = FUN_00413367();
    if ((iVar3 / 100 == 4) && (*(int *)(unaff_EBP + -0x30) == 0x21)) {
      puStack_80 = (undefined4 *)(iVar7 + 0x20cc);
      iVar3 = FUN_00413367();
      puStack_88 = (undefined4 *)(iVar7 + 0x20c0);
      uVar4 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
      puStack_90 = (undefined4 *)(iVar7 + 0x20e4);
      *(undefined4 **)(unaff_EBP + -0x18) = puStack_90;
      piStack_94 = (int *)0x72dcad;
      uVar4 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
      *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + -0x3c) + iVar3;
      piStack_94 = (int *)0x72dcdd;
      iVar3 = __ftol();
      piStack_94 = *(int **)(iVar7 + 0x20d4);
      puStack_98 = (undefined4 *)(iVar7 + 0x20cc);
      uVar4 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
      iStack_a0 = iVar7 + 0x20c0;
      iStack_a4 = 0x72dd06;
      uVar4 = FUN_00413367();
      iStack_a4 = *(undefined4 *)(iVar7 + 0x20ec);
      *(undefined4 *)(unaff_EBP + 8) = uVar4;
      iStack_a8 = *(int *)(unaff_EBP + -0x18);
      uVar4 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x3c);
    }
    else {
      puStack_80 = (undefined4 *)(iVar7 + 0x20cc);
      uVar4 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
      puStack_88 = (undefined4 *)(iVar7 + 0x20c0);
      *(undefined4 **)(unaff_EBP + -0x18) = puStack_88;
      uVar4 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
      *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
      iVar3 = __ftol();
      puStack_90 = (undefined4 *)(iVar7 + 0x20cc);
      piStack_94 = (int *)0x72dd97;
      uVar4 = FUN_00413367();
      piStack_94 = *(int **)(iVar7 + 0x20c8);
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
      puStack_98 = *(undefined4 **)(unaff_EBP + -0x18);
      uVar4 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + 8) = uVar4;
    }
    break;
  case 0x1f:
  case 0x20:
  case 0x25:
  case 0x26:
    puStack_80 = (undefined4 *)(iVar7 + 0x20cc);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    puStack_88 = (undefined4 *)(iVar7 + 0x20c0);
    *(undefined4 **)(unaff_EBP + -0x18) = puStack_88;
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
    iVar3 = __ftol();
    puStack_90 = (undefined4 *)(iVar7 + 0x20cc);
    piStack_94 = (int *)0x72dc1a;
    uVar4 = FUN_00413367();
    piStack_94 = *(int **)(iVar7 + 0x20c8);
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    puStack_98 = *(undefined4 **)(unaff_EBP + -0x18);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    break;
  default:
    iVar3 = *(int *)(unaff_EBP + 8);
    goto LAB_0072e0da;
  case 0x27:
    puStack_80 = (undefined4 *)(iVar7 + 0x20b4);
    iVar3 = FUN_00413367();
    puStack_80 = (undefined4 *)(iVar7 + 0x20cc);
    if (iVar3 == 500) {
      uVar4 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
      puStack_88 = (undefined4 *)(iVar7 + 0x20c0);
      *(undefined4 **)(unaff_EBP + -0x18) = puStack_88;
      uVar4 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
      *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
      iVar3 = __ftol();
      puStack_90 = (undefined4 *)(iVar7 + 0x20cc);
      piStack_94 = (int *)0x72df0a;
      uVar4 = FUN_00413367();
      piStack_94 = *(int **)(iVar7 + 0x20c8);
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
      puStack_98 = *(undefined4 **)(unaff_EBP + -0x18);
      uVar4 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + 8) = uVar4;
    }
    else {
      uVar4 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
      puStack_88 = (undefined4 *)(iVar7 + 0x20c0);
      *(undefined4 **)(unaff_EBP + -0x18) = puStack_88;
      uVar4 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
      *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
      iVar3 = __ftol();
      puStack_90 = (undefined4 *)(iVar7 + 0x20cc);
      piStack_94 = (int *)0x72df89;
      uVar4 = FUN_00413367();
      piStack_94 = *(int **)(iVar7 + 0x20c8);
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
      puStack_98 = *(undefined4 **)(unaff_EBP + -0x18);
      uVar4 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + 8) = uVar4;
    }
    break;
  case 0x28:
    puStack_80 = (undefined4 *)(iVar7 + 0x20cc);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    puStack_88 = (undefined4 *)(iVar7 + 0x20c0);
    *(undefined4 **)(unaff_EBP + -0x18) = puStack_88;
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
    iVar3 = __ftol();
    puStack_90 = (undefined4 *)(iVar7 + 0x20cc);
    piStack_94 = (int *)0x72db8e;
    uVar4 = FUN_00413367();
    piStack_94 = *(int **)(iVar7 + 0x20c8);
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    puStack_98 = *(undefined4 **)(unaff_EBP + -0x18);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    break;
  case 0x29:
  case 0x2a:
    puStack_80 = (undefined4 *)(iVar7 + 0x20cc);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    puStack_88 = (undefined4 *)(iVar7 + 0x20c0);
    *(undefined4 **)(unaff_EBP + -0x18) = puStack_88;
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
    iVar3 = __ftol();
    puStack_90 = (undefined4 *)(iVar7 + 0x20cc);
    piStack_94 = (int *)0x72da76;
    uVar4 = FUN_00413367();
    piStack_94 = *(int **)(iVar7 + 0x20c8);
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    puStack_98 = *(undefined4 **)(unaff_EBP + -0x18);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    break;
  case 0x2b:
  case 0x2c:
    puStack_80 = (undefined4 *)(iVar7 + 0x20cc);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    puStack_88 = (undefined4 *)(iVar7 + 0x20c0);
    *(undefined4 **)(unaff_EBP + -0x18) = puStack_88;
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
    iVar3 = __ftol();
    puStack_90 = (undefined4 *)(iVar7 + 0x20cc);
    piStack_94 = (int *)0x72db02;
    uVar4 = FUN_00413367();
    piStack_94 = *(int **)(iVar7 + 0x20c8);
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    puStack_98 = *(undefined4 **)(unaff_EBP + -0x18);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    break;
  case 0x2d:
    puStack_80 = (undefined4 *)(iVar7 + 0x20c0);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    puStack_88 = (undefined4 *)(iVar7 + 0x20cc);
    *(undefined4 **)(unaff_EBP + -0x18) = puStack_88;
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
    iVar3 = __ftol();
    puStack_90 = (undefined4 *)(iVar7 + 0x20c0);
    piStack_94 = (int *)0x72d90b;
    uVar4 = FUN_00413367();
    piStack_94 = *(int **)(iVar7 + 0x20d4);
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    puStack_98 = *(undefined4 **)(unaff_EBP + -0x18);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    break;
  case 0x2e:
    puStack_80 = (undefined4 *)(iVar7 + 0x20c0);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    puStack_88 = (undefined4 *)(iVar7 + 0x20cc);
    *(undefined4 **)(unaff_EBP + -0x18) = puStack_88;
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
    iVar3 = __ftol();
    puStack_90 = (undefined4 *)(iVar7 + 0x20c0);
    piStack_94 = (int *)0x72d9ea;
    uVar4 = FUN_00413367();
    piStack_94 = *(int **)(iVar7 + 0x20d4);
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    puStack_98 = *(undefined4 **)(unaff_EBP + -0x18);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    break;
  case 0x2f:
    puStack_80 = (undefined4 *)(iVar7 + 0x20cc);
    iVar3 = FUN_00413367();
    puStack_88 = (undefined4 *)(iVar7 + 0x20c0);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    puStack_90 = (undefined4 *)(iVar7 + 0x20e4);
    *(undefined4 **)(unaff_EBP + -0x18) = puStack_90;
    piStack_94 = (int *)0x72ddfd;
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + -0x3c) + iVar3;
    piStack_94 = (int *)0x72de2d;
    iVar3 = __ftol();
    piStack_94 = *(int **)(iVar7 + 0x20d4);
    puStack_98 = (undefined4 *)(iVar7 + 0x20cc);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    iStack_a0 = iVar7 + 0x20c0;
    iStack_a4 = 0x72de56;
    uVar4 = FUN_00413367();
    iStack_a4 = *(undefined4 *)(iVar7 + 0x20ec);
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    iStack_a8 = *(int *)(unaff_EBP + -0x18);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x3c);
    break;
  case 0x30:
    puStack_80 = (undefined4 *)(iVar7 + 0x20cc);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    puStack_88 = (undefined4 *)(iVar7 + 0x20c0);
    *(undefined4 **)(unaff_EBP + -0x18) = puStack_88;
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
    iVar3 = __ftol();
    puStack_90 = (undefined4 *)(iVar7 + 0x20cc);
    piStack_94 = (int *)0x72e015;
    uVar4 = FUN_00413367();
    piStack_94 = *(int **)(iVar7 + 0x20c8);
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    puStack_98 = *(undefined4 **)(unaff_EBP + -0x18);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    break;
  case 0x31:
    puStack_80 = (undefined4 *)(iVar7 + 0x20c0);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    puStack_88 = (undefined4 *)(iVar7 + 0x20cc);
    *(undefined4 **)(unaff_EBP + -0x18) = puStack_88;
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    *(double *)(unaff_EBP + -0x48) = (double)*(int *)(unaff_EBP + 8);
    iVar3 = __ftol();
    puStack_90 = (undefined4 *)(iVar7 + 0x20c0);
    piStack_94 = (int *)0x72e0a1;
    uVar4 = FUN_00413367();
    piStack_94 = *(int **)(iVar7 + 0x20d4);
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    puStack_98 = *(undefined4 **)(unaff_EBP + -0x18);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
  }
  __ftol();
LAB_0072e0da:
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  *(int *)(unaff_EBP + 8) = iVar3;
  if (0x1869e < iVar3) {
    *(undefined4 *)(unaff_EBP + 8) = 99999;
  }
  if (*(int *)(unaff_EBP + -0x30) == 0) {
    puStack_80 = (undefined4 *)&DAT_00968204;
    FUN_00414edd();
  }
  else {
    puStack_80 = (undefined4 *)(unaff_EBP + -0x3c);
    FUN_00679d22();
    puStack_80 = *(undefined4 **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puStack_88 = (undefined4 *)(unaff_EBP + -0x14);
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
  }
  puStack_80 = (undefined4 *)0x72e159;
  iVar3 = FUN_00662964();
  if (iVar3 < 1) {
    puStack_80 = (undefined4 *)0x72e16c;
    iVar3 = FUN_00662964();
    if (iVar3 < 0) {
      pIVar11 = *(IBinding **)(unaff_EBP + -0x2c);
    }
    else {
      pIVar11 = *(IBinding **)(unaff_EBP + -0x20);
    }
  }
  else {
    pIVar11 = *(IBinding **)(unaff_EBP + -0x28);
  }
  puStack_80 = (undefined4 *)0x72e180;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),pIVar11);
  if (0 < *(int *)(unaff_EBP + -0x34)) {
    puStack_80 = (undefined4 *)0x72e191;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               *(IBinding **)(unaff_EBP + -0x28));
  }
  puStack_80 = (undefined4 *)0x72e19f;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_80 = (undefined4 *)0x72e1ac;
  FUN_00403191();
  puStack_80 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00449749();
  puStack_88 = (undefined4 *)0x72e1c9;
  FUN_00449713();
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_88;
  puStack_90 = (undefined4 *)0x72e1d5;
  FUN_00448a17();
  puStack_90 = (undefined4 *)0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  piStack_94 = (int *)0x72e1e5;
  FUN_004115d9();
  piStack_94 = (int *)0x72e1ec;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_80 = (undefined4 *)0x72e1f9;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_80 = (undefined4 *)0x72e204;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_80 = (undefined4 *)0x72e211;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_80 = (undefined4 *)0x72e21c;
    FUN_00878dfb();
  }
  puStack_80 = (undefined4 *)(iVar7 + 0x2150);
  iVar3 = FUN_00413367();
  if (iVar3 == 0) {
    FUN_0087a1b0();
    *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff88;
    puStack_80 = (undefined4 *)(iVar7 + 0x2144);
    FUN_00413367();
    puStack_88 = *(undefined4 **)(unaff_EBP + 8);
    puStack_90 = (undefined4 *)0x72e250;
    puStack_80 = (undefined4 *)FUN_0087b818();
    FUN_00414edd();
  }
  else {
    puStack_80 = (undefined4 *)(iVar7 + 0x2150);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    puStack_88 = (undefined4 *)(iVar7 + 0x2144);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    piStack_94 = (int *)0x72e287;
    puStack_90 = (undefined4 *)(iVar7 + 0x2144);
    FUN_00413367();
    piStack_94 = *(int **)(iVar7 + 0x2158);
    puStack_98 = (undefined4 *)(iVar7 + 0x2150);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    puStack_80 = (undefined4 *)(unaff_EBP + -0x30);
    puStack_88 = (undefined4 *)FUN_00679d22();
    puStack_80 = *(undefined4 **)(unaff_EBP + -0x3c);
    puStack_88 = (undefined4 *)*puStack_88;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    puStack_90 = (undefined4 *)0x72e2c7;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
  }
  puStack_80 = (undefined4 *)(iVar7 + 0x2150);
  iVar3 = FUN_00413367();
  if (iVar3 < 1) {
    puStack_80 = (undefined4 *)(iVar7 + 0x2150);
    iVar3 = FUN_00413367();
    if (iVar3 < 0) {
      pIVar11 = *(IBinding **)(unaff_EBP + -0x2c);
    }
    else {
      pIVar11 = *(IBinding **)(unaff_EBP + -0x20);
    }
  }
  else {
    pIVar11 = *(IBinding **)(unaff_EBP + -0x28);
  }
  puStack_80 = (undefined4 *)0x72e314;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),pIVar11);
  puStack_80 = (undefined4 *)0x72e31d;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_80 = (undefined4 *)0x72e32a;
  FUN_00403191();
  puStack_80 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00449749();
  puStack_88 = (undefined4 *)0x72e347;
  FUN_00449713();
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_88;
  puStack_90 = (undefined4 *)0x72e353;
  puStack_88 = extraout_ECX;
  FUN_00448a17();
  puStack_90 = (undefined4 *)0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  piStack_94 = (int *)0x72e363;
  FUN_004115d9();
  piStack_94 = (int *)0x72e36a;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  puStack_80 = (undefined4 *)0x72e377;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_80 = (undefined4 *)0x72e382;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_80 = (undefined4 *)0x72e38f;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_80 = (undefined4 *)0x72e39a;
    FUN_00878dfb();
  }
  puStack_80 = (undefined4 *)(iVar7 + 0x2180);
  iVar3 = FUN_00413367();
  if (0 < *(int *)(unaff_EBP + -0x34)) {
    puStack_80 = (undefined4 *)(iVar7 + 0x2180);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    puStack_88 = (undefined4 *)(iVar7 + 0x2174);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    piStack_94 = (int *)0x72e3d7;
    puStack_90 = (undefined4 *)(iVar7 + 0x2180);
    iVar3 = FUN_00413367();
    iVar3 = iVar3 + *(int *)(unaff_EBP + 8);
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    iVar3 = (iVar3 * *(int *)(unaff_EBP + -0x34)) / 100 + *(int *)(unaff_EBP + -0x3c);
  }
  if (iVar3 == 0) {
    FUN_0087a1b0();
    puStack_80 = (undefined4 *)(iVar7 + 0x2174);
    FUN_00413367();
    puStack_90 = (undefined4 *)0x72e41b;
    puStack_88 = (undefined4 *)&stack0xffffff88;
    puStack_80 = (undefined4 *)FUN_0087b818();
    FUN_00414edd();
LAB_0072e429:
    pIVar11 = *(IBinding **)(unaff_EBP + -0x20);
  }
  else {
    puStack_80 = (undefined4 *)(iVar7 + 0x2174);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    puStack_88 = (undefined4 *)(iVar7 + 0x2174);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    puStack_80 = (undefined4 *)(unaff_EBP + -0x38);
    puStack_88 = (undefined4 *)FUN_00679d22();
    puStack_88 = (undefined4 *)*puStack_88;
    puStack_80 = *(undefined4 **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    puStack_90 = (undefined4 *)0x72e5a1;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    if (iVar3 < 1) {
      if (-1 < iVar3) goto LAB_0072e429;
      pIVar11 = *(IBinding **)(unaff_EBP + -0x2c);
    }
    else {
      pIVar11 = *(IBinding **)(unaff_EBP + -0x28);
    }
  }
  puStack_80 = (undefined4 *)0x72e434;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),pIVar11);
  if (0 < *(int *)(unaff_EBP + -0x34)) {
    puStack_80 = (undefined4 *)0x72e445;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               *(IBinding **)(unaff_EBP + -0x28));
  }
  pcVar9 = VariantInit_exref;
  puStack_80 = (undefined4 *)0x72e451;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
  puStack_80 = (undefined4 *)(unaff_EBP + -0x50);
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    puStack_80 = (undefined4 *)0x72e46b;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_80 = (undefined4 *)0x72e475;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
  puStack_80 = (undefined4 *)(unaff_EBP + -0x60);
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    puStack_80 = (undefined4 *)0x72e48f;
    FUN_00878dfb();
  }
  puStack_80 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  FUN_00449749();
  puStack_88 = (undefined4 *)0x72e4ac;
  FUN_00449713();
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_88;
  puStack_90 = (undefined4 *)0x72e4b8;
  FUN_00448a17();
  puStack_90 = (undefined4 *)0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  piStack_94 = (int *)0x72e4c8;
  FUN_004115d9();
  piStack_94 = (int *)0x72e4cf;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  puStack_80 = (undefined4 *)0x72e4dc;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_80 = (undefined4 *)0x72e4e7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_80 = (undefined4 *)0x72e4f4;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_80 = (undefined4 *)0x72e4ff;
    FUN_00878dfb();
  }
  puStack_80 = (undefined4 *)(iVar7 + 0x21b0);
  iVar3 = FUN_00413367();
  if (iVar3 == 0) {
    FUN_0087a1b0();
    *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff88;
    puStack_80 = (undefined4 *)(iVar7 + 0x21a4);
    FUN_00413367();
    puStack_88 = *(undefined4 **)(unaff_EBP + 8);
    puStack_90 = (undefined4 *)0x72e543;
    puStack_80 = (undefined4 *)FUN_0087b818();
    FUN_00414edd();
  }
  else {
    puStack_80 = (undefined4 *)(iVar7 + 0x21b0);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    puStack_88 = (undefined4 *)(iVar7 + 0x21a4);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    puStack_90 = (undefined4 *)(iVar7 + 0x21a4);
    piStack_94 = (int *)0x72e608;
    FUN_00413367();
    piStack_94 = *(int **)(iVar7 + 0x21b8);
    puStack_98 = (undefined4 *)(iVar7 + 0x21b0);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    puStack_80 = (undefined4 *)(unaff_EBP + -0x34);
    puStack_88 = (undefined4 *)FUN_00679d22();
    puStack_80 = *(undefined4 **)(unaff_EBP + -0x3c);
    puStack_88 = (undefined4 *)*puStack_88;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_90 = (undefined4 *)0x72e64e;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    pcVar9 = VariantInit_exref;
  }
  puStack_80 = (undefined4 *)(iVar7 + 0x21b0);
  iVar3 = FUN_00413367();
  if (iVar3 < 1) {
    puStack_80 = (undefined4 *)(iVar7 + 0x21b0);
    iVar3 = FUN_00413367();
    if (iVar3 < 0) {
      pIVar11 = *(IBinding **)(unaff_EBP + -0x2c);
    }
    else {
      pIVar11 = *(IBinding **)(unaff_EBP + -0x20);
    }
  }
  else {
    pIVar11 = *(IBinding **)(unaff_EBP + -0x28);
  }
  puStack_80 = (undefined4 *)0x72e6a8;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),pIVar11);
  puStack_80 = (undefined4 *)0x72e6ae;
  (*pcVar9)();
  puStack_80 = &DAT_00980690;
  puStack_88 = (undefined4 *)0x72e6bc;
  puStack_80 = (undefined4 *)FUN_00402e32();
  if ((int)puStack_80 < 0) {
    FUN_00878dfb();
  }
  puStack_80 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  (*pcVar9)();
  puStack_88 = (undefined4 *)(unaff_EBP + -0x60);
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    puStack_88 = (undefined4 *)0x72e6ec;
    FUN_00878dfb();
  }
  puStack_88 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_00449749();
  puStack_90 = (undefined4 *)0x72e709;
  piStack_94 = (int *)FUN_00449713();
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_90;
  puStack_98 = (undefined4 *)0x72e715;
  FUN_00448a17();
  piStack_94 = (int *)0x3e;
  puStack_98 = (undefined4 *)0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  puStack_88 = (undefined4 *)0x72e739;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_88 = (undefined4 *)0x72e744;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_88 = (undefined4 *)0x72e751;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_88 = (undefined4 *)0x72e75c;
    FUN_00878dfb();
  }
  puStack_88 = (undefined4 *)0x72e766;
  iVar3 = FUN_006629cf();
  if (iVar3 == 0) {
    FUN_0087a1b0();
    *(undefined4 ***)(unaff_EBP + 8) = &puStack_80;
    puStack_88 = (undefined4 *)(iVar7 + 0x21d4);
    piStack_94 = (int *)FUN_00413367();
    puStack_90 = *(undefined4 **)(unaff_EBP + 8);
    puStack_98 = (undefined4 *)0x72e792;
    puStack_88 = (undefined4 *)FUN_0087b818();
    FUN_00414edd();
  }
  else {
    puStack_88 = (undefined4 *)(iVar7 + 0x21d4);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    puStack_90 = (undefined4 *)(iVar7 + 0x21d4);
    piStack_94 = (int *)0x72e7ce;
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    puStack_88 = (undefined4 *)(unaff_EBP + -0x38);
    puVar5 = (undefined4 *)FUN_00679d22();
    puVar5 = (undefined4 *)*puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    puStack_88 = (undefined4 *)0x72e7f4;
    FUN_006629cf();
    puStack_88 = *(undefined4 **)(unaff_EBP + 8);
    puStack_90 = (undefined4 *)0x72e802;
    FUN_006629cf();
    piStack_94 = (int *)(unaff_EBP + -0x14);
    puStack_98 = (undefined4 *)0x72e810;
    puStack_90 = puVar5;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    pcVar9 = VariantInit_exref;
  }
  puStack_88 = (undefined4 *)0x72e82f;
  iVar3 = FUN_006629cf();
  if (iVar3 < 1) {
    puStack_88 = (undefined4 *)0x72e842;
    iVar3 = FUN_006629cf();
    if (iVar3 < 0) {
      pIVar11 = *(IBinding **)(unaff_EBP + -0x2c);
    }
    else {
      pIVar11 = *(IBinding **)(unaff_EBP + -0x20);
    }
  }
  else {
    pIVar11 = *(IBinding **)(unaff_EBP + -0x28);
  }
  puStack_88 = (undefined4 *)0x72e856;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),pIVar11);
  puStack_88 = (undefined4 *)0x72e85c;
  (*pcVar9)();
  puStack_88 = &DAT_00980690;
  puStack_90 = (undefined4 *)0x72e86a;
  puStack_88 = (undefined4 *)FUN_00402e32();
  if ((int)puStack_88 < 0) {
    FUN_00878dfb();
  }
  puStack_88 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  (*pcVar9)();
  puStack_90 = (undefined4 *)(unaff_EBP + -0x60);
  piStack_94 = (int *)0x72e88e;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    puStack_90 = (undefined4 *)0x72e89a;
    FUN_00878dfb();
  }
  puStack_90 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  piStack_94 = (int *)0x72e8ae;
  piStack_94 = (int *)FUN_00449749();
  puStack_98 = (undefined4 *)0x72e8b7;
  FUN_00449713();
  *(undefined4 ***)(unaff_EBP + 8) = &puStack_98;
  iStack_a0 = 0x72e8c3;
  FUN_00448a17();
  iStack_a0 = 0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_a4 = 0x72e8d3;
  FUN_004115d9();
  iStack_a4 = 0x72e8da;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  puStack_90 = (undefined4 *)0x72e8e7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_90 = (undefined4 *)0x72e8f2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_90 = (undefined4 *)0x72e8ff;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    puStack_90 = (undefined4 *)0x72e90a;
    FUN_00878dfb();
  }
  puStack_90 = (undefined4 *)0x72e914;
  iVar3 = FUN_00662a40();
  if (iVar3 == 0) {
    FUN_0087a1b0();
    *(undefined4 ***)(unaff_EBP + 8) = &puStack_88;
    puStack_90 = (undefined4 *)(iVar7 + 0x2204);
    piStack_94 = (int *)0x72e935;
    FUN_00413367();
    piStack_94 = (int *)0xa;
    puStack_98 = *(undefined4 **)(unaff_EBP + 8);
    iStack_a0 = 0x72e940;
    puStack_90 = (undefined4 *)FUN_0087b818();
    piStack_94 = (int *)0x72e94e;
    FUN_00414edd();
  }
  else {
    puStack_90 = (undefined4 *)(iVar7 + 0x2204);
    piStack_94 = (int *)0x72e96b;
    uVar4 = FUN_00413367();
    piStack_94 = *(int **)(iVar7 + 0x220c);
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    puStack_98 = (undefined4 *)(iVar7 + 0x2204);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    puStack_90 = (undefined4 *)(unaff_EBP + -0x38);
    piStack_94 = (int *)0x72e992;
    puVar5 = (undefined4 *)FUN_00679d22();
    puVar5 = (undefined4 *)*puVar5;
    *(undefined1 *)(unaff_EBP + -4) = 0x1c;
    puStack_90 = (undefined4 *)0x72e9a2;
    FUN_00662a40();
    puStack_90 = *(undefined4 **)(unaff_EBP + 8);
    piStack_94 = *(int **)(unaff_EBP + -0x1c);
    puStack_98 = (undefined4 *)0x72e9b0;
    iVar3 = FUN_00662a40();
    piStack_94 = (int *)(iVar3 + *(int *)(unaff_EBP + -0x3c));
    iStack_a0 = 0x72e9be;
    puStack_98 = puVar5;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    pcVar9 = VariantInit_exref;
  }
  puStack_90 = (undefined4 *)0x72e9dd;
  iVar3 = FUN_00662a40();
  if (iVar3 < 1) {
    puStack_90 = (undefined4 *)0x72e9f0;
    iVar3 = FUN_00662a40();
    if (iVar3 < 0) {
      pIVar11 = *(IBinding **)(unaff_EBP + -0x2c);
    }
    else {
      pIVar11 = *(IBinding **)(unaff_EBP + -0x20);
    }
  }
  else {
    pIVar11 = *(IBinding **)(unaff_EBP + -0x28);
  }
  puStack_90 = (undefined4 *)0x72ea04;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),pIVar11);
  puStack_90 = (undefined4 *)0x72ea0a;
  (*pcVar9)();
  piStack_94 = (int *)(unaff_EBP + -0x50);
  puStack_90 = &DAT_00980690;
  puStack_98 = (undefined4 *)0x72ea18;
  puStack_90 = (undefined4 *)FUN_00402e32();
  if ((int)puStack_90 < 0) {
    piStack_94 = (int *)0x72ea24;
    FUN_00878dfb();
  }
  puStack_90 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  piStack_94 = (int *)0x72ea2e;
  (*pcVar9)();
  puStack_98 = (undefined4 *)(unaff_EBP + -0x60);
  piStack_94 = &DAT_00980690;
  piStack_94 = (int *)FUN_00402e32();
  if ((int)piStack_94 < 0) {
    puStack_98 = (undefined4 *)0x72ea48;
    FUN_00878dfb();
  }
  piStack_94 = (int *)(unaff_EBP + -0x50);
  puStack_98 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_00449749();
  iStack_a0 = 0x72ea65;
  iStack_a4 = FUN_00449713();
  *(int **)(unaff_EBP + 8) = &iStack_a0;
  iStack_a8 = 0x72ea71;
  FUN_00448a17();
  iStack_a4 = 0x62;
  iStack_a8 = 0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_004115d9();
  FUN_00448e3a();
  piStack_94 = (int *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  puStack_98 = (undefined4 *)0x72ea95;
  piStack_94 = (int *)FUN_00402bc3();
  if ((int)piStack_94 < 0) {
    puStack_98 = (undefined4 *)0x72eaa0;
    FUN_00878dfb();
  }
  piStack_94 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_98 = (undefined4 *)0x72eaad;
  piStack_94 = (int *)FUN_00402bc3();
  if ((int)piStack_94 < 0) {
    puStack_98 = (undefined4 *)0x72eab8;
    FUN_00878dfb();
  }
  piStack_94 = *(int **)(iVar7 + 0x2248);
  puStack_98 = (undefined4 *)(iVar7 + 0x2240);
  iVar3 = FUN_00413367();
  if (iVar3 == 0) {
    piStack_94 = (int *)0x72ead8;
    FUN_0087a1b0();
    *(undefined4 ***)(unaff_EBP + 8) = &puStack_90;
    piStack_94 = *(int **)(iVar7 + 0x223c);
    puStack_98 = (undefined4 *)(iVar7 + 0x2234);
    iStack_a4 = FUN_00413367();
    iStack_a0 = *(int *)(unaff_EBP + 8);
    iStack_a8 = 0x72eaf8;
    puStack_98 = (undefined4 *)FUN_0087b818();
    piStack_94 = (int *)0xffffffff;
    FUN_00414edd();
  }
  else {
    piStack_94 = *(int **)(iVar7 + 0x2248);
    puStack_98 = (undefined4 *)(iVar7 + 0x2240);
    uVar4 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    iStack_a0 = iVar7 + 0x2234;
    iStack_a4 = 0x72eb38;
    uVar4 = FUN_00413367();
    iStack_a4 = *(undefined4 *)(iVar7 + 0x223c);
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    iStack_a8 = iVar7 + 0x2234;
    FUN_00413367();
    uVar4 = FUN_00413367(iVar7 + 0x2240,*(undefined4 *)(iVar7 + 0x2248));
    *(undefined4 *)(unaff_EBP + -0x38) = uVar4;
    piStack_94 = (int *)0x785;
    puStack_98 = (undefined4 *)(unaff_EBP + -0x34);
    piVar8 = (int *)FUN_00679d22();
    piStack_94 = *(int **)(unaff_EBP + 8);
    puStack_98 = *(undefined4 **)(unaff_EBP + -0x3c);
    iStack_a0 = *piVar8;
    iStack_a4 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0x20;
    iStack_a8 = 0x72eb8f;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_94 = (int *)0x72eb9e;
    FUN_00414ebb();
    pcVar9 = VariantInit_exref;
  }
  piStack_94 = *(int **)(iVar7 + 0x2248);
  puStack_98 = (undefined4 *)(iVar7 + 0x2240);
  iVar3 = FUN_00413367();
  if (iVar3 < 1) {
    piStack_94 = *(int **)(iVar7 + 0x2248);
    puStack_98 = (undefined4 *)(iVar7 + 0x2240);
    iVar6 = FUN_00413367();
    iVar3 = *(int *)(unaff_EBP + -0x10);
    if (iVar6 < 0) {
      if (iVar3 == *(int *)(unaff_EBP + -0x2c)) goto LAB_0072ec3e;
      *(int *)(unaff_EBP + 8) = iVar3;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x2c);
      piStack_94 = (int *)0x72ec0f;
      FUN_0045e787();
      if (*(int *)(unaff_EBP + 8) == 0) goto LAB_0072ec3e;
      piStack_94 = *(int **)(unaff_EBP + 8);
    }
    else {
      if (iVar3 == *(int *)(unaff_EBP + -0x20)) goto LAB_0072ec3e;
      *(int *)(unaff_EBP + 8) = iVar3;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x20);
      piStack_94 = (int *)0x72ec2f;
      FUN_0045e787();
      if (*(int *)(unaff_EBP + 8) == 0) goto LAB_0072ec3e;
      piStack_94 = *(int **)(unaff_EBP + 8);
    }
  }
  else {
    if (*(int *)(unaff_EBP + -0x10) == *(int *)(unaff_EBP + -0x28)) goto LAB_0072ec3e;
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + -0x10);
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x28);
    piStack_94 = (int *)0x72ebd4;
    FUN_0045e787();
    if (*(int *)(unaff_EBP + 8) == 0) goto LAB_0072ec3e;
    piStack_94 = *(int **)(unaff_EBP + 8);
  }
  puStack_98 = (undefined4 *)0x72ec3e;
  (**(code **)(*piStack_94 + 8))();
LAB_0072ec3e:
  piStack_94 = (int *)(unaff_EBP + -0x50);
  puStack_98 = (undefined4 *)0x72ec44;
  (*pcVar9)();
  puStack_98 = &DAT_00980690;
  iStack_a0 = 0x72ec52;
  puStack_98 = (undefined4 *)FUN_00402e32();
  if ((int)puStack_98 < 0) {
    FUN_00878dfb();
  }
  puStack_98 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  (*pcVar9)();
  iStack_a0 = unaff_EBP + -0x60;
  iStack_a4 = 0x72ec76;
  iVar3 = FUN_00402e32();
  if (iVar3 < 0) {
    iStack_a0 = 0x72ec82;
    FUN_00878dfb();
  }
  iStack_a0 = unaff_EBP + -0x60;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iStack_a4 = 0x72ec96;
  iStack_a4 = FUN_00449749();
  iStack_a8 = 0x72ec9f;
  uVar4 = FUN_00449713();
  *(int **)(unaff_EBP + 8) = &iStack_a8;
  FUN_00448a17(uVar4);
  uVar10 = 0x74;
  uVar4 = 0x4d;
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_004115d9(0x4d,0x74);
  FUN_00448e3a(uVar4,uVar10);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iStack_a0 = 0x72eccf;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_a0 = 0x72ecda;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_a0 = 0x72ece7;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    iStack_a0 = 0x72ecf2;
    FUN_00878dfb();
  }
  iVar3 = FUN_004bf0d4();
  if (iVar3 == 0) {
    iVar3 = FUN_0072f360();
    *(undefined4 *)(unaff_EBP + 8) = 0x8c;
    if (iVar3 < 0x8d) {
      *(int *)(unaff_EBP + 8) = iVar3;
    }
    iStack_a0 = unaff_EBP + -0x3c;
    iStack_a4 = 0x72f02b;
    piVar8 = (int *)FUN_00679d22();
    iStack_a0 = *piVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    iStack_a4 = unaff_EBP + -0x14;
    iStack_a8 = 0x72f03e;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    iStack_a0 = iVar7 + 0x2618;
    iStack_a4 = 0x72f05f;
    iVar3 = FUN_00413367();
    if (iVar3 != 0) {
      iStack_a0 = iVar7 + 0x2618;
      iStack_a4 = 0x72f077;
      iVar7 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + 8) = 0x8c;
      if (iVar7 < 0x8d) {
        *(int *)(unaff_EBP + 8) = iVar7;
      }
      iStack_a0 = unaff_EBP + -0x3c;
      iStack_a4 = 0x72f096;
      piVar8 = (int *)FUN_00679d22();
      iStack_a0 = *piVar8;
      *(undefined1 *)(unaff_EBP + -4) = 0x2d;
      iStack_a4 = unaff_EBP + -0x14;
      iStack_a8 = 0x72f0a9;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00414ebb();
    }
    iStack_a0 = 0x72f0c2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    iStack_a0 = unaff_EBP + -0x60;
    iStack_a4 = 0x72f0d0;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_a0 = 0x72f0dc;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iStack_a0 = 0x72f0ea;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    iStack_a0 = unaff_EBP + -0x78;
    iStack_a4 = 0x72f0f8;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_a0 = 0x72f104;
      FUN_00878dfb();
    }
    iStack_a0 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    iStack_a4 = 0x72f118;
    iStack_a4 = FUN_00449749();
    iStack_a8 = 0x72f121;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + 8) = &iStack_a8;
    FUN_00448a17(uVar4);
    uVar10 = 0x86;
    uVar4 = 0x4d;
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    FUN_004115d9(0x4d,0x86);
    FUN_00448e3a(uVar4,uVar10);
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iStack_a0 = 0x72f154;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_a0 = 0x72f15f;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_a0 = 0x72f16c;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_a0 = 0x72f177;
      FUN_00878dfb();
    }
    FUN_0072f3cc();
    iStack_a0 = unaff_EBP + 8;
    iStack_a4 = 0x72f196;
    piVar8 = (int *)FUN_00679d22();
    iStack_a0 = *piVar8;
    iStack_a4 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    iStack_a8 = 0x72f1a7;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    iStack_a0 = 0x72f1c2;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    iStack_a0 = unaff_EBP + -0x60;
    iStack_a4 = 0x72f1d1;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_a0 = 0x72f1dd;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    iStack_a0 = 0x72f1e7;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    iStack_a0 = unaff_EBP + -0x78;
    iStack_a4 = 0x72f1f1;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_a0 = 0x72f1fd;
      FUN_00878dfb();
    }
    iStack_a0 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    iStack_a4 = 0x72f211;
    iStack_a4 = FUN_00449749();
    iStack_a8 = 0x72f21a;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + 8) = &iStack_a8;
    FUN_00448a17(uVar4);
    uVar10 = 0x98;
    uVar4 = 0x4d;
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    FUN_004115d9(0x4d,0x98);
    FUN_00448e3a(uVar4,uVar10);
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    iStack_a0 = 0x72f24d;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_a0 = 0x72f258;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
  }
  else {
    FUN_004c2648();
    iStack_a0 = 0x72ed1d;
    iStack_a0 = FUN_0054e7b3();
    iStack_a0 = iStack_a0 + 0x170;
    iStack_a4 = 0x72ed2e;
    iStack_a4 = FUN_00413367();
    iStack_a8 = 0x72ed34;
    uVar4 = FUN_00682a20();
    *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
    iVar7 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x16f);
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (iVar7 != 0) {
      FUN_0045e2eb();
      iStack_a0 = 0x72ed62;
      iVar7 = FUN_0054e7b3();
      iStack_a0 = iVar7 + 0x108;
      iStack_a4 = 0x72ed76;
      FUN_0045f084();
      iStack_a4 = *(undefined4 *)(iVar7 + 0x114);
      iStack_a8 = iVar7 + 0x110;
      sVar2 = FUN_0045f084();
      *(int *)(unaff_EBP + 8) = (int)sVar2;
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x177) != 0) {
      FUN_0045e2eb();
      iStack_a0 = 0x72edbc;
      iVar7 = FUN_0054e7b3();
      iStack_a0 = iVar7 + 0x108;
      iStack_a4 = 0x72edd0;
      FUN_0045f084();
      iStack_a4 = *(undefined4 *)(iVar7 + 0x114);
      iStack_a8 = iVar7 + 0x110;
      sVar2 = FUN_0045f084();
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + (int)sVar2;
    }
    iVar7 = *(int *)(*(int *)(unaff_EBP + -0x3c) + 0x18);
    if (iVar7 < 0x51) {
      iVar7 = 0x50;
    }
    iVar7 = iVar7 + *(int *)(unaff_EBP + 8);
    *(int *)(unaff_EBP + 8) = iVar7;
    if (0x7a < iVar7) {
      *(undefined4 *)(unaff_EBP + 8) = 0x7b;
    }
    iStack_a0 = unaff_EBP + -0x3c;
    iStack_a4 = 0x72ee3e;
    piVar8 = (int *)FUN_00679d22();
    iStack_a0 = *piVar8;
    iStack_a4 = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0x24;
    iStack_a8 = 0x72ee4f;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    iStack_a0 = 0x72ee6a;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    iStack_a0 = unaff_EBP + -0x60;
    iStack_a4 = 0x72ee78;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_a0 = 0x72ee84;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_a0 = 0x72ee8e;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    iStack_a0 = unaff_EBP + -0x78;
    iStack_a4 = 0x72ee9c;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_a0 = 0x72eea8;
      FUN_00878dfb();
    }
    iStack_a0 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iStack_a4 = 0x72eebc;
    iStack_a4 = FUN_00449749();
    iStack_a8 = 0x72eec5;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + -0x3c) = &iStack_a8;
    FUN_00448a17(uVar4);
    uVar10 = 0x86;
    uVar4 = 0x4d;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    FUN_004115d9(0x4d,0x86);
    FUN_00448e3a(uVar4,uVar10);
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    iStack_a0 = 0x72eef8;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_a0 = 0x72ef03;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_a0 = 0x72ef10;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_a0 = 0x72ef1b;
      FUN_00878dfb();
    }
    iVar7 = *(int *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + 8) = 0x7b;
    if (iVar7 < 0x7c) {
      *(int *)(unaff_EBP + 8) = iVar7;
    }
    iStack_a0 = unaff_EBP + -0x3c;
    iStack_a4 = 0x72ef37;
    piVar8 = (int *)FUN_00679d22();
    iStack_a0 = *piVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    iStack_a4 = unaff_EBP + -0x14;
    iStack_a8 = 0x72ef4a;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    iStack_a0 = 0x72ef5f;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    iStack_a0 = unaff_EBP + -0x60;
    iStack_a4 = 0x72ef6d;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_a0 = 0x72ef79;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_a0 = 0x72ef83;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
    iStack_a0 = unaff_EBP + -0x78;
    iStack_a4 = 0x72ef91;
    iVar7 = FUN_00402e32();
    if (iVar7 < 0) {
      iStack_a0 = 0x72ef9d;
      FUN_00878dfb();
    }
    iStack_a0 = unaff_EBP + -0x78;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    iStack_a4 = 0x72efb1;
    iStack_a4 = FUN_00449749();
    iStack_a8 = 0x72efba;
    uVar4 = FUN_00449713();
    *(int **)(unaff_EBP + 8) = &iStack_a8;
    FUN_00448a17(uVar4);
    uVar10 = 0x98;
    uVar4 = 0x4d;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    FUN_004115d9(0x4d,0x98);
    FUN_00448e3a(uVar4,uVar10);
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    iStack_a0 = 0x72efed;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      iStack_a0 = 0x72eff8;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
  }
  iStack_a0 = 0x72f265;
  iVar7 = FUN_00402bc3();
  if (iVar7 < 0) {
    iStack_a0 = 0x72f270;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int *)(unaff_EBP + -100) != 0) {
    iStack_a0 = 0x72f284;
    FUN_00449913();
    *(undefined4 *)(unaff_EBP + -100) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_a0 = 0x72f2a4;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x28) != (int *)0x0) {
    iStack_a0 = 0x72f2b5;
    (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
    iStack_a0 = 0x72f2c6;
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x40) != (int *)0x0) {
    iStack_a0 = 0x72f2d7;
    (**(code **)(**(int **)(unaff_EBP + -0x40) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
    iStack_a0 = 0x72f2e8;
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
    iStack_a0 = 0x72f2f9;
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


