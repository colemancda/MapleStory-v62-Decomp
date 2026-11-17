/* FUN_007c582b - 0x007c582b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c582b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int unaff_EBP;
  undefined4 uVar10;
  undefined4 uVar11;
  int iStack_80;
  undefined1 *puStack_7c;
  int iStack_78;
  int iStack_74;
  
  FUN_00879bb8();
  iVar3 = DAT_00978368 + 0x3128;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 1;
  *(int *)(unaff_EBP + -0x48) = iVar3;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_004133f0();
  *(undefined4 *)(unaff_EBP + -0x28) = uVar1;
  uVar2 = FUN_0043f6fe();
  if (uVar2 < 0x80000000) {
LAB_007c58a2:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    iVar3 = FUN_004865cc();
    if ((iVar3 != 0) || (*(int *)(extraout_ECX + 0x1e64) != 0)) goto LAB_007c58a2;
    if ((*(uint *)(extraout_ECX + 0x52c) & 0xfffffffe) == 10) {
      iStack_74 = *(int *)(unaff_EBP + 8);
      iStack_78 = 0x7c58a2;
      FUN_007c56a1();
      goto LAB_007c58a2;
    }
    uVar1 = FUN_007d1e08();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
    iStack_74 = 0;
    iStack_78 = 0;
    puStack_7c = *(undefined1 **)(unaff_EBP + 8);
    iStack_80 = 0x7c58d6;
    puStack_7c = (undefined1 *)FUN_0044dddc();
    iStack_80 = *(int *)(extraout_ECX + 0x4b0);
    iVar3 = FUN_0065400c();
    if (-1 < iVar3) {
      iStack_74 = 0;
      iStack_78 = 6;
      iStack_80 = 0x7c58fc;
      puStack_7c = (undefined1 *)iVar3;
      FUN_0078c1bd();
      iStack_78 = extraout_ECX + 0x4c0;
      *(int **)(unaff_EBP + -0x34) = &iStack_74;
      puStack_7c = (undefined1 *)0x7c590f;
      iStack_74 = extraout_ECX_00;
      FUN_004059fd();
      iStack_78 = 0;
      iStack_80 = unaff_EBP + -0x14;
      puStack_7c = (undefined1 *)0x0;
      FUN_007938b4();
      piVar7 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if ((piVar7 == (int *)0x0) || (*piVar7 == 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(*piVar7 + -4) >> 1;
      }
      if (uVar2 == 0) {
        if (piVar7 != (int *)0x0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
      }
      else {
        uVar2 = FUN_0043f6fe();
        iStack_74 = *(int *)(unaff_EBP + 8);
        iStack_78 = (uint)(uVar2 < 0x80000000) * 0x3f4;
        iVar4 = (*(int *)(iStack_78 + 0x53c + extraout_ECX) * (&DAT_00978688)[iVar3 * 6]) /
                (int)(&DAT_00978684)[iVar3 * 6];
        *(int **)(unaff_EBP + -0x34) = &iStack_78;
        puStack_7c = (undefined1 *)(unaff_EBP + -0x14);
        *(int *)(unaff_EBP + -0x30) = iVar4;
        iStack_80 = 0x7c5995;
        FUN_004059fd();
        iVar4 = iVar4 + *(int *)(unaff_EBP + -0x20);
        *(int *)(unaff_EBP + -0x34) = iVar4;
        iStack_80 = 0x7c59a6;
        puStack_7c = (undefined1 *)iVar3;
        iStack_80 = FUN_0043f900();
        FUN_0078ceed(iVar4);
        if (*(int *)(unaff_EBP + 0xc) != 0) {
          piVar7 = (int *)(extraout_ECX + 4);
          puVar5 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
          *(undefined4 *)(unaff_EBP + -0x44) = *puVar5;
          iVar3 = (**(code **)(*piVar7 + 0x10))();
          uVar2 = *(uint *)(extraout_ECX + 0x52c);
          iVar4 = *(int *)(iVar3 + 4) + -0x1c;
          *(int *)(unaff_EBP + -0x40) = iVar4;
          *(int *)(unaff_EBP + -0x38) = iVar4;
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          *(uint *)(unaff_EBP + -0x3c) =
               (-(uint)((uVar2 & 1) != 0) & 0xfffffda8) + 300 + *(int *)(unaff_EBP + -0x44);
          iVar3 = *piVar7;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          piVar6 = (int *)(**(code **)(iVar3 + 0x10))();
          if ((*piVar6 < -0x118) && (uVar2 = *(uint *)(extraout_ECX + 0x52c), (uVar2 & 1) == 0)) {
LAB_007c5a52:
            *(undefined4 *)(unaff_EBP + -0x1c) = 1;
            *(undefined4 *)(unaff_EBP + -0x38) = 0xffffff69;
            *(uint *)(unaff_EBP + -0x3c) = (-(uint)((uVar2 & 1) != 0) & 0xffffff66) - 0xc1;
            iStack_74 = unaff_EBP + -0x28;
            iStack_78 = 0x7c5a86;
            piVar7 = (int *)FUN_00679d86();
            iStack_78 = *piVar7;
            iStack_74 = unaff_EBP + -0x10;
            *(undefined1 *)(unaff_EBP + -4) = 3;
            puStack_7c = (undefined1 *)0x7c5a98;
            FUN_00437222();
            *(undefined1 *)(unaff_EBP + -4) = 2;
            FUN_00402676();
            iStack_74 = 0x7c5ab3;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
            iStack_74 = unaff_EBP + -0x6c;
            iStack_78 = 0x7c5ac2;
            iVar3 = FUN_00402e32();
            if (iVar3 < 0) {
              iStack_74 = 0x7c5ace;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 4;
            iStack_74 = 0x7c5ad8;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
            iStack_74 = unaff_EBP + -0x5c;
            iStack_78 = 0x7c5ae2;
            iVar3 = FUN_00402e32();
            if (iVar3 < 0) {
              iStack_74 = 0x7c5aee;
              FUN_00878dfb();
            }
            piVar7 = *(int **)(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 5;
            if (piVar7 == (int *)0x0) {
              iStack_74 = 0x7c5b03;
              FUN_00878dfb();
              piVar7 = *(int **)(unaff_EBP + -0x10);
            }
            puStack_7c = *(undefined1 **)(unaff_EBP + -0x6c);
            iStack_78 = *(int *)(unaff_EBP + -0x68);
            iVar3 = *piVar7;
            iStack_74 = *(int *)(unaff_EBP + -100);
            *(int **)(unaff_EBP + -0x28) = piVar7;
            iStack_80 = *(int *)(unaff_EBP + -0x50);
            iVar3 = (**(code **)(iVar3 + 0x90))
                              (piVar7,*(undefined4 *)(unaff_EBP + -0x3c),0xffffff83,
                               *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58)
                               ,*(undefined4 *)(unaff_EBP + -0x54));
            if (iVar3 < 0) {
              FUN_00878e09(iVar3,*(undefined4 *)(unaff_EBP + -0x28),&DAT_00963de8);
            }
            *(undefined1 *)(unaff_EBP + -4) = 4;
            iVar3 = FUN_00402bc3(unaff_EBP + -0x5c);
            if (iVar3 < 0) {
              FUN_00878dfb(iVar3);
            }
            *(undefined1 *)(unaff_EBP + -4) = 2;
            iVar3 = FUN_00402bc3(unaff_EBP + -0x6c);
            if (iVar3 < 0) {
              FUN_00878dfb(iVar3);
            }
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
            *(undefined1 *)(unaff_EBP + -4) = 6;
            puVar5 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0x3ac);
            uVar1 = *puVar5;
            *(undefined1 *)(unaff_EBP + -4) = 7;
            FUN_00434e21(unaff_EBP + -0x18,uVar1,0x18704);
            *(undefined1 *)(unaff_EBP + -4) = 6;
            FUN_00414ebb();
            uVar1 = FUN_00679d22(unaff_EBP + -0x2c,0x3ef);
            *(undefined1 *)(unaff_EBP + -4) = 8;
            piVar7 = (int *)FUN_004f1f89(unaff_EBP + -0x28,&DAT_009640ac,uVar1);
            iVar3 = *piVar7;
            *(undefined1 *)(unaff_EBP + -4) = 9;
            if (iVar3 == 0) {
              uVar1 = 0;
            }
            else {
              uVar1 = *(undefined4 *)(iVar3 + -4);
            }
            FUN_0045efbb(iVar3,uVar1);
            *(undefined1 *)(unaff_EBP + -4) = 8;
            FUN_00414ebb();
            *(undefined1 *)(unaff_EBP + -4) = 6;
            FUN_00414ebb();
            (*DAT_0097b4c8)(0,0,*(undefined4 *)(unaff_EBP + -0x18),0xffffffff,0,0);
            FUN_0087a1b0();
            *(int **)(unaff_EBP + -0x2c) = &iStack_74;
            iStack_78 = 0;
            puStack_7c = (undefined1 *)0x7c5c44;
            FUN_00424e0a();
            iStack_78 = 0;
            puStack_7c = (undefined1 *)0x0;
            *(int **)(unaff_EBP + -0x28) = &iStack_80;
            iStack_80 = extraout_ECX_01;
            FUN_00433bdf(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 6;
            uVar1 = FUN_0043f900();
            uVar8 = FUN_00449713(&stack0xffffff94,0xffffffff,uVar1);
            uVar8 = FUN_00456ad5(uVar8);
            FUN_00424e82(uVar8);
            FUN_0042b613(uVar8,uVar1);
            *(undefined1 *)(unaff_EBP + -4) = 2;
            FUN_00414ebb();
            iVar4 = *(int *)(unaff_EBP + -0x40);
          }
          else {
            piVar7 = (int *)(**(code **)(*piVar7 + 0x10))();
            if ((-0x104 < *piVar7) && (uVar2 = *(uint *)(extraout_ECX + 0x52c), (uVar2 & 1) != 0))
            goto LAB_007c5a52;
            *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          }
          iStack_74 = 0x7c5c9e;
          uVar1 = FUN_0087a90a();
          *(undefined4 *)(unaff_EBP + -0x2c) = uVar1;
          iVar3 = __ftol();
          if (*(int *)(unaff_EBP + -0x1c) == 0) {
            *(undefined4 *)(unaff_EBP + -0x28) = 0;
            *(undefined4 *)(unaff_EBP + -0x24) = 1;
            *(int *)(unaff_EBP + -0x18) = unaff_EBP + -0x28;
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
          }
          else {
            *(int *)(unaff_EBP + -0x18) = unaff_EBP + -0x10;
          }
          iStack_74 = *(int *)(unaff_EBP + 8);
          *(int **)(unaff_EBP + 8) = &iStack_78;
          puStack_7c = &DAT_00978474;
          iStack_80 = 0x7c5ceb;
          FUN_00448a17();
          *(undefined4 *)(unaff_EBP + -4) = 0xd;
          puStack_7c = (undefined1 *)0x7c5cfd;
          FUN_00424e27();
          puStack_7c = (undefined1 *)0x7c5d04;
          puStack_7c = (undefined1 *)FUN_004320e3();
          *(int **)(unaff_EBP + -0x2c) = &iStack_80;
          FUN_00433bdf(*(undefined4 *)(unaff_EBP + -0x18));
          uVar1 = *(undefined4 *)(unaff_EBP + -0x38);
          uVar8 = *(undefined4 *)(unaff_EBP + -0x3c);
          iVar9 = *(int *)(unaff_EBP + -0x30) + iVar3 + *(int *)(unaff_EBP + -0x20);
          uVar11 = *(undefined4 *)(unaff_EBP + -0x44);
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          uVar10 = *(undefined4 *)(unaff_EBP + -0x34);
          FUN_00424e82(uVar10,iVar9,uVar11,iVar4,uVar8,uVar1);
          FUN_00427b7d(uVar10,iVar9,uVar11,iVar4,uVar8,uVar1);
          *(undefined4 *)(unaff_EBP + -4) = 2;
          if (((*(byte *)(unaff_EBP + -0x24) & 1) != 0) &&
             (*(int **)(unaff_EBP + -0x28) != (int *)0x0)) {
            iStack_74 = 0x7c5d53;
            (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
          }
          if (*(int *)(unaff_EBP + -0x1c) != 0) {
            uVar1 = FUN_007d1e08();
            *(undefined4 *)(extraout_ECX + 0x1e5c) = uVar1;
            *(int *)(extraout_ECX + 0x1e60) = iVar3 * 3;
            *(undefined4 *)(extraout_ECX + 0x1e64) = *(undefined4 *)(unaff_EBP + 0xc);
          }
          *(undefined4 *)(unaff_EBP + -0x4c) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
            iStack_74 = 0x7c5d8b;
            (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
          }
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            FUN_004030b1();
          }
          goto LAB_007c58ad;
        }
        if (*(int *)(unaff_EBP + -0x14) != 0) {
          FUN_004030b1();
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
        }
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_007a934b();
LAB_007c58ad:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


