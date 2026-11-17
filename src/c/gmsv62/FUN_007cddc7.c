/* FUN_007cddc7 - 0x007cddc7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007cddc7(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  LONG *lpAddend;
  undefined4 uVar8;
  int *piVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  uint extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  uint extraout_ECX_04;
  int unaff_EBP;
  int iVar10;
  int iVar11;
  bool bVar12;
  float10 fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iStack_e0;
  int iStack_dc;
  undefined1 *puStack_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 in_stack_ffffff34;
  double dStack_cc;
  uint uStack_c8;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    dStack_cc = (double)CONCAT44(0x7cddf3,in_stack_ffffff34);
    uVar1 = FUN_0043f6fe();
    iVar2 = (uint)(uVar1 < 0x80000000) * 0x3f4 + extraout_ECX + 0x534;
    iVar10 = *(int *)(iVar2 + 0xc);
    if ((iVar10 != 0) && (*(int *)(iVar10 + -4) != 0)) {
      iVar11 = 0;
      if (iVar10 != 0) {
        iVar11 = *(int *)(iVar10 + -4);
      }
      iVar10 = *(int *)(iVar2 + 8) - *(int *)(*(int *)(iVar2 + 0xc) + -4 + iVar11 * 4);
      *(int *)(unaff_EBP + -0x40) = iVar10;
      dStack_cc = (double)CONCAT44(0x7cde36,in_stack_ffffff34);
      iVar2 = FUN_007d1e08();
      *(undefined4 *)(unaff_EBP + -0x1c) = **(undefined4 **)(unaff_EBP + 0xc);
      dStack_cc = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 0x10),unaff_EBP + -0x20);
      *(int *)(unaff_EBP + -0x44) = iVar2;
      iStack_d0 = 0x7cde4f;
      FUN_007ab103();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      dStack_cc = (double)CONCAT44(unaff_EBP + -0x3c,0x7cde5f);
      FUN_00793a7d();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if ((*(int **)(unaff_EBP + -0x3c) == (int *)0x0) ||
         (iVar11 = **(int **)(unaff_EBP + -0x3c), iVar11 == 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(uint *)(iVar11 + -4) >> 1;
      }
      if (uVar1 != 0) {
        uStack_c8 = 0;
        uVar3 = FUN_007a9209();
        dStack_cc = (double)CONCAT44(uStack_c8,uVar3);
        iStack_d4 = unaff_EBP + -0x3c;
        *(int **)(unaff_EBP + -0x18) = &iStack_d0;
        puStack_d8 = (undefined1 *)0x7cde97;
        iStack_d0 = extraout_ECX_00;
        FUN_004059fd();
        iStack_d4 = *(int *)(unaff_EBP + 0x14);
        iStack_dc = iVar2 + iVar10;
        puStack_d8 = *(undefined1 **)(unaff_EBP + 0x18);
        iStack_e0 = 0x7cdea7;
        FUN_0078ceed();
      }
      dStack_cc = (double)CONCAT44(0x7cdeb2,in_stack_ffffff34);
      puVar4 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      *(undefined4 *)(unaff_EBP + -0x28) = *puVar4;
      dStack_cc = (double)CONCAT44(0x7cdebe,in_stack_ffffff34);
      iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      *(int *)(unaff_EBP + -0x24) = *(int *)(iVar2 + 4) + -0x1c;
      uVar1 = **(uint **)(unaff_EBP + 0x20);
      if (uVar1 == 0) {
        iStack_d0 = 0;
      }
      else {
        iStack_d0 = *(int *)(uVar1 - 4);
      }
      puStack_d8 = *(undefined1 **)(extraout_ECX + 0x4a4);
      dStack_cc = (double)(ulonglong)uVar1;
      iStack_d4 = *(int *)(unaff_EBP + 0x14);
      iStack_dc = *(int *)(unaff_EBP + 0x10);
      iStack_e0 = *(int *)(unaff_EBP + 0xc);
      FUN_0064ba86();
      *(undefined4 *)(unaff_EBP + 0x14) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      do {
        iVar2 = **(int **)(unaff_EBP + 0x20);
        if ((iVar2 == 0) || (*(uint *)(iVar2 + -4) <= *(uint *)(unaff_EBP + 0x14)))
        goto LAB_007ce318;
        piVar9 = (int *)(*(uint *)(unaff_EBP + 0x14) * 0x98 + iVar2);
        iVar2 = *piVar9;
        *(int *)(unaff_EBP + -0x48) = iVar2;
        dStack_cc = (double)CONCAT44(0x7cdf2f,in_stack_ffffff34);
        piVar5 = (int *)(**(code **)(*(int *)(iVar2 + 4) + 0x10))();
        dStack_cc = (double)CONCAT44(0x7cdf3c,in_stack_ffffff34);
        piVar6 = (int *)(**(code **)(*(int *)(*(int *)(unaff_EBP + -0x14) + 4) + 0x10))();
        iVar10 = *piVar5;
        iVar2 = *piVar6;
        iVar11 = *(int *)(unaff_EBP + -0x28);
        piVar9[0x24] = iVar11;
        *(uint *)(unaff_EBP + -0x10) = (uint)(iVar10 < iVar2);
        iVar11 = (-(uint)(iVar10 < iVar2 != 0) & 0xffffff9c) + 0x32 + iVar11;
        piVar9[0x25] = *(int *)(unaff_EBP + -0x24);
        dStack_cc = (double)CONCAT44(1,unaff_EBP + -0x38);
        *(int *)(unaff_EBP + -0x6c) = iVar11;
        iStack_d0 = 0x7cdf79;
        FUN_005c5b12();
        if ((((*(int *)(unaff_EBP + -0x1c) != 0x2195ad) &&
             ((((iVar2 = *(int *)(unaff_EBP + -0x1c), iVar2 != 0x231c4a && (iVar2 != 0x20361a)) &&
               (iVar2 != 0x23435c)) && ((iVar2 != 0x21bcba && (iVar2 != 0x205d29)))))) &&
            (iVar2 != 0x21e3c9)) &&
           (((iVar2 != 0x236a69 && (iVar2 != 0x205d2f)) &&
            ((iVar2 != 0x21e3cf && ((iVar2 != 0x236a70 && (iVar2 != 0x21e3ce)))))))) {
          dStack_cc = (double)CONCAT44(unaff_EBP + -0x38,0x7cdfdc);
          iVar2 = (*DAT_0097b5a4)();
          if (iVar2 != 0) goto LAB_007ce318;
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            if (*(int *)(unaff_EBP + -0x38) <= iVar11) goto LAB_007ce318;
          }
          else if (iVar11 <= *(int *)(unaff_EBP + -0x30)) goto LAB_007ce318;
        }
        iVar2 = *(int *)(unaff_EBP + -0x34);
        if ((piVar9[0x25] < iVar2) || (iVar2 = *(int *)(unaff_EBP + -0x2c), iVar2 < piVar9[0x25])) {
          piVar9[0x25] = iVar2;
        }
        iVar2 = *(int *)(unaff_EBP + -0x30);
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          iVar7 = (*(int *)(unaff_EBP + -0x38) + iVar2) / 2;
          iVar2 = *(int *)(unaff_EBP + -0x38) + 10;
          bVar12 = SBORROW4(iVar2,iVar7);
          iVar10 = iVar2 - iVar7;
        }
        else {
          iVar7 = (*(int *)(unaff_EBP + -0x38) + iVar2) / 2;
          iVar2 = iVar2 + -10;
          bVar12 = SBORROW4(iVar7,iVar2);
          iVar10 = iVar7 - iVar2;
        }
        if (bVar12 != iVar10 < 0) {
          iVar7 = iVar2;
        }
        iVar2 = piVar9[0x25] - *(int *)(unaff_EBP + -0x24);
        piVar9[0x24] = iVar7;
        *(int *)(unaff_EBP + -0x10) = iVar2 * iVar2 + (iVar7 - iVar11) * (iVar7 - iVar11);
        dStack_cc = (double)*(int *)(unaff_EBP + -0x10);
        iStack_d0 = 0x7ce071;
        fVar13 = (float10)FUN_0087af44();
        uVar1 = uStack_c8;
        if ((float10)_DAT_008ecb58 < fVar13) {
          *(int *)(unaff_EBP + -0x10) = piVar9[0x24] - iVar11;
          dStack_cc = (double)CONCAT44(0x7ce09e,in_stack_ffffff34);
          iVar2 = __ftol();
          piVar9[0x24] = iVar2;
          *(int *)(unaff_EBP + -0x10) = piVar9[0x25] - *(int *)(unaff_EBP + -0x24);
          dStack_cc = (double)CONCAT44(0x7ce0bd,in_stack_ffffff34);
          iVar2 = __ftol();
          piVar9[0x25] = iVar2;
          uVar1 = extraout_ECX_01;
        }
        if ((**(int **)(unaff_EBP + 0xc) == 0x2195ad) || (**(int **)(unaff_EBP + 0xc) == 0x231c4a))
        {
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + 0x14) * 0x32;
        }
        else {
          if (*(int **)(unaff_EBP + -0x20) == (int *)0x0) {
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
          }
          else {
            iVar2 = **(int **)(unaff_EBP + -0x20);
            if (iVar2 == 0) {
              uVar1 = 0;
            }
            else {
              uVar1 = *(uint *)(iVar2 + -4) >> 1;
            }
            *(uint *)(unaff_EBP + -0x10) = uVar1;
          }
          dStack_cc = (double)CONCAT44(0x7ce102,in_stack_ffffff34);
          uVar1 = __ftol();
          uVar1 = -(uint)(*(int *)(unaff_EBP + -0x10) != 0) & uVar1;
          *(uint *)(unaff_EBP + -0x10) = uVar1;
        }
        if (**(int **)(unaff_EBP + 0xc) == 0x21e3ce) {
          if (*(int *)(unaff_EBP + 0x14) == 0) {
            *(undefined4 *)(unaff_EBP + -0x4c) = *(undefined4 *)(unaff_EBP + -0x24);
            uVar1 = *(uint *)(*(int *)(unaff_EBP + -0x14) + 0x52c);
            *(int *)(unaff_EBP + -0x50) = *(int *)(unaff_EBP + -0x28);
            *(uint *)(unaff_EBP + -0x50) =
                 (-(uint)((uVar1 & 1) != 0) & 0xffffffce) + 0x19 + *(int *)(unaff_EBP + -0x28);
          }
          else {
            dStack_cc = (double)CONCAT44(1,unaff_EBP + -0x7c);
            iStack_d0 = 0x7ce170;
            FUN_005c5b12();
            *(int *)(unaff_EBP + -0x50) =
                 (*(int *)(unaff_EBP + -0x7c) + *(int *)(unaff_EBP + -0x74)) / 2;
            *(int *)(unaff_EBP + -0x4c) =
                 (*(int *)(unaff_EBP + -0x78) + *(int *)(unaff_EBP + -0x70)) / 2;
          }
          dStack_cc = (double)CONCAT44(1,unaff_EBP + -100);
          iStack_d0 = 0x7ce1a3;
          FUN_005c5b12();
          iVar2 = *(int *)(unaff_EBP + -0x5c);
          iVar10 = *(int *)(unaff_EBP + -100);
          iVar11 = *(int *)(unaff_EBP + -0x58);
          iVar7 = *(int *)(unaff_EBP + -0x60);
          dStack_cc = (double)((ulonglong)*(uint *)(unaff_EBP + -0x20) << 0x20);
          *(uint **)(unaff_EBP + -0x54) = &uStack_c8;
          if (*(int *)(unaff_EBP + -0x20) != 0) {
            lpAddend = (LONG *)(*(int *)(unaff_EBP + -0x20) + 8);
            dStack_cc = (double)CONCAT44(*(uint *)(unaff_EBP + -0x20),lpAddend);
            iStack_d0 = 0x7ce1dd;
            InterlockedIncrement(lpAddend);
          }
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x44) + *(int *)(unaff_EBP + -0x40);
          *(undefined1 *)(unaff_EBP + -4) = 2;
          FUN_00424e27();
          uVar3 = FUN_004320e3();
          dStack_cc = (double)CONCAT44(uStack_c8,uVar3);
          iVar17 = *(int *)(unaff_EBP + -0x18);
          puStack_d8 = *(undefined1 **)(unaff_EBP + -0x4c);
          iStack_e0 = iVar17 + 0x10e;
          iStack_dc = *(int *)(unaff_EBP + -0x50);
          iStack_d4 = (iVar10 + iVar2) / 2;
          iStack_d0 = (iVar7 + iVar11) / 2;
          FUN_00424e82(iVar17);
          FUN_00432a81(iVar17);
        }
        else {
          dStack_cc = (double)(ulonglong)uVar1;
          iStack_d0 = unaff_EBP + -0x20;
          *(double **)(unaff_EBP + -0x54) = &stack0xffffff34;
          iStack_d4 = 0x7ce234;
          FUN_004059fd();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_d0 = 0x7ce246;
          FUN_00424e27();
          iStack_d0 = 0x7ce24d;
          iStack_d0 = FUN_004320e3();
          puStack_d8 = (undefined1 *)&iStack_d4;
          *(int **)(unaff_EBP + -0x18) = &iStack_d4;
          iStack_dc = 0x7ce25d;
          iStack_d4 = extraout_ECX_02;
          FUN_005cb50c();
          puStack_d8 = (undefined1 *)piVar9[0x25];
          iStack_dc = piVar9[0x24];
          iStack_e0 = *(int *)(unaff_EBP + -0x24);
          iVar2 = *(int *)(unaff_EBP + -0x44) + *(int *)(unaff_EBP + -0x40);
          iVar10 = *(int *)(unaff_EBP + -0x10) + iVar2;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          FUN_00424e82(iVar2,iVar10,iVar11);
          FUN_00427cd1(iVar2,iVar10,iVar11);
        }
        iVar2 = *(int *)(unaff_EBP + -0x40);
        if (**(int **)(unaff_EBP + 0xc) == 0x231c4a) {
          *(undefined4 *)(unaff_EBP + 8) = 1;
          iVar2 = 0;
        }
        iVar10 = 0;
        if (0 < *(int *)(unaff_EBP + 8)) {
          iVar11 = *(int *)(unaff_EBP + -0x44);
          *(int *)(unaff_EBP + -0x18) = iVar2 + *(int *)(unaff_EBP + -0x10) + iVar11;
          piVar5 = piVar9 + 6;
          do {
            dStack_cc = 0.0;
            iStack_d0 = 0;
            iStack_d4 = 0;
            puStack_d8 = (undefined1 *)0x1;
            iStack_dc = 0;
            *(int **)(unaff_EBP + -0x54) = &iStack_e0;
            iStack_e0 = iVar11;
            FUN_0067d25d(&iStack_e0,*(undefined4 *)(unaff_EBP + 0x14));
            iVar2 = piVar9[0x25];
            iVar11 = piVar9[0x24];
            iVar7 = piVar5[0xf];
            iVar17 = *piVar5;
            uVar3 = *(undefined4 *)(unaff_EBP + 0x18);
            iVar16 = piVar9[1];
            uVar15 = *(undefined4 *)(unaff_EBP + -0x18);
            uVar14 = *(undefined4 *)(unaff_EBP + -0x1c);
            iVar18 = iVar10;
            uVar8 = FUN_0067e5d1(uVar14,uVar15,iVar16,uVar3,iVar17,iVar7,iVar10,iVar11,iVar2);
            FUN_005cbf42(uVar8,uVar14,uVar15,iVar16,uVar3,iVar17,iVar7,iVar18,iVar11,iVar2);
            iVar10 = iVar10 + 1;
            piVar5 = piVar5 + 1;
            iVar11 = extraout_ECX_03;
          } while (iVar10 < *(int *)(unaff_EBP + 8));
        }
        *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
      } while( true );
    }
  }
  goto LAB_007ce66b;
LAB_007ce318:
  iVar2 = *(int *)(unaff_EBP + -0x1c);
  if (iVar2 == 0x20361a) {
    dStack_cc = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 0x10),0x7ce4c7);
    iVar2 = FUN_006509a1();
    dStack_cc = (double)CONCAT44(iVar2 + 0x16c,unaff_EBP + -100);
    iStack_d0 = 0x7ce4d6;
    FUN_00411537();
    iVar2 = *(int *)(unaff_EBP + -0x14);
    dStack_cc = (double)CONCAT44(0x7ce4e6,in_stack_ffffff34);
    iVar10 = (**(code **)(*(int *)(iVar2 + 4) + 0x10))();
    uStack_c8 = *(int *)(iVar10 + 4) - 0x28;
    puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar2 + 4) + 0x10))();
    dStack_cc = (double)CONCAT44(uStack_c8,*puVar4);
    iStack_d0 = unaff_EBP + -100;
    iStack_d4 = 0x7ce500;
    (*DAT_0097b54c)();
    dStack_cc = (double)CONCAT44(unaff_EBP + -0x18,0x7ce50c);
    piVar9 = (int *)FUN_0040f150();
    puVar4 = (undefined4 *)*piVar9;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (puVar4 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar4;
    }
    dStack_cc = (double)CONCAT44(unaff_EBP + -100,uVar3);
    iStack_d0 = 0x7ce52c;
    FUN_00428339();
    iVar2 = *(int *)(unaff_EBP + -0x18);
LAB_007ce52f:
    if (iVar2 != 0) {
      dStack_cc = (double)CONCAT44(0x7ce538,in_stack_ffffff34);
      FUN_004030b1();
    }
  }
  else {
    if (iVar2 == 0x205d29) {
LAB_007ce434:
      iVar2 = -0x4b - (*(int *)(unaff_EBP + 0x24) * 3) / 200;
      *(int *)(unaff_EBP + -0x34) = iVar2;
      *(int *)(unaff_EBP + -0x2c) = -iVar2;
      piVar9 = (int *)(*(int *)(unaff_EBP + -0x14) + 4);
      iVar10 = -100 - *(int *)(unaff_EBP + 0x24) / 0x32;
      iVar2 = *piVar9;
      *(int *)(unaff_EBP + -0x38) = iVar10;
      *(int *)(unaff_EBP + -0x30) = -iVar10;
      dStack_cc = (double)CONCAT44(0x7ce471,in_stack_ffffff34);
      iVar2 = (**(code **)(iVar2 + 0x10))();
      uStack_c8 = *(int *)(iVar2 + 4) - 0x28;
      puVar4 = (undefined4 *)(**(code **)(*piVar9 + 0x10))();
      dStack_cc = (double)CONCAT44(uStack_c8,*puVar4);
      iStack_d0 = unaff_EBP + -0x38;
      iStack_d4 = 0x7ce48b;
      (*DAT_0097b54c)();
      dStack_cc = (double)CONCAT44(unaff_EBP + 0x24,0x7ce497);
      piVar9 = (int *)FUN_0040f150();
      puVar4 = (undefined4 *)*piVar9;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (puVar4 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *puVar4;
      }
      dStack_cc = (double)CONCAT44(unaff_EBP + -0x38,uVar3);
      iStack_d0 = 0x7ce4b7;
      FUN_00428339();
      iVar2 = *(int *)(unaff_EBP + 0x24);
      goto LAB_007ce52f;
    }
    if (iVar2 == 0x205d2f) {
LAB_007ce359:
      if (*(int *)(unaff_EBP + -0x1c) == 0x205d2f) {
        *(undefined4 *)(unaff_EBP + 8) = 3000;
      }
      else if (*(int *)(unaff_EBP + -0x1c) == 0x21e3cf) {
        *(undefined4 *)(unaff_EBP + 8) = 0xac8;
      }
      dStack_cc = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 0x10),0x7ce386);
      iVar2 = FUN_006509a1();
      dStack_cc = (double)CONCAT44(iVar2 + 0x16c,unaff_EBP + -0x38);
      iStack_d0 = 0x7ce395;
      FUN_00411537();
      iVar2 = *(int *)(unaff_EBP + -0x14);
      uVar1 = *(uint *)(iVar2 + 0x52c);
      dStack_cc = (double)CONCAT44(0x7ce3ab,in_stack_ffffff34);
      iVar10 = (**(code **)(*(int *)(iVar2 + 4) + 0x10))();
      *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar10 + 4);
      dStack_cc = (double)CONCAT44(0x7ce3b8,in_stack_ffffff34);
      puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar2 + 4) + 0x10))();
      uVar3 = *puVar4;
      if ((uVar1 & 1) == 0) {
        *(int *)(unaff_EBP + -0x30) = -*(int *)(unaff_EBP + -0x30);
        *(int *)(unaff_EBP + -0x38) = -*(int *)(unaff_EBP + -0x38);
        dStack_cc = (double)CONCAT44(unaff_EBP + -0x30,unaff_EBP + -0x38);
        iStack_d0 = 0x7ce3dc;
        FUN_004459fe();
      }
      iStack_d0 = unaff_EBP + -0x38;
      dStack_cc = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 0x10),uVar3);
      iStack_d4 = 0x7ce3ec;
      (*DAT_0097b54c)();
      dStack_cc = (double)CONCAT44(unaff_EBP + 0x14,0x7ce3f8);
      puVar4 = (undefined4 *)FUN_00424619();
      piVar9 = (int *)*puVar4;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (piVar9 == (int *)0x0) {
        iStack_e0 = 0;
      }
      else {
        iStack_e0 = *piVar9;
      }
      dStack_cc = 1.25986739689518e-321;
      iStack_d0 = 0x80;
      iStack_d4 = *(int *)(unaff_EBP + 8);
      iStack_dc = unaff_EBP + -0x38;
      puStack_d8 = (undefined1 *)0xb4;
      FUN_00428a3e();
      iVar2 = *(int *)(unaff_EBP + 0x14);
      goto LAB_007ce52f;
    }
    if (iVar2 == 0x21e3c9) goto LAB_007ce434;
    if (iVar2 == 0x21e3cf) goto LAB_007ce359;
    if (iVar2 == 0x236a69) goto LAB_007ce434;
    if (iVar2 == 0x236a70) goto LAB_007ce359;
  }
  if ((**(int **)(unaff_EBP + 0x20) == 0) || (*(int *)(**(int **)(unaff_EBP + 0x20) + -4) == 0)) {
    if ((*(int **)(unaff_EBP + -0x20) == (int *)0x0) ||
       (iVar2 = **(int **)(unaff_EBP + -0x20), iVar2 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(iVar2 + -4) >> 1;
    }
    if ((uVar1 != 0) && (*(int *)(unaff_EBP + -0x1c) != 0x21e3ce)) {
      iVar11 = (-(uint)(*(int *)(unaff_EBP + 0x18) != 0) & 0xffffff9c) + 0x32 +
               *(int *)(unaff_EBP + -0x28);
      iVar2 = (-(uint)(*(int *)(unaff_EBP + 0x18) != 0) & 0xfffffe70) + 200 +
              *(int *)(unaff_EBP + -0x28);
      *(int *)(unaff_EBP + -0x6c) = iVar2;
      iVar2 = iVar2 - iVar11;
      *(int *)(unaff_EBP + 0xc) = iVar2 * iVar2;
      dStack_cc = (double)*(int *)(unaff_EBP + 0xc);
      iStack_d0 = 0x7ce5c0;
      FUN_0087af44();
      dStack_cc = (double)CONCAT44(0x7ce5cd,in_stack_ffffff34);
      iVar2 = __ftol();
      dStack_cc = (double)(ulonglong)extraout_ECX_04;
      iStack_d0 = unaff_EBP + -0x20;
      *(double **)(unaff_EBP + 0xc) = &stack0xffffff34;
      iStack_d4 = 0x7ce5e0;
      FUN_004059fd();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_d0 = 0x7ce5ef;
      FUN_00424e27();
      iStack_d0 = 0x7ce5f6;
      iStack_d0 = FUN_004320e3();
      *(int **)(unaff_EBP + 0x20) = &iStack_d4;
      puStack_d8 = (undefined1 *)0x0;
      iStack_dc = 0x7ce604;
      FUN_00424dd7();
      puStack_d8 = *(undefined1 **)(unaff_EBP + -0x24);
      iStack_dc = *(int *)(unaff_EBP + -0x6c);
      iStack_e0 = *(int *)(unaff_EBP + -0x24);
      iVar10 = iVar2 + *(int *)(unaff_EBP + -0x44) + *(int *)(unaff_EBP + -0x40);
      iVar2 = *(int *)(unaff_EBP + -0x44) + *(int *)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00424e82(iVar2,iVar10,iVar11);
      FUN_00427cd1(iVar2,iVar10,iVar11);
    }
  }
  dStack_cc = 1.8035826833460917e-307;
  iStack_d0 = 4;
  iStack_d4 = unaff_EBP + -0xb8;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  puStack_d8 = (undefined1 *)0x7ce645;
  FUN_0087a0b8();
  *(undefined ***)(unaff_EBP + -0xc4) = &PTR_LAB_008e84a0;
  if (*(int *)(unaff_EBP + -0x3c) != 0) {
    dStack_cc = (double)CONCAT44(0x7ce65b,in_stack_ffffff34);
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  }
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    dStack_cc = (double)CONCAT44(0x7ce66b,in_stack_ffffff34);
    FUN_004030b1();
  }
LAB_007ce66b:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


