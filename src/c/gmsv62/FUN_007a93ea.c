/* FUN_007a93ea - 0x007a93ea in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007a93ea(void)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  undefined4 uVar15;
  int *extraout_ECX;
  int iVar16;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int *extraout_ECX_04;
  undefined4 *extraout_ECX_05;
  int unaff_EBP;
  float10 fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int *piStack_c58;
  int *piStack_c54;
  undefined4 *puStack_c50;
  int *piStack_c4c;
  
  FUN_00879bb8();
  bVar2 = DAT_0097bfd4 & 1;
  *(int **)(unaff_EBP + -0xd8) = extraout_ECX;
  if (bVar2 == 0) {
    DAT_0097bfd4 = DAT_0097bfd4 | 1;
    DAT_0097bfd0 = FUN_0064d61f();
  }
  iVar7 = DAT_00978368;
  *(int *)(unaff_EBP + -0xdc) = DAT_00978368;
  iVar3 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0xac) = *(undefined4 *)(iVar3 + 4);
  if (*(int *)(unaff_EBP + -0xe8) != 0) {
    FUN_0045e7c2();
  }
  *(int *)(unaff_EBP + -0x70) = iVar7 + 0x209c;
  *(int *)(unaff_EBP + -0x104) = iVar7 + 0x2114;
  uVar4 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0xb8) = uVar4;
  uVar4 = FUN_0044dddc();
  *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
  piVar6 = *(int **)(unaff_EBP + 8);
  if (piVar6 == (int *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
LAB_007a94c7:
    *(undefined4 *)(unaff_EBP + -0x9c) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = *piVar6;
    if ((*piVar6 != 0x3ee1ab) && (*piVar6 != 0x40684b)) goto LAB_007a94c7;
    *(undefined4 *)(unaff_EBP + -0x9c) = 1;
  }
  if ((piVar6 == (int *)0x0) ||
     (puVar1 = (undefined *)*piVar6, *(undefined4 *)(unaff_EBP + -0xc4) = 1, puVar1 != &DAT_004e23ea
     )) {
    *(undefined4 *)(unaff_EBP + -0xc4) = 0;
  }
  if ((piVar6 == (int *)0x0) ||
     (iVar3 = *piVar6, *(undefined4 *)(unaff_EBP + -0x34) = 1, iVar3 != 0x4f5c6e)) {
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
  }
  *(undefined4 *)(unaff_EBP + -0xa8) = 1;
  *(int *)(unaff_EBP + -0xa4) = iVar7 + 0x3128;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    uVar4 = FUN_004133f0();
  }
  else {
    uVar4 = *(undefined4 *)(unaff_EBP + 0x1c);
  }
  *(undefined4 *)(unaff_EBP + 0x1c) = uVar4;
  if ((extraout_ECX[0x14b] & 0xfffffffeU) == 0x12) {
LAB_007a9531:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    iVar3 = FUN_00429303();
    uVar5 = *(uint *)(iVar3 + 0x108) >> 1 & 1;
    *(uint *)(unaff_EBP + -0x54) = uVar5;
    if ((uVar5 != 0) &&
       (((*(int *)(unaff_EBP + -0x10) == 0x2f9f6b || (*(int *)(unaff_EBP + -0x10) == 0x31260b)) ||
        (*(int *)(unaff_EBP + -0x10) == 0x4f5c6e)))) goto LAB_007a9531;
    piVar6 = (int *)FUN_00486ada();
    iVar3 = *piVar6;
    if (*(int **)(unaff_EBP + -0x88) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + -0x88) + 8))();
    }
    if (((*(int *)(unaff_EBP + -0x18) == 0x2d) || (*(int *)(unaff_EBP + -0x18) == 0x2e)) &&
       ((*(int *)((-(uint)(iVar3 != 0) & iVar3 - 0xcU) + 0x110) == 0 &&
        (iVar3 = FUN_00614c6f(), iVar3 == 0)))) goto LAB_007a9f45;
    if (*(int *)(unaff_EBP + -0x18) == 0x2f) {
      _piStack_c4c = (double)CONCAT44(0x7a95d1,piStack_c4c);
      iVar3 = FUN_0048bb31();
      if (iVar3 != 0) goto LAB_007a9f45;
    }
    if (*(int *)(unaff_EBP + -0x18) == 0x31) {
      _piStack_c4c = (double)CONCAT44(0x7a95f3,piStack_c4c);
      iVar3 = FUN_0048bb31();
      if (iVar3 != 0) goto LAB_007a9f45;
    }
    iVar3 = FUN_00614c6f();
    if (iVar3 != 0) {
      _piStack_c4c = (double)CONCAT44(0x7a961a,piStack_c4c);
      iVar3 = FUN_0048bb31();
      if (iVar3 != 0) goto LAB_007a9f45;
    }
    if (((*(int *)(unaff_EBP + -0x10) == 0x4f5c6e) || (*(int *)(unaff_EBP + -0x10) == 0x4f837c)) ||
       (*(int *)(unaff_EBP + -0x10) == 0x4f837d)) {
      _piStack_c4c = (double)CONCAT44(0x7a9655,piStack_c4c);
      iVar3 = FUN_004b8f25();
      if ((iVar3 != 0) && (*(int *)(unaff_EBP + -0xb8) < *(int *)(unaff_EBP + -0x88)))
      goto LAB_007a9f45;
    }
    *(int *)(unaff_EBP + -0xfc) = extraout_ECX[300];
    if (*(int *)(unaff_EBP + -0x9c) == 0) {
      if (*(int *)(unaff_EBP + -0xc4) != 0) {
        *(undefined4 *)(unaff_EBP + -0x38) = 0x50;
        goto LAB_007a968c;
      }
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        *(undefined4 *)(unaff_EBP + -0x38) = 0x5a;
        goto LAB_007a968c;
      }
      iVar3 = FUN_0043f79a();
      if ((((iVar3 == 0) || (*(int *)(unaff_EBP + 8) != 0)) || (*(int *)(unaff_EBP + -0x18) == 0x27)
          ) || (*(int *)(unaff_EBP + -0x18) == 0x30)) {
        _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 8),
                                        *(undefined4 *)(unaff_EBP + -0x18));
        puStack_c50 = *(undefined4 **)(unaff_EBP + -0xfc);
        piStack_c54 = (int *)0x7a97fc;
        iVar3 = FUN_0065400c();
        *(int *)(unaff_EBP + -0x38) = iVar3;
        if (-1 < iVar3) goto LAB_007a968c;
        if ((*(int *)(unaff_EBP + 8) != 0) && (iVar7 = FUN_00653f88(), iVar7 != 0)) {
          _piStack_c4c = (double)CONCAT44(0x7a9838,piStack_c4c);
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          _piStack_c4c = (double)CONCAT44(0x7a9844,piStack_c4c);
          FUN_00471102();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          FUN_00414ebb();
        }
      }
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x38) = 0x47;
LAB_007a968c:
      _piStack_c4c = (double)CONCAT44(0x7a969e,piStack_c4c);
      iVar3 = FUN_00413367();
      _piStack_c4c = (double)CONCAT44(*(undefined4 *)(iVar7 + 0x2770),iVar7 + 0x2768);
      *(uint *)(unaff_EBP + -0xcc) = (uint)(iVar3 != 0);
      puStack_c50 = (undefined4 *)0x7a96bd;
      iVar3 = FUN_00413367();
      puStack_c50 = *(undefined4 **)(iVar7 + 0x2548);
      piStack_c54 = (int *)(iVar7 + 0x2540);
      *(uint *)(unaff_EBP + -0x88) = (uint)(iVar3 != 0);
      piStack_c58 = (int *)0x7a96dc;
      iVar7 = FUN_00413367();
      *(undefined4 *)(unaff_EBP + -0xf8) = 0;
      *(undefined4 *)(unaff_EBP + -0xf0) = 0;
      *(undefined4 *)(unaff_EBP + -0x68) = 0;
      *(undefined4 *)(unaff_EBP + -200) = 0;
      *(uint *)(unaff_EBP + -0xd4) = (uint)(iVar7 != 0);
      if (((*(int *)(unaff_EBP + -0x10) != 0x3eba9c) && (*(int *)(unaff_EBP + -0xcc) == 0)) &&
         ((*(int *)(unaff_EBP + -0x9c) == 0 && (*(int *)(unaff_EBP + -0xc4) == 0)))) {
        _piStack_c4c = (double)CONCAT44(unaff_EBP + -0x68,*(undefined4 *)(unaff_EBP + 0xc));
        puStack_c50 = *(undefined4 **)(unaff_EBP + 8);
        piStack_c54 = (int *)0x7a9741;
        iVar7 = FUN_007a22a3();
        *(int *)(unaff_EBP + -0xf8) = iVar7;
        if (iVar7 == 0) goto LAB_007a9f45;
      }
      iVar7 = FUN_007a9222();
      if (((iVar7 == 0) || (*(int *)(unaff_EBP + -0x68) == 0x1f6ee5)) ||
         (*(int *)(unaff_EBP + -0x68) == 0x1f6ee6)) {
        if (*(int *)(unaff_EBP + 8) == 0) {
          *(undefined4 *)(unaff_EBP + -0x14) = 1;
        }
        else {
          FUN_006509a1();
          _piStack_c4c = (double)CONCAT44(0x7a9795,piStack_c4c);
          uVar4 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
        }
        _piStack_c4c = (double)CONCAT44(0x7a9876,piStack_c4c);
        FUN_00413367();
        iVar7 = extraout_ECX[0x12f];
        *(int **)(unaff_EBP + -0xa0) = extraout_ECX + 0x1e;
        _piStack_c4c = (double)CONCAT44(iVar7,extraout_ECX + 0x12d);
        puStack_c50 = (undefined4 *)0x7a9892;
        uVar4 = FUN_00413367();
        *(undefined4 *)(unaff_EBP + 0x1c) = uVar4;
        FUN_004c2648();
        _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x10),
                                        *(undefined4 *)(unaff_EBP + 0x1c));
        puStack_c50 = (undefined4 *)0x7a98ad;
        uVar4 = FUN_00653336();
        puStack_c50 = (undefined4 *)0x0;
        piStack_c54 = (int *)0x0;
        piStack_c58 = *(int **)(unaff_EBP + -0x10);
        *(undefined4 *)(unaff_EBP + -0xd0) = uVar4;
        uVar4 = FUN_00652c29(*(undefined4 *)(unaff_EBP + -0xac),extraout_ECX[0x129],1);
        *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
        puVar1 = *(undefined **)(unaff_EBP + -0x10);
        if ((((puVar1 == (undefined *)0x2f9f6b) || (puVar1 == (undefined *)0x31260b)) ||
            ((puVar1 == &DAT_004e23ea ||
             ((puVar1 == (undefined *)0x4faa8f || (puVar1 == &DAT_004c4f2b)))))) ||
           ((puVar1 == (undefined *)0x4f5c6e ||
            ((((puVar1 == (undefined *)0x4f7f90 || (puVar1 == (undefined *)0x4faa8c)) ||
              (puVar1 == (undefined *)0x4f837e)) ||
             ((puVar1 == (undefined *)0x4fa6ab || (puVar1 == (undefined *)0x4faa91)))))))) {
          FUN_006509a1();
          _piStack_c4c = (double)CONCAT44(0x7a9a29,piStack_c4c);
          iVar7 = FUN_00413367();
LAB_007a9a2b:
          *(int *)(unaff_EBP + -0x30) = iVar7;
        }
        else {
          iVar7 = *(int *)(unaff_EBP + -0x18);
          if ((iVar7 == 0x2d) || (iVar7 == 0x2e)) {
            *(undefined4 *)(unaff_EBP + -0x30) = 300;
            _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0xac),0x7a99e3);
            iVar7 = FUN_00650dae();
            if (iVar7 != 0) {
              FUN_006509a1();
              _piStack_c4c = (double)CONCAT44(0x7a9a04,piStack_c4c);
              iVar7 = FUN_00413367();
              iVar7 = iVar7 + 300;
              goto LAB_007a9a2b;
            }
          }
          else if (iVar7 == 0x2f) {
            *(undefined4 *)(unaff_EBP + -0x30) = 200;
            _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0xac),0x7a9989);
            iVar7 = FUN_00650dae();
            if (iVar7 != 0) {
              FUN_006509a1();
              _piStack_c4c = (double)CONCAT44(0x7a99ae,piStack_c4c);
              iVar7 = FUN_00413367();
              iVar7 = iVar7 + 200;
              goto LAB_007a9a2b;
            }
          }
          else if (iVar7 == 0x31) {
            *(undefined4 *)(unaff_EBP + -0x30) = 200;
          }
        }
        if (*(int *)(unaff_EBP + -0x9c) != 0) {
          *(undefined4 *)(unaff_EBP + -0x30) = 300;
        }
        *(undefined4 *)(unaff_EBP + 0x1c) = 0;
        if (*(int *)(unaff_EBP + 0x14) != 0) {
          *(undefined4 *)(unaff_EBP + 0x10) = 0;
        }
        *(uint *)(unaff_EBP + -0x18) = extraout_ECX[0x14b] & 1;
        puVar8 = (undefined4 *)(**(code **)(extraout_ECX[1] + 0x10))();
        *(undefined4 *)(unaff_EBP + -0xc0) = *puVar8;
        iVar7 = (**(code **)(extraout_ECX[1] + 0x10))();
        iVar3 = *(int *)(iVar7 + 4);
        iVar7 = *(int *)(unaff_EBP + 0x10);
        iVar9 = iVar3 + -0x1c;
        *(int *)(unaff_EBP + -0xbc) = iVar9;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          iVar7 = -iVar7;
        }
        iVar7 = iVar7 + *(int *)(unaff_EBP + -0xc0);
        iVar16 = *(int *)(unaff_EBP + -0x30);
        *(int *)(unaff_EBP + -100) = iVar7;
        *(int *)(unaff_EBP + -0x60) = iVar9;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          iVar16 = -iVar16;
        }
        iVar16 = *(int *)(unaff_EBP + -0xc0) + iVar16;
        *(int *)(unaff_EBP + -0x5c) = iVar16;
        *(int *)(unaff_EBP + -0x58) = iVar9;
        *(int *)(unaff_EBP + -0x98) = iVar7;
        if (iVar16 <= iVar7) {
          *(int *)(unaff_EBP + -0x98) = iVar16;
        }
        *(int *)(unaff_EBP + -0x94) = iVar9;
        *(int *)(unaff_EBP + -0x90) = iVar7;
        if (iVar7 <= iVar16) {
          *(int *)(unaff_EBP + -0x90) = iVar16;
        }
        iVar7 = *(int *)(unaff_EBP + -0x10);
        *(int *)(unaff_EBP + -0x8c) = iVar3 + -0x1b;
        if (((iVar7 == 0x312609) || (iVar7 == 0x2f9f6b)) || (iVar7 == 0x31260b)) {
          iVar3 = iVar3 + -0x30;
LAB_007a9c33:
          _piStack_c4c = (double)CONCAT44(iVar3,*(undefined4 *)(unaff_EBP + -0x98));
          puStack_c50 = (undefined4 *)(unaff_EBP + -0x98);
          piStack_c54 = (int *)0x7a9c47;
          (*DAT_0097b504)();
          iVar7 = *(int *)(unaff_EBP + -0x10);
        }
        else {
          if (iVar7 == 0x3eba9d) {
            iVar3 = iVar3 + -0x40;
            goto LAB_007a9c33;
          }
          if (((iVar7 == 0x30d7ed) || (iVar7 == 0x3ee1ab)) || (iVar7 == 0x40684b)) {
            iVar3 = iVar3 + -0x26;
            goto LAB_007a9c33;
          }
          if (((iVar7 == 0x2f785c) || (iVar7 == 0x30fefc)) ||
             ((iVar7 == 0x4f5c69 ||
              (((iVar7 == 0x4f837c || (iVar7 == 0x4f837d)) || (iVar7 == 0x4faa90)))))) {
            FUN_006509a1();
            _piStack_c4c = (double)CONCAT44(0x7a9b89,piStack_c4c);
            FUN_00411537();
            *(int *)(unaff_EBP + -0x20) = extraout_ECX[0x14b];
            (**(code **)(extraout_ECX[1] + 0x10))();
            (**(code **)(extraout_ECX[1] + 0x10))();
            if ((*(byte *)(unaff_EBP + -0x20) & 1) == 0) {
              *(int *)(unaff_EBP + -0x90) = -*(int *)(unaff_EBP + -0x90);
              *(int *)(unaff_EBP + -0x98) = -*(int *)(unaff_EBP + -0x98);
              _piStack_c4c = (double)CONCAT44(0x7a9bdf,piStack_c4c);
              FUN_004459fe();
            }
            _piStack_c4c = (double)CONCAT44(unaff_EBP + -0x98,0x7a9bf0);
            (*DAT_0097b54c)();
            iVar7 = *(int *)(unaff_EBP + -0x10);
            if (iVar7 == 0x4faa90) {
              if ((*(byte *)(extraout_ECX + 0x14b) & 1) == 0) {
                uVar4 = *(undefined4 *)(unaff_EBP + -0x90);
              }
              else {
                uVar4 = *(undefined4 *)(unaff_EBP + -0x98);
              }
              *(undefined4 *)(unaff_EBP + -0x5c) = uVar4;
            }
          }
        }
        *(undefined4 *)(unaff_EBP + -0x6c) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (((iVar7 == 0x30d7ed) || (iVar7 == 0x3eba9d)) ||
           ((((iVar7 == 0x2f785c || ((iVar7 == 0x30fefc || (iVar7 == 0x312609)))) ||
             (iVar7 == 0x2f9f6b)) ||
            ((((((iVar7 == 0x31260b || (iVar7 == 0x4f5c69)) || (iVar7 == 0x4faa90)) ||
               ((iVar7 == 0x4f837c || (iVar7 == 0x4f837d)))) || (iVar7 == 0x3ee1ab)) ||
             (iVar7 == 0x40684b)))))) {
          _piStack_c4c = 0.0;
          puStack_c50 = (undefined4 *)0x0;
          piStack_c54 = *(int **)(unaff_EBP + -0x14);
          piStack_c58 = (int *)(unaff_EBP + -0x140);
          uVar4 = FUN_005d528b(unaff_EBP + -0x98);
LAB_007a9ece:
          *(undefined4 *)(unaff_EBP + 0x1c) = uVar4;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x140) = 0;
          iVar7 = FUN_0065439b();
          if (iVar7 == 0) {
            _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0xbc),
                                            *(undefined4 *)(unaff_EBP + -0x5c));
            puStack_c50 = *(undefined4 **)(unaff_EBP + -100);
            piStack_c54 = *(int **)(unaff_EBP + -0xc0);
            piStack_c58 = (int *)0x7a9d21;
            uVar4 = FUN_005d5804();
            *(undefined4 *)(unaff_EBP + -0x140) = uVar4;
          }
          if (*(int *)(unaff_EBP + -0x140) == 0) {
            _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0xbc),
                                            *(undefined4 *)(unaff_EBP + -0x5c));
            puStack_c50 = *(undefined4 **)(unaff_EBP + -100);
            piStack_c54 = *(int **)(unaff_EBP + -0xc0);
            piStack_c58 = (int *)0x7a9d51;
            iVar7 = FUN_005d5804();
            *(int *)(unaff_EBP + -0x140) = iVar7;
            if (iVar7 != 0) goto LAB_007a9d5d;
          }
          else {
LAB_007a9d5d:
            _piStack_c4c = *(double *)(unaff_EBP + -0x98);
            puStack_c50 = (undefined4 *)(unaff_EBP + -0x44);
            piStack_c54 = (int *)0x7a9d75;
            puVar8 = (undefined4 *)FUN_005c5bbc();
            *(undefined4 *)(unaff_EBP + -0x5c) = *puVar8;
            *(undefined4 *)(unaff_EBP + -0x58) = puVar8[1];
          }
          (**(code **)(extraout_ECX[1] + 0x18))();
          _piStack_c4c = (double)CONCAT44(unaff_EBP + -0x5c,*(undefined4 *)(unaff_EBP + -0xbc));
          puStack_c50 = *(undefined4 **)(unaff_EBP + -0xc0);
          piStack_c54 = (int *)0x7a9dab;
          iVar7 = FUN_0086156f();
          if (iVar7 == 0) {
            *(undefined4 *)(unaff_EBP + -0x140) = 0;
          }
          if (*(int *)(unaff_EBP + -0x140) != 0) {
            *(undefined4 *)(unaff_EBP + 0x1c) = 1;
            puVar8 = (undefined4 *)FUN_005cb50c();
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x6c),
                       (IBinding *)*puVar8);
            if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
            }
            puVar1 = *(undefined **)(unaff_EBP + -0x10);
            if (((puVar1 == (undefined *)0x2f514d) || (puVar1 == (undefined *)0x30fefb)) ||
               (puVar1 == (undefined *)0x2f785b)) {
              FUN_006509a1();
              FUN_007a3fab();
              *(undefined1 *)(unaff_EBP + -4) = 3;
              _piStack_c4c = (double)CONCAT44(0x7a9e61,piStack_c4c);
              FUN_00411537();
              _piStack_c4c = (double)CONCAT44(unaff_EBP + -0x4c,0x7a9e73);
              (*DAT_0097b54c)();
              _piStack_c4c = 0.0;
              puStack_c50 = *(undefined4 **)(unaff_EBP + -0x140);
              piStack_c54 = (int *)(*(int *)(unaff_EBP + -0x14) + -1);
              piStack_c58 = (int *)(unaff_EBP + -0x13c);
              iVar7 = FUN_005d528b(unaff_EBP + -0x4c);
              *(int *)(unaff_EBP + 0x1c) = iVar7 + 1;
              *(undefined1 *)(unaff_EBP + -4) = 2;
              FUN_006575e6();
            }
            else if (puVar1 == &DAT_004e23ea) {
              _piStack_c4c = (double)CONCAT44(unaff_EBP + -0x140,*(undefined4 *)(unaff_EBP + -0x140)
                                             );
              puStack_c50 = (undefined4 *)0x7a9e31;
              uVar4 = FUN_005d5682();
              goto LAB_007a9ece;
            }
          }
        }
        if ((extraout_ECX[0x799] == 0x2f9f6c) || (extraout_ECX[0x799] == 0x4faa8c)) {
LAB_007a9f61:
          if ((*(int *)(unaff_EBP + -0x10) != 0x2f9f6c) && (*(int *)(unaff_EBP + -0x10) != 0x4faa8c)
             ) {
            iVar7 = (**(code **)(extraout_ECX[1] + 0x10))();
            *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(iVar7 + 4);
            piVar6 = (int *)(**(code **)(extraout_ECX[1] + 0x10))();
            iVar7 = *piVar6;
            iVar3 = extraout_ECX[0x7bf] - iVar7;
            if ((iVar3 < -5) ||
               (((5 < iVar3 ||
                 (iVar3 = extraout_ECX[0x7c0] - *(int *)(unaff_EBP + -0x3c), iVar3 < -0x95)) ||
                (0x95 < iVar3)))) {
              extraout_ECX[0x7c1] = 0;
              extraout_ECX[0x7bf] = iVar7;
              extraout_ECX[0x7c0] = *(int *)(unaff_EBP + -0x3c);
            }
            else {
              if (99 < extraout_ECX[0x7c1]) goto LAB_007a9f34;
              extraout_ECX[0x7c1] = extraout_ECX[0x7c1] + 1;
            }
          }
          if ((extraout_ECX[0x799] == 0x2f9f6c) || (extraout_ECX[0x799] == 0x4faa8c)) {
            extraout_ECX[0x14a] = 5000;
          }
          else if ((*(int *)(unaff_EBP + 8) != 0) && (*(int *)(unaff_EBP + -0x34) == 0)) {
            _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0xd0),
                                            *(undefined4 *)(unaff_EBP + 0xc));
            puStack_c50 = *(undefined4 **)(unaff_EBP + 8);
            piStack_c54 = (int *)0x7aa005;
            FUN_00790b31();
          }
          iVar3 = *(int *)(unaff_EBP + -0x58) - *(int *)(unaff_EBP + -0x60);
          iVar7 = *(int *)(unaff_EBP + -0x5c) - *(int *)(unaff_EBP + -100);
          *(int *)(unaff_EBP + -0x20) = iVar3 * iVar3 + iVar7 * iVar7;
          _piStack_c4c = (double)CONCAT44(0x7aa051,piStack_c4c);
          fVar17 = (float10)FUN_0087af44();
          iVar7 = *(int *)(unaff_EBP + -0x38);
          *(double *)(unaff_EBP + -0x44) = (double)fVar17;
          FUN_0043f6fe();
          _piStack_c4c = (double)CONCAT44(0x7aa090,piStack_c4c);
          uVar4 = FUN_0079d0da();
          *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
          FUN_007a9209();
          *(undefined1 **)(unaff_EBP + -0x54) = &stack0xfffff3b8;
          piStack_c4c = *(int **)(unaff_EBP + -0x2c);
          piStack_c54 = extraout_ECX + 0x130;
          *(undefined4 ***)(unaff_EBP + -0x54) = &puStack_c50;
          piStack_c58 = (int *)0x7aa0ba;
          uVar10 = extraout_ECX_00;
          FUN_004059fd();
          piStack_c54 = *(int **)(unaff_EBP + 0xc);
          piStack_c58 = *(int **)(unaff_EBP + 8);
          FUN_007938b4(&stack0xfffff3b8);
          iVar3 = *(int *)(unaff_EBP + -0xb8);
          _piStack_c4c = (double)CONCAT44(uVar10,*(undefined4 *)(unaff_EBP + -0x38));
          piStack_c54 = (int *)(*(int *)(unaff_EBP + -0x34) + iVar3);
          puStack_c50 = *(undefined4 **)(unaff_EBP + -0x18);
          *(int **)(unaff_EBP + -0x2c) = piStack_c54;
          piStack_c58 = (int *)0x7aa0e5;
          FUN_0078ceed();
          if ((*(int *)(unaff_EBP + -0x10) == 0x4f5c6e) ||
             ((0x4f837b < *(int *)(unaff_EBP + -0x10) && (*(int *)(unaff_EBP + -0x10) < 0x4f837e))))
          {
            iVar9 = FUN_007a9287();
            *(int *)(unaff_EBP + -0x20) = iVar9 + (&DAT_00978684)[iVar7 * 6] + iVar3;
            _piStack_c4c = (double)CONCAT44(0x7aa124,piStack_c4c);
            FUN_004b8f75();
          }
          if (*(int *)(unaff_EBP + 8) == 0) {
            iVar7 = 0;
          }
          else {
            FUN_006509a1();
            _piStack_c4c = (double)CONCAT44(0x7aa147,piStack_c4c);
            iVar7 = FUN_00413367();
          }
          *(int *)(unaff_EBP + -0x74) = iVar7;
          if (iVar7 < 2) {
            *(undefined4 *)(unaff_EBP + -0x74) = 1;
          }
          *(undefined4 *)(unaff_EBP + -0xec) = *(undefined4 *)(unaff_EBP + -100);
          *(undefined4 *)(unaff_EBP + -0x1c) = 1;
          if ((*(int *)(unaff_EBP + -0xd4) != 0) && (*(int *)(unaff_EBP + -0x10) != 0x3ee1ab)) {
            uVar5 = extraout_ECX[0x14b];
            *(undefined4 *)(unaff_EBP + -0x1c) = 2;
            *(uint *)(unaff_EBP + -0xec) =
                 ((-(uint)((uVar5 & 1) != 0) & 0x3c) - 0x1e) + *(int *)(unaff_EBP + -100);
          }
          if ((*(int *)(unaff_EBP + -0x10) == 0x4faa8f) || (*(int *)(unaff_EBP + -0x10) == 0x4faa90)
             ) {
            *(int *)(unaff_EBP + -100) =
                 *(int *)(unaff_EBP + -100) +
                 (-(uint)((extraout_ECX[0x14b] & 1U) != 0) & 0xffffffc4) + 0x1e;
          }
          *(undefined4 *)(unaff_EBP + -0x50) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (*(int *)(unaff_EBP + 8) != 0) {
            _piStack_c4c = (double)CONCAT44(0x7aa1da,piStack_c4c);
            piVar6 = (int *)FUN_007ab103();
            if (*piVar6 != 0) {
              InterlockedIncrement((LONG *)(*piVar6 + 8));
            }
            FUN_00402fa6();
            *(int *)(unaff_EBP + -0x50) = *piVar6;
            if (*(int *)(unaff_EBP + -0x20) != 0) {
              FUN_004030b1();
            }
          }
          puVar1 = *(undefined **)(unaff_EBP + -0x10);
          if ((((puVar1 != (undefined *)0x2f785c) && (puVar1 != (undefined *)0x30fefc)) &&
              (puVar1 != &DAT_004e23ea)) &&
             (((puVar1 != (undefined *)0x4f5c69 && (puVar1 != (undefined *)0x4f837d)) &&
              (puVar1 != (undefined *)0x4f837c)))) {
            uVar4 = __ftol();
            *(undefined4 *)(unaff_EBP + -0x3c) = uVar4;
            _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x68),0x7aa26c);
            uVar4 = FUN_0079d11c();
            iVar7 = *(int *)(unaff_EBP + -0x1c) * *(int *)(unaff_EBP + -0x74);
            *(undefined4 *)(unaff_EBP + -0x24) = 0;
            *(undefined4 *)(unaff_EBP + -0x54) = uVar4;
            *(int *)(unaff_EBP + -0x28) = iVar7;
            if (0 < iVar7) {
              *(undefined4 *)(unaff_EBP + -0x14) = 0;
              iVar9 = *(int *)(unaff_EBP + -0x74) * 7;
              iVar3 = *(int *)(unaff_EBP + -0x2c);
              *(int *)(unaff_EBP + -0x20) = iVar9;
              while( true ) {
                *(undefined4 *)(unaff_EBP + -0xe4) = *(undefined4 *)(unaff_EBP + -0x5c);
                *(int *)(unaff_EBP + -0xe0) = *(int *)(unaff_EBP + -0x58);
                *(int *)(unaff_EBP + -0xe0) =
                     (*(int *)(unaff_EBP + -0x14) - iVar9) + 7 + *(int *)(unaff_EBP + -0x58);
                if (((*(int *)(unaff_EBP + -0xcc) == 0) &&
                    (iVar9 = *(int *)(unaff_EBP + -0x10), iVar9 != 0x3eba9c)) &&
                   ((iVar9 != 0x2f9f6c &&
                    (((iVar9 != 0x4faa8f && (iVar9 != 0x4faa90)) &&
                     (iVar9 = FUN_0065439b(), iVar9 == 0)))))) {
                  uVar4 = *(undefined4 *)(unaff_EBP + -100);
                  if (*(int *)(unaff_EBP + -0x74) <= *(int *)(unaff_EBP + -0x24)) {
                    uVar4 = *(undefined4 *)(unaff_EBP + -0xec);
                  }
                  *(undefined4 *)(unaff_EBP + -0xb4) = uVar4;
                  *(undefined4 *)(unaff_EBP + -0xb0) = *(undefined4 *)(unaff_EBP + -0x60);
                  FUN_007a9209();
                  piStack_c4c = (int *)(unaff_EBP + -0x50);
                  *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xfffff3b8;
                  puStack_c50 = (undefined4 *)0x7aa352;
                  uVar10 = extraout_ECX_01;
                  FUN_004059fd();
                  *(undefined1 *)(unaff_EBP + -4) = 7;
                  piStack_c4c = (int *)0x7aa361;
                  FUN_00424e27();
                  piStack_c4c = (int *)0x7aa368;
                  uVar4 = FUN_004320e3();
                  _piStack_c4c = (double)CONCAT44(uVar10,uVar4);
                  piStack_c54 = (int *)(unaff_EBP + -0x6c);
                  *(undefined4 ***)(unaff_EBP + -0xf4) = &puStack_c50;
                  piStack_c58 = (int *)0x7aa37b;
                  puStack_c50 = extraout_ECX_02;
                  FUN_00433bdf();
                  piStack_c54 = *(int **)(unaff_EBP + -0xe0);
                  piStack_c58 = *(int **)(unaff_EBP + -0xe4);
                  iVar16 = *(int *)(unaff_EBP + -0x3c) + iVar3;
                  uVar4 = *(undefined4 *)(unaff_EBP + -0xb0);
                  *(undefined1 *)(unaff_EBP + -4) = 4;
                  uVar11 = *(undefined4 *)(unaff_EBP + -0xb4);
                  iVar9 = iVar3;
                  FUN_00424e82(iVar3,iVar16,uVar11,uVar4);
                  FUN_00427b7d(iVar9,iVar16,uVar11,uVar4);
                }
                else {
                  if ((*(int **)(unaff_EBP + -0x50) == (int *)0x0) ||
                     (iVar7 = **(int **)(unaff_EBP + -0x50), iVar7 == 0)) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = *(uint *)(iVar7 + -4) >> 1;
                  }
                  if (uVar10 == 0) {
                    iVar7 = DAT_0097bfd0 + 100;
                  }
                  else {
                    iVar7 = unaff_EBP + -0x50;
                  }
                  uVar4 = *(undefined4 *)(unaff_EBP + -100);
                  if (*(int *)(unaff_EBP + -0x74) <= *(int *)(unaff_EBP + -0x24)) {
                    uVar4 = *(undefined4 *)(unaff_EBP + -0xec);
                  }
                  *(undefined1 **)(unaff_EBP + -0xf4) = &stack0xfffff3bc;
                  *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x60);
                  _piStack_c4c = (double)CONCAT44(iVar7,0x7aa3fe);
                  FUN_004059fd();
                  *(undefined1 *)(unaff_EBP + -4) = 5;
                  _piStack_c4c = (double)CONCAT44(0x7aa40d,piStack_c4c);
                  FUN_00424e27();
                  _piStack_c4c = (double)CONCAT44(0x7aa414,piStack_c4c);
                  uVar11 = FUN_004320e3();
                  _piStack_c4c = (double)CONCAT44(uVar11,extraout_ECX_03);
                  puStack_c50 = (undefined4 *)(unaff_EBP + -0x6c);
                  *(int ***)(unaff_EBP + -0x2c) = &piStack_c4c;
                  piStack_c54 = (int *)0x7aa424;
                  FUN_00433bdf();
                  puStack_c50 = *(undefined4 **)(unaff_EBP + -0xe0);
                  piStack_c54 = *(int **)(unaff_EBP + -0xe4);
                  iVar9 = *(int *)(unaff_EBP + -0x3c) + iVar3;
                  piStack_c58 = *(int **)(unaff_EBP + -0x40);
                  *(undefined1 *)(unaff_EBP + -4) = 4;
                  iVar7 = iVar3;
                  FUN_00424e82(iVar3,iVar9,uVar4);
                  FUN_00427cd1(iVar7,iVar9,uVar4);
                  iVar7 = *(int *)(unaff_EBP + -0x28);
                }
                *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x24) + 1;
                *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0xe;
                iVar3 = iVar3 + *(int *)(unaff_EBP + -0x54);
                if (iVar7 <= *(int *)(unaff_EBP + -0x24)) break;
                iVar9 = *(int *)(unaff_EBP + -0x20);
              }
            }
          }
          iVar7 = 0;
          if (*(int *)(unaff_EBP + 8) != 0) {
            FUN_006509a1();
            _piStack_c4c = (double)CONCAT44(0x7aa484,piStack_c4c);
            iVar7 = FUN_00413367();
          }
          *(int *)(unaff_EBP + -0x3c) = iVar7;
          if (iVar7 < 2) {
            *(undefined4 *)(unaff_EBP + -0x3c) = 1;
          }
          iVar7 = *(int *)(unaff_EBP + -0x3c) * *(int *)(unaff_EBP + -0x1c) *
                  *(int *)(unaff_EBP + -0x74);
          *(int *)(unaff_EBP + -0x24) = iVar7;
          if (0xe < iVar7) {
            *(undefined4 *)(unaff_EBP + -0x24) = 0xf;
          }
          *(undefined4 *)(unaff_EBP + -0x100) = *(undefined4 *)(unaff_EBP + -0x34);
          piVar6 = extraout_ECX;
          if (0 < *(int *)(unaff_EBP + 0x1c)) {
            *(int *)(unaff_EBP + -0x14) = unaff_EBP + -0x140;
            *(undefined4 *)(unaff_EBP + -0x1c) = 0x78;
            puVar8 = (undefined4 *)(unaff_EBP + -0xc34);
            *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + 0x1c);
            do {
              puVar12 = puVar8 + -2;
              _piStack_c4c = (double)CONCAT44(puVar12,0x7aa4ea);
              _memset(puVar12,0,0x98);
              *puVar12 = **(undefined4 **)(unaff_EBP + -0x14);
              uVar4 = FUN_005c9cb2();
              puVar8[-1] = uVar4;
              uVar4 = FUN_005c634c();
              *puVar8 = uVar4;
              uVar4 = FUN_0067d28e();
              _piStack_c4c = *(double *)(unaff_EBP + -0x98);
              puVar8[1] = uVar4;
              puStack_c50 = (undefined4 *)(unaff_EBP + -0x44);
              piStack_c54 = (undefined4 *)0x7aa52c;
              puVar12 = (undefined4 *)FUN_005c5bbc();
              iVar7 = *(int *)(unaff_EBP + -0x10);
              puVar8[0x22] = *puVar12;
              puVar8[0x23] = puVar12[1];
              if (iVar7 == 0x2f514d) {
                if (*(int *)(unaff_EBP + -0x1c) == 0x78) {
LAB_007aa5d3:
                  uVar4 = FUN_0087a90a();
                  *(undefined4 *)(unaff_EBP + -0x54) = uVar4;
                  iVar7 = __ftol();
                }
                else {
                  iVar7 = *(int *)(unaff_EBP + -0xc2c) + 200;
                }
LAB_007aa601:
                puVar8[2] = iVar7;
              }
              else {
                puVar1 = *(undefined **)(unaff_EBP + -0x10);
                if (((puVar1 == (undefined *)0x30fefb) || (puVar1 == (undefined *)0x2f785b)) &&
                   (*(int *)(unaff_EBP + -0x1c) != 0x78)) {
                  puVar8[2] = *(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0xc2c);
                }
                else {
                  if ((puVar1 == (undefined *)0x2f785c) || (puVar1 == (undefined *)0x30fefc)) {
                    iVar7 = *(int *)(unaff_EBP + -0x34) + 400;
                    goto LAB_007aa601;
                  }
                  if (puVar1 != &DAT_004e23ea) goto LAB_007aa5d3;
                  uVar4 = 0;
                  if (*(int *)(unaff_EBP + -0x1c) != 0x78) {
                    uVar4 = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + -4);
                  }
                  _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0xb8),uVar4);
                  puStack_c50 = (undefined4 *)(unaff_EBP + -0xc0);
                  piStack_c54 = puVar8 + -2;
                  piStack_c58 = (int *)0x7aa5d1;
                  FUN_0079d183();
                }
              }
              *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x1e;
              *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
              puVar8 = puVar8 + 0x26;
              piVar6 = (int *)(unaff_EBP + -0x28);
              *piVar6 = *piVar6 + -1;
            } while (*piVar6 != 0);
            piVar6 = *(int **)(unaff_EBP + -0xd8);
          }
          iVar7 = *(int *)(unaff_EBP + -0x10);
          if (iVar7 == 0x2f785b) {
LAB_007aa7b2:
            if (*(int *)(unaff_EBP + 0x1c) != 0) {
              FUN_006509a1();
              _piStack_c4c = (double)CONCAT44(0x7aa7d6,piStack_c4c);
              FUN_00411537();
              _piStack_c4c = (double)CONCAT44(unaff_EBP + -0x4c,0x7aa7e8);
              (*DAT_0097b54c)();
              if (*(int *)(unaff_EBP + -0x10) == 0x2f785b) {
                piVar13 = (int *)FUN_00424619();
                puVar8 = (undefined4 *)*piVar13;
                *(undefined1 *)(unaff_EBP + -4) = 9;
                if (puVar8 == (undefined4 *)0x0) {
                  piStack_c58 = (int *)0x0;
                }
                else {
                  piStack_c58 = (int *)*puVar8;
                }
                _piStack_c4c = 2.71615461490588e-312;
                puStack_c50 = *(undefined4 **)(unaff_EBP + -0xc2c);
                piStack_c54 = (int *)(unaff_EBP + -0x4c);
                FUN_00428a3e();
                *(undefined1 *)(unaff_EBP + -4) = 4;
                if (*(int *)(unaff_EBP + -0x14) != 0) {
                  FUN_004030b1();
                  *(undefined4 *)(unaff_EBP + -0x14) = 0;
                }
              }
              *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x48) + -0x32;
              *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x40) + -0xaa;
              piVar13 = (int *)FUN_0040f150();
              puVar8 = (undefined4 *)*piVar13;
              *(undefined1 *)(unaff_EBP + -4) = 10;
              if (puVar8 == (undefined4 *)0x0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *puVar8;
              }
              _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x18),uVar4);
              puStack_c50 = (undefined4 *)0x7aa888;
              FUN_00427eb9();
              iVar7 = *(int *)(unaff_EBP + -0x2c);
              *(undefined1 *)(unaff_EBP + -4) = 4;
LAB_007aa88f:
              if (iVar7 != 0) {
                FUN_004030b1();
              }
            }
LAB_007aa898:
            if (((*(int *)(unaff_EBP + -0x10) != 0x2f514d) &&
                (*(int *)(unaff_EBP + -0x10) != 0x30fefb)) &&
               (*(int *)(unaff_EBP + -0x10) != 0x2f785b)) goto LAB_007aa8b3;
          }
          else {
            if (iVar7 != 0x2f785c) {
              if (iVar7 == 0x30fefb) goto LAB_007aa7b2;
              if (iVar7 == 0x30fefc) {
                iVar7 = *(int *)(unaff_EBP + 0x1c);
                if ((iVar7 == 0) || (iVar7 < 1)) goto LAB_007aa8b3;
                do {
                  _piStack_c4c = (double)CONCAT44(0x7aa66c,piStack_c4c);
                  FUN_005c5b12();
                  iVar3 = *(int *)(unaff_EBP + -0x44) - *(int *)(unaff_EBP + -0x4c);
                  if (iVar3 < 0x96) {
                    iVar3 = iVar3 / 2;
                    *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x4c) + -0x4b + iVar3;
                    *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + (0x4b - iVar3);
                  }
                  *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x40) + -10;
                  piVar13 = (int *)FUN_0040f150();
                  puVar8 = (undefined4 *)*piVar13;
                  *(undefined1 *)(unaff_EBP + -4) = 0xc;
                  if (puVar8 == (undefined4 *)0x0) {
                    uVar4 = 0;
                  }
                  else {
                    uVar4 = *puVar8;
                  }
                  _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x18),uVar4);
                  puStack_c50 = (undefined4 *)0x7aa6cd;
                  FUN_00427eb9();
                  *(undefined1 *)(unaff_EBP + -4) = 4;
                  if (*(int *)(unaff_EBP + -0x28) != 0) {
                    FUN_004030b1();
                    *(undefined4 *)(unaff_EBP + -0x28) = 0;
                  }
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              goto LAB_007aa898;
            }
            if (*(int *)(unaff_EBP + 0x1c) != 0) {
              FUN_006509a1();
              _piStack_c4c = (double)CONCAT44(0x7aa714,piStack_c4c);
              FUN_00411537();
              *(int *)(unaff_EBP + -0x54) = piVar6[0x14b];
              (**(code **)(piVar6[1] + 0x10))();
              (**(code **)(piVar6[1] + 0x10))();
              if ((*(byte *)(unaff_EBP + -0x54) & 1) == 0) {
                *(int *)(unaff_EBP + -0x44) = -*(int *)(unaff_EBP + -0x44);
                *(int *)(unaff_EBP + -0x4c) = -*(int *)(unaff_EBP + -0x4c);
                _piStack_c4c = (double)CONCAT44(0x7aa758,piStack_c4c);
                FUN_004459fe();
              }
              _piStack_c4c = (double)CONCAT44(unaff_EBP + -0x4c,0x7aa766);
              (*DAT_0097b54c)();
              *(int *)(unaff_EBP + -0x48) = *(int *)(unaff_EBP + -0x48) + -0xfa;
              *(int *)(unaff_EBP + -0x40) = *(int *)(unaff_EBP + -0x40) + -0xfa;
              piVar13 = (int *)FUN_0040f150();
              puVar8 = (undefined4 *)*piVar13;
              *(undefined1 *)(unaff_EBP + -4) = 0xb;
              if (puVar8 == (undefined4 *)0x0) {
                uVar4 = 0;
              }
              else {
                uVar4 = *puVar8;
              }
              _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x18),uVar4);
              puStack_c50 = (undefined4 *)0x7aa7a6;
              FUN_00427eb9();
              iVar7 = *(int *)(unaff_EBP + -0x20);
              *(undefined1 *)(unaff_EBP + -4) = 4;
              goto LAB_007aa88f;
            }
LAB_007aa8b3:
            uVar10 = (uint)(*(int *)(unaff_EBP + -0x18) == 0);
            _piStack_c4c = (double)CONCAT44(uVar10,0x7aa8cb);
            FUN_007a9375();
          }
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          if (0 < *(int *)(unaff_EBP + 0x1c)) {
            *(int *)(unaff_EBP + -0xdc) = *(int *)(unaff_EBP + -0xdc) + 0x3024;
            puVar8 = (undefined4 *)(unaff_EBP + -0xc24);
            do {
              iVar7 = piVar6[0x129];
              _piStack_c4c = (double)CONCAT44(0x7aa90d,piStack_c4c);
              uVar4 = FUN_004b8c9b();
              _piStack_c4c = (double)(ulonglong)*(uint *)(unaff_EBP + 0x18);
              puStack_c50 = puVar8 + 0xf;
              piStack_c58 = *(int **)(unaff_EBP + 0xc);
              piStack_c54 = puVar8;
              FUN_0066c1d7(*(undefined4 *)(unaff_EBP + -0xac),*(undefined4 *)(unaff_EBP + -0x70),
                           *(undefined4 *)(unaff_EBP + -0x104),uVar4,puVar8[-6] + 0x170,
                           *(undefined4 *)(unaff_EBP + -0x24),iVar7,
                           *(undefined4 *)(unaff_EBP + -0x68),1,*(undefined4 *)(unaff_EBP + -0x38),
                           *(undefined4 *)(unaff_EBP + -0xd4),*(undefined4 *)(unaff_EBP + 8));
              if (*(int *)(unaff_EBP + 8) != 0) {
                iVar7 = *(int *)(unaff_EBP + -0x1c);
                _piStack_c4c = (double)CONCAT44(iVar7,*(undefined4 *)(unaff_EBP + 0xc));
                puStack_c50 = (undefined4 *)0x7aa971;
                iVar3 = FUN_0064cf49();
                if (iVar3 != 0) {
                  *(int *)(unaff_EBP + 0x1c) = iVar7 + 1;
                  break;
                }
              }
              *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
              puVar8 = puVar8 + 0x26;
            } while (*(int *)(unaff_EBP + -0x1c) < *(int *)(unaff_EBP + 0x1c));
          }
          puStack_c50 = (undefined4 *)piVar6[0x129];
          piVar13 = *(int **)(unaff_EBP + 8);
          _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 0x1c),
                                          *(undefined4 *)(unaff_EBP + -0x38));
          piStack_c54 = *(int **)(unaff_EBP + 0xc);
          piStack_c58 = piVar13;
          FUN_0064ba86();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          if ((piVar13 == (int *)0x0) || ((*piVar13 != 0x3d0cea && (*piVar13 != 0x4faa91)))) {
            *(undefined4 *)(unaff_EBP + -0x20) = 1;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x20) = 0;
          }
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
          if (0 < *(int *)(unaff_EBP + 0x1c)) {
            puVar8 = (undefined4 *)(unaff_EBP + -0xc38);
            do {
              *(undefined4 *)(unaff_EBP + -0x14) = 0;
              if (0 < *(int *)(unaff_EBP + -0x24)) {
                piVar13 = puVar8 + 5;
                do {
                  *(undefined4 *)(unaff_EBP + -0xb4) = puVar8[0x23];
                  *(undefined4 *)(unaff_EBP + -0xb0) = puVar8[0x24];
                  *(undefined4 *)(unaff_EBP + -0x28) = 0;
                  *(undefined4 *)(unaff_EBP + -0x2c) = 1;
                  *(int *)(unaff_EBP + -0xb0) =
                       *(int *)(unaff_EBP + -0xb0) +
                       (((*(int *)(unaff_EBP + -0x14) / *(int *)(unaff_EBP + -0x3c)) * 2 -
                        *(int *)(unaff_EBP + -0x74)) + 1) * 7;
                  if (((*(int *)(unaff_EBP + -0x10) == 0x2f9f6b) ||
                      (*(int *)(unaff_EBP + -0x10) == 0x31260b)) &&
                     ((0 < *piVar13 &&
                      ((iVar7 = FUN_005cdcb1(), iVar7 == 0 && (iVar7 = FUN_005ca1ff(), iVar7 == 0)))
                      ))) {
                    FUN_006509a1();
                    _piStack_c4c = (double)CONCAT44(0x7aaa99,piStack_c4c);
                    uVar4 = FUN_00413367();
                    *(undefined4 *)(unaff_EBP + -0x70) = uVar4;
                    uVar5 = FUN_004133f0();
                    if (*(uint *)(unaff_EBP + -0x70) < uVar5 % 100) {
                      bVar2 = *(byte *)(piVar6 + 0x14b);
                      iVar7 = *(int *)(unaff_EBP + -0x30);
                      *(undefined4 *)(unaff_EBP + -0x2c) = 4;
                      if ((bVar2 & 1) != 0) {
                        iVar7 = -iVar7;
                      }
                      *(int *)(unaff_EBP + -0x28) = iVar7;
                      uVar5 = FUN_004133f0();
                      iVar7 = piVar6[1];
                      *(uint *)(unaff_EBP + -0x70) = uVar5 % 0x14 + *(int *)(unaff_EBP + -0x28);
                      piVar14 = (int *)(**(code **)(iVar7 + 0x10))();
                      piVar6 = *(int **)(unaff_EBP + -0xd8);
                      *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x70) + -10 + *piVar14;
                    }
                  }
                  _piStack_c4c = (double)CONCAT44(0x7aab18,piStack_c4c);
                  iVar7 = FUN_00413367();
                  if ((0 < iVar7) && (0 < *piVar13)) {
                    *piVar13 = iVar7;
                  }
                  iVar7 = FUN_005dcae0();
                  if (iVar7 == 0) {
                    *piVar13 = 0;
                  }
                  _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x28),
                                                  *(undefined4 *)(unaff_EBP + -200));
                  puStack_c50 = *(undefined4 **)(unaff_EBP + -0x2c);
                  piStack_c54 = *(int **)(unaff_EBP + -0x20);
                  *(int ***)(unaff_EBP + -0xf4) = &piStack_c58;
                  piStack_c58 = extraout_ECX_04;
                  FUN_0067d25d(&piStack_c58,*(undefined4 *)(unaff_EBP + -0x1c));
                  uVar4 = *(undefined4 *)(unaff_EBP + -0xb0);
                  uVar11 = *(undefined4 *)(unaff_EBP + -0xb4);
                  iVar9 = puVar8[3] + *(int *)(unaff_EBP + -0xb8);
                  uVar21 = *(undefined4 *)(unaff_EBP + -0x14);
                  iVar7 = piVar13[0xf];
                  iVar3 = *piVar13;
                  uVar20 = *(undefined4 *)(unaff_EBP + -0x18);
                  uVar19 = *puVar8;
                  uVar18 = *(undefined4 *)(unaff_EBP + -0x10);
                  uVar15 = FUN_0067e5d1(uVar18,iVar9,uVar19,uVar20,iVar3,iVar7,uVar21,uVar11,uVar4);
                  FUN_005cbf42(uVar15,uVar18,iVar9,uVar19,uVar20,iVar3,iVar7,uVar21,uVar11,uVar4);
                  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
                  piVar13 = piVar13 + 1;
                } while (*(int *)(unaff_EBP + -0x14) < *(int *)(unaff_EBP + -0x24));
              }
              *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
              puVar8 = puVar8 + 0x26;
            } while (*(int *)(unaff_EBP + -0x1c) < *(int *)(unaff_EBP + 0x1c));
          }
          _piStack_c4c = 8.91277952025074e-313;
          FUN_0060142b();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          iVar7 = FUN_00429303();
          *(undefined1 *)(unaff_EBP + -0x70) = *(undefined1 *)(iVar7 + 0xf8);
          FUN_00457cda();
          FUN_00457cda();
          FUN_00457d37();
          iVar7 = *(int *)(unaff_EBP + -0x10);
          if (iVar7 < 0x236a6a) {
            if ((((iVar7 == 0x236a69) || ((iVar7 == 0x111ae9 || (iVar7 == 0x12a189)))) ||
                (iVar7 == 0x142829)) || ((iVar7 == 0x205d29 || (iVar7 == 0x21e3c9)))) {
LAB_007aac7a:
              FUN_00457d37();
            }
          }
          else if ((((iVar7 == 0x2f9f6c) || (iVar7 == 0x312609)) || (iVar7 == 0x4dd5cc)) ||
                  ((iVar7 == 0x4f5c6a || (iVar7 == 0x4faa8c)))) goto LAB_007aac7a;
          FUN_00457cda();
          FUN_00457cda();
          FUN_00457cda();
          FUN_00457cda();
          FUN_007d1e08();
          FUN_00457d37();
          FUN_0045d247();
          FUN_0045d247();
          FUN_00457cda();
          if ((((*(int *)(unaff_EBP + -0x10) != 0x3eba9c) && (*(int *)(unaff_EBP + -0x9c) == 0)) &&
              (*(int *)(unaff_EBP + -0xc4) == 0)) && (*(int *)(unaff_EBP + -0x88) != 0)) {
            FUN_00457d37();
          }
          if (0 < *(int *)(unaff_EBP + 0x1c)) {
            piVar13 = (int *)(unaff_EBP + -0xc3c);
            *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x1c);
            do {
              _piStack_c4c = (double)CONCAT44(0x7aad86,piStack_c4c);
              FUN_004b8c9b();
              FUN_00457d37();
              FUN_00457cda();
              FUN_005c5474();
              FUN_00457cda();
              FUN_00457cda();
              FUN_00457cda();
              (**(code **)(*(int *)(*piVar13 + 4) + 0x10))();
              FUN_0045d247();
              (**(code **)(*(int *)(*piVar13 + 4) + 0x10))();
              FUN_0045d247();
              (**(code **)(*(int *)(*piVar13 + 4) + 0x14))();
              FUN_0045d247();
              (**(code **)(*(int *)(*piVar13 + 4) + 0x14))();
              FUN_0045d247();
              FUN_0045d247();
              if (0 < *(int *)(unaff_EBP + -0x24)) {
                *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x24);
                do {
                  FUN_00457d37();
                  piVar14 = (int *)(unaff_EBP + 0x10);
                  *piVar14 = *piVar14 + -1;
                } while (*piVar14 != 0);
              }
              FUN_005d0a74();
              FUN_00457d37();
              piVar13 = piVar13 + 0x26;
              piVar14 = (int *)(unaff_EBP + 0x14);
              *piVar14 = *piVar14 + -1;
            } while (*piVar14 != 0);
          }
          piVar13 = piVar6 + 1;
          (**(code **)(piVar6[1] + 0x10))();
          FUN_0045d247();
          (**(code **)(*piVar13 + 0x10))();
          FUN_0045d247();
          FUN_004751b2();
          FUN_007b4235();
          if (*(int *)(unaff_EBP + 8) != 0) {
            FUN_0043f6fe();
            _piStack_c4c = (double)CONCAT44(*(int *)(unaff_EBP + 8) + 0x30,
                                            *(undefined4 *)(unaff_EBP + -0xac));
            puStack_c50 = (undefined4 *)0x7aaf8d;
            FUN_007acb52();
          }
          if ((*(int *)(unaff_EBP + -0x10) == 0x4f5c6e) && (0 < *(int *)(unaff_EBP + 0xc))) {
            piVar6[0x7b5] = 1;
            FUN_004e98b7();
            iVar7 = *(int *)(unaff_EBP + 0xc);
            if ((piVar6[0x14b] & 1U) == 0) {
              *(int *)(unaff_EBP + 0xc) = (iVar7 / 4) * -0x28 + -0xfa;
            }
            else {
              *(int *)(unaff_EBP + 0xc) = (iVar7 / 4) * 0x28 + 0xfa;
            }
            *(int *)(unaff_EBP + 0x10) = (iVar7 / 4) * -0x14 + -0xfa;
            _piStack_c4c = (double)*(int *)(unaff_EBP + 0xc);
            puStack_c50 = (undefined4 *)0x7ab01f;
            FUN_0067db5b();
            *(undefined1 **)(unaff_EBP + 0x10) = &stack0xfffff3bc;
            _piStack_c4c = 3.97253334318961e-317;
            FUN_00424e0a();
            iVar7 = *piVar13;
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            _piStack_c4c = (double)CONCAT44(0x7ab03c,piStack_c4c);
            iVar7 = (**(code **)(iVar7 + 0x10))();
            uVar10 = *(undefined4 *)(iVar7 + 4);
            piStack_c4c = (int *)0x7ab046;
            puVar8 = (undefined4 *)(**(code **)(*piVar13 + 0x10))();
            _piStack_c4c = (double)CONCAT44(uVar10,*puVar8);
            *(undefined4 ***)(unaff_EBP + 0x14) = &puStack_c50;
            piStack_c54 = (int *)0x0;
            piStack_c58 = (int *)0x7ab055;
            puStack_c50 = extraout_ECX_05;
            FUN_00424dd7();
            piStack_c54 = (int *)(unaff_EBP + 0xc);
            piStack_c58 = (int *)0x7ab061;
            FUN_00790038();
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            piStack_c54 = (int *)0x7ab072;
            iVar7 = FUN_0043f900();
            piStack_c54 = (int *)(uint)(iVar7 == 0);
            piStack_c58 = (int *)0x7ab07f;
            piStack_c58 = (int *)FUN_004091f9();
            FUN_00424e82();
            FUN_0042b613();
            if (*(int *)(unaff_EBP + 0xc) != 0) {
              FUN_004030b1();
            }
          }
          *(undefined4 *)(unaff_EBP + -0xa8) = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          FUN_0045ebca();
          _piStack_c4c = (double)CONCAT44(4,unaff_EBP + -0x17c);
          *(undefined1 *)(unaff_EBP + -4) = 0x13;
          puStack_c50 = (undefined4 *)0x7ab0c4;
          FUN_0087a0b8();
          *(undefined ***)(unaff_EBP + -0x188) = &PTR_LAB_008e84a0;
          if (*(int *)(unaff_EBP + -0x50) != 0) {
            FUN_004030b1();
            *(undefined4 *)(unaff_EBP + -0x50) = 0;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int **)(unaff_EBP + -0x6c) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x6c) + 8))();
          }
          uVar4 = 1;
          goto LAB_007ab0f2;
        }
        piVar6 = *(int **)(unaff_EBP + -0xa0);
        iVar7 = FUN_0043f6fe();
        if (iVar7 < 0) {
LAB_007a9f1a:
          _piStack_c4c = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0xd0),
                                          *(undefined4 *)(unaff_EBP + -0x38));
          puStack_c50 = (undefined4 *)0x7a9f30;
          iVar7 = FUN_0078c1bd();
          if (iVar7 != 0) goto LAB_007a9f61;
        }
        else if ((*(int *)(unaff_EBP + 8) != 0) && (*(int *)(*(int *)(unaff_EBP + 8) + 0xc) == 3)) {
          (**(code **)(*extraout_ECX + 0x3c))();
          _piStack_c4c = 1.27359451175976e-313;
          (**(code **)(*piVar6 + 0x10))();
          goto LAB_007a9f1a;
        }
LAB_007a9f34:
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x6c) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x6c) + 8))();
        }
      }
    }
LAB_007a9f45:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  FUN_007a934b();
  uVar4 = 0;
LAB_007ab0f2:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


