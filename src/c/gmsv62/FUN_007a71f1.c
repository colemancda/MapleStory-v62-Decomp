/* FUN_007a71f1 - 0x007a71f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007a71f1(void)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  int *extraout_ECX;
  int *extraout_ECX_00;
  uint extraout_ECX_01;
  int *extraout_ECX_02;
  undefined4 extraout_ECX_03;
  int unaff_EBP;
  int iVar12;
  bool bVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int *piStack_c08;
  undefined8 uStack_c04;
  int *piStack_bfc;
  
  FUN_00879bb8();
  if ((DAT_0097bfdc & 1) == 0) {
    DAT_0097bfdc = DAT_0097bfdc | 1;
    DAT_0097bfd8 = FUN_0064d61f();
  }
  if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = **(undefined4 **)(unaff_EBP + 8);
  }
  if (*(undefined4 **)(unaff_EBP + 0x10) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x10) = 0x41;
  }
  iVar7 = DAT_00978368;
  *(int *)(unaff_EBP + -0x44) = DAT_00978368;
  iVar2 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x68) = *(undefined4 *)(iVar2 + 4);
  if (*(int *)(unaff_EBP + -0x90) != 0) {
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x90) = 0;
  }
  iVar2 = FUN_00413367();
  *(undefined4 *)(unaff_EBP + -0xb4) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 1;
  *(int *)(unaff_EBP + -0x1c) = iVar7 + 0x3128;
  *(uint *)(unaff_EBP + -0x6c) = (uint)(iVar2 != 0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = FUN_004133f0();
  *(undefined4 *)(unaff_EBP + -0x34) = uVar3;
  uVar3 = FUN_0044dddc();
  *(undefined4 *)(unaff_EBP + -0x74) = uVar3;
  uVar3 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -0x40) = uVar3;
  iVar2 = FUN_007a9222();
  if ((iVar2 == 0) && ((extraout_ECX[0x14b] & 0xfffffffeU) != 0x12)) {
    iVar2 = extraout_ECX[0x35d];
    pcVar6 = *(code **)(unaff_EBP + -0x10);
    if (pcVar6 != ptr_004f5c6a) {
      iVar4 = FUN_0048bb31();
      if (iVar4 != 0) goto LAB_007a7d86;
      pcVar6 = *(code **)(unaff_EBP + -0x10);
    }
    if ((((((pcVar6 == (code *)0x14011e) || (pcVar6 == (code *)0x406849)) ||
          (pcVar6 == (code *)0x40684f)) ||
         (((pcVar6 == (code *)0x111aee || (pcVar6 == (code *)0x12a18f)) ||
          ((pcVar6 == (code *)0x14282b || ((pcVar6 == ptr_004e23ec || (pcVar6 == ptr_004dfcda)))))))
         ) || ((pcVar6 == (code *)0x4dd5ca ||
               ((((pcVar6 == (code *)0x4faa8b || (pcVar6 == (code *)&DAT_004e23e9)) ||
                 (pcVar6 == ptr_004e23ec)) || (pcVar6 == ptr_004e23ec)))))) &&
       (*(int *)((-(uint)(iVar2 != 0) & iVar2 - 0xcU) + 0x110) == 0)) goto LAB_007a7d86;
    iVar2 = FUN_00429303();
    uVar5 = *(uint *)(iVar2 + 0x108) >> 1 & 1;
    *(uint *)(unaff_EBP + -0xa8) = uVar5;
    pcVar6 = *(code **)(unaff_EBP + -0x10);
    if (((uVar5 != 0) &&
        (((pcVar6 == (code *)0x40413a || (pcVar6 == (code *)0x406849)) ||
         ((((pcVar6 == (code *)0x111aee ||
            ((pcVar6 == (code *)0x12a18f || (pcVar6 == (code *)0x14282b)))) ||
           (pcVar6 == (code *)0x3ee1b0)) ||
          (((pcVar6 == (code *)0x4dd5ca || (pcVar6 == (code *)0x4dd5cc)) || (pcVar6 == ptr_004e23ec)
           ))))))) ||
       ((((pcVar6 == (code *)0x111aee || (pcVar6 == (code *)0x12a18f)) ||
         ((pcVar6 == (code *)0x14282b ||
          ((pcVar6 == (code *)0x4dd5ca || (pcVar6 == (code *)0x4dd5cc)))))) &&
        (*(int *)(unaff_EBP + -0x40) < extraout_ECX[0x7b2])))) goto LAB_007a7d86;
    if (pcVar6 == (code *)0x40684f) {
      if (extraout_ECX[0x5ed] == 0) goto LAB_007a7470;
      goto LAB_007a7d86;
    }
    if (pcVar6 != ptr_004f5c6a) {
LAB_007a7470:
      iVar2 = FUN_004b8f25();
      if ((iVar2 != 0) && (*(int *)(unaff_EBP + -0x40) < *(int *)(unaff_EBP + -0x38)))
      goto LAB_007a7d86;
      pcVar6 = *(code **)(unaff_EBP + -0x10);
    }
    if ((((pcVar6 == (code *)0x40413a) || (*(int *)(unaff_EBP + 0x14) == 0x406849)) ||
        (pcVar6 == (code *)0x40684f)) || (pcVar6 == ptr_004dfcda)) {
      piStack_bfc = (int *)0x7a74c5;
      iVar2 = FUN_007bcbcf();
      if (iVar2 == 0) goto LAB_007a7d86;
      pcVar6 = *(code **)(unaff_EBP + -0x10);
    }
    iVar2 = extraout_ECX[300];
    *(int *)(unaff_EBP + -0xa8) = iVar2;
    if (*(int *)(unaff_EBP + 0x14) == 0x406849) {
      *(undefined4 *)(unaff_EBP + -0x2c) = 0x3a;
    }
    else if (pcVar6 == (code *)0x111af0) {
      iVar2 = *(int *)(unaff_EBP + -0x74);
      if ((iVar2 == 0x1e) || (iVar2 == 0x1f)) {
        *(undefined4 *)(unaff_EBP + -0x2c) = 0x3d;
      }
      else {
        if ((iVar2 != 0x28) && (iVar2 != 0x29)) {
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_00471102();
          *(undefined1 *)(unaff_EBP + -4) = 0;
          goto LAB_007a75e2;
        }
        *(undefined4 *)(unaff_EBP + -0x2c) = 0x3e;
      }
    }
    else if (pcVar6 == (code *)0x12a193) {
      *(undefined4 *)(unaff_EBP + -0x2c) = 0x3f;
    }
    else if (pcVar6 == (code *)0x12a191) {
      *(undefined4 *)(unaff_EBP + -0x2c) = 0x45;
    }
    else {
      if (((extraout_ECX[0x14b] & 0xfffffffeU) != 10) || (*(int *)(unaff_EBP + 0x20) != 0)) {
        iVar4 = FUN_0043f79a();
        if (((iVar4 == 0) ||
            ((*(int *)(unaff_EBP + 8) != 0 || (*(int *)(unaff_EBP + -0x74) == 0x27)))) ||
           (*(int *)(unaff_EBP + -0x74) == 0x30)) {
          piStack_bfc = *(int **)(unaff_EBP + -0x74);
          uStack_c04 = (double)CONCAT44(iVar2,0x7a76b9);
          iVar2 = FUN_00653e6a();
          *(int *)(unaff_EBP + -0x2c) = iVar2;
          if (-1 < iVar2) goto LAB_007a74f0;
          if ((*(int *)(unaff_EBP + 8) == 0) || (iVar7 = FUN_00653f88(), iVar7 != 0))
          goto LAB_007a7d86;
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_00471102();
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
        else {
          FUN_00679d22();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          FUN_00471102();
          *(undefined1 *)(unaff_EBP + -4) = 0;
        }
LAB_007a75e2:
        FUN_00414ebb();
        goto LAB_007a7d86;
      }
      if ((*(int *)(unaff_EBP + 8) != 0) || (iVar2 == 0)) goto LAB_007a7d86;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0x20;
    }
LAB_007a74f0:
    *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(iVar7 + 0x2a7c);
    FUN_00413367();
    piStack_bfc = extraout_ECX + 0x12d;
    uStack_c04 = (double)CONCAT44(0x7a7522,(undefined1 *)uStack_c04);
    uVar3 = FUN_00413367();
    *(undefined4 *)(unaff_EBP + -0x70) = uVar3;
    FUN_004c2648();
    piStack_bfc = *(int **)(unaff_EBP + -0x70);
    uStack_c04 = (double)CONCAT44(0x7a753e,(undefined1 *)uStack_c04);
    uVar3 = FUN_00653336();
    *(undefined4 *)(unaff_EBP + -0x8c) = uVar3;
    uStack_c04 = 0.0;
    piStack_c08 = *(int **)(unaff_EBP + -0x10);
    *(uint *)(unaff_EBP + -0x18) = extraout_ECX[0x14b] & 1;
    FUN_00652c29(*(undefined4 *)(unaff_EBP + -0x68),extraout_ECX[0x129],0);
    if (((*(int *)(unaff_EBP + 8) == 0) || (*(int *)(*(int *)(unaff_EBP + 8) + 0xc) != 3)) ||
       (extraout_ECX[0x79c] != 0xf462d)) {
      *(undefined4 *)(unaff_EBP + -0x78) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x78) = 1;
    }
    *(undefined1 **)(unaff_EBP + -0x98) = &stack0xfffff40c;
    piStack_bfc = (int *)0x7a772a;
    FUN_004059fd();
    piStack_bfc = *(int **)(unaff_EBP + 8);
    uStack_c04 = (double)CONCAT44(unaff_EBP + -0x28,0x7a7739);
    FUN_007938b4();
    piVar8 = *(int **)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if ((piVar8 == (int *)0x0) || (*piVar8 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(*piVar8 + -4) >> 1;
    }
    if (uVar5 == 0) {
LAB_007a775a:
      if (piVar8 != (int *)0x0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      bVar13 = *(int *)(unaff_EBP + -0x20) == 0;
    }
    else {
      pcVar6 = (code *)extraout_ECX[0x799];
      if (((pcVar6 != (code *)0x2f9f6c) && (pcVar6 != (code *)0x4faa8c)) &&
         ((pcVar6 != ptr_004f5c6a &&
          ((*(code **)(unaff_EBP + -0x10) != ptr_004f5c6a && (iVar7 = FUN_0043f6fe(), -1 < iVar7))))
         )) {
        if ((*(int *)(unaff_EBP + 8) == 0) || (*(int *)(*(int *)(unaff_EBP + 8) + 0xc) != 3)) {
          piVar8 = *(int **)(unaff_EBP + -0x28);
          goto LAB_007a775a;
        }
        (**(code **)(*extraout_ECX + 0x3c))();
        piStack_bfc = (int *)0x7a77c8;
        (**(code **)(extraout_ECX[0x1e] + 0x10))();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(unaff_EBP + -0x24) = 1;
      if (*(int *)(unaff_EBP + 8) == 0) {
LAB_007a7a4e:
        piStack_bfc = (int *)(unaff_EBP + -0x28);
        *(undefined1 **)(unaff_EBP + 0x18) = &stack0xfffff408;
        uStack_c04 = (double)CONCAT44(0x7a7a73,(undefined1 *)uStack_c04);
        FUN_004059fd();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        piStack_bfc = (int *)0x7a7a7c;
        FUN_0079d484();
        piStack_bfc = (int *)0x7a7a83;
        FUN_0041145f();
        iVar7 = *(int *)(unaff_EBP + -0x54);
        if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
          iVar2 = *(int *)(unaff_EBP + -0x5c);
          if (iVar2 < -0x41) {
            iVar2 = -0x41;
          }
          iVar4 = iVar7 + -1;
          if (iVar2 < iVar4) {
            iVar4 = iVar2;
          }
          *(int *)(unaff_EBP + -0x5c) = iVar4;
          **(int **)(unaff_EBP + 0x10) = -iVar4;
        }
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          piStack_bfc = (int *)-iVar7;
          uStack_c04 = (double)CONCAT44(unaff_EBP + -0x5c,0x7a7aca);
          (*DAT_0097b504)();
        }
        iVar7 = *(int *)(unaff_EBP + -0x10);
        if ((((iVar7 == 0xf462d) || (iVar7 == 0x10f3de)) || (iVar7 == 0x10f3dd)) ||
           ((iVar7 == 0x127a7a || (*(int *)(unaff_EBP + -0x78) != 0)))) {
          piStack_bfc = (int *)0x7a7b3a;
          uVar3 = FUN_00650dae();
          *(undefined4 *)(unaff_EBP + -0x38) = uVar3;
          FUN_006509a1();
          uVar3 = FUN_00413367();
          *(undefined4 *)(unaff_EBP + -0xa4) = *(undefined4 *)(unaff_EBP + -0x5c);
          *(undefined4 *)(unaff_EBP + -0xa0) = *(undefined4 *)(unaff_EBP + -0x58);
          *(undefined4 *)(unaff_EBP + -0x9c) = *(undefined4 *)(unaff_EBP + -0x54);
          *(undefined4 *)(unaff_EBP + -0x98) = *(undefined4 *)(unaff_EBP + -0x50);
          *(undefined4 *)(unaff_EBP + 0x18) = uVar3;
          (**(code **)(extraout_ECX[1] + 0x10))();
          (**(code **)(extraout_ECX[1] + 0x10))();
          piStack_bfc = (int *)0x7a7ba3;
          (*DAT_0097b54c)();
          piStack_bfc = (int *)0x0;
          uStack_c04 = 4.94065645841247e-324;
          piStack_c08 = (int *)(unaff_EBP + -0xf0);
          iVar7 = FUN_005d528b(unaff_EBP + -0xa4);
          if (iVar7 == 1) {
            iVar7 = *(int *)(unaff_EBP + 0x18);
            if (*(int *)(unaff_EBP + -0x18) == 0) {
              if (*(int *)(unaff_EBP + -0x54) <= iVar7) {
                *(int *)(unaff_EBP + -0x54) = iVar7;
              }
            }
            else if (-iVar7 <= *(int *)(unaff_EBP + -0x5c)) {
              *(int *)(unaff_EBP + -0x5c) = -iVar7;
            }
            FUN_006509a1();
            iVar7 = FUN_00413367();
LAB_007a7c1f:
            *(int *)(unaff_EBP + -0x24) = iVar7;
          }
        }
        else if (*(int *)(unaff_EBP + 8) != 0) {
          FUN_006509a1();
          iVar7 = FUN_00413367();
          if (1 < iVar7) goto LAB_007a7c1f;
          *(undefined4 *)(unaff_EBP + -0x24) = 1;
        }
        (**(code **)(extraout_ECX[1] + 0x10))();
        (**(code **)(extraout_ECX[1] + 0x10))();
        piStack_bfc = (int *)0x7a7c43;
        (*DAT_0097b54c)();
        piStack_bfc = (int *)0x0;
        uStack_c04 = (double)(ulonglong)*(uint *)(unaff_EBP + -0x24);
        piStack_c08 = (int *)(unaff_EBP + -0xf0);
        iVar7 = FUN_005d528b(unaff_EBP + -0x5c);
        *(int *)(unaff_EBP + -0x14) = iVar7;
        if (*(int *)(unaff_EBP + 0x10) == 0) goto LAB_007a79b4;
        if (iVar7 != 0) {
          *(undefined4 *)(unaff_EBP + 0x10) = 0;
          piStack_bfc = (int *)0x7a7ca1;
          iVar7 = FUN_00653821();
          *(int *)(unaff_EBP + 0x18) = iVar7;
          if (iVar7 != 0) {
            uVar3 = 1;
            *(undefined4 *)(unaff_EBP + -0xb4) = 1;
            uVar5 = FUN_004133f0();
            if (uVar5 % 100 < *(uint *)(unaff_EBP + 0x18)) {
              piStack_bfc = (int *)0x0;
              uStack_c04 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 0xc),
                                            *(undefined4 *)(unaff_EBP + 0x10));
              piStack_c08 = (int *)0x7a7ce9;
              iVar7 = FUN_007a93ea();
              if (iVar7 != 0) {
                iVar7 = *(int *)(unaff_EBP + -0x28);
                *(undefined4 *)(unaff_EBP + -0x20) = 0;
                extraout_ECX[0x7b6] = 1;
                if (iVar7 != 0) {
                  FUN_004030b1();
                  *(undefined4 *)(unaff_EBP + -0x28) = 0;
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                if (*(int *)(unaff_EBP + -0x20) != 0) {
                  FUN_007a934b();
                }
                goto LAB_007a91f8;
              }
            }
          }
          goto LAB_007a79b4;
        }
      }
      else {
        FUN_006509a1();
        FUN_007a3fab();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iVar7 = FUN_006155ca();
        *(char *)(unaff_EBP + -0x5d) = '\x01' - (iVar7 != 0);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_006575e6();
        if (*(char *)(unaff_EBP + -0x5d) == '\0') goto LAB_007a7a4e;
        if (*(int *)(unaff_EBP + -0x10) == 0x40413c) {
          piStack_bfc = (int *)(unaff_EBP + -0x28);
          *(undefined1 **)(unaff_EBP + 0x10) = &stack0xfffff408;
          uStack_c04 = (double)CONCAT44(0x7a786e,(undefined1 *)uStack_c04);
          FUN_004059fd();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          piStack_bfc = (int *)0x7a7877;
          FUN_0079d484();
          piStack_bfc = (int *)0x7a787e;
          FUN_0041145f();
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            piStack_bfc = (int *)-*(int *)(unaff_EBP + -0x54);
            uStack_c04 = (double)CONCAT44(unaff_EBP + -0x5c,0x7a789f);
            (*DAT_0097b504)();
          }
          (**(code **)(extraout_ECX[1] + 0x10))();
          (**(code **)(extraout_ECX[1] + 0x10))();
          piStack_bfc = (int *)0x7a78c0;
          (*DAT_0097b54c)();
          piStack_bfc = (int *)0x0;
          uStack_c04 = 4.94065645841247e-324;
          piStack_c08 = (int *)(unaff_EBP + -0xf0);
          iVar7 = FUN_005d528b(unaff_EBP + -0x5c);
          *(int *)(unaff_EBP + -0x14) = iVar7;
          if (iVar7 != 0) goto LAB_007a782d;
          uVar3 = 0;
        }
        else {
LAB_007a782d:
          FUN_006509a1();
          uVar3 = FUN_00413367();
        }
        *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
        FUN_006509a1();
        FUN_00411537();
        if ((*(code **)(unaff_EBP + -0x10) != ptr_004f5c6a) ||
           (piVar8 = *(int **)(unaff_EBP + 0x20), piVar8 == (int *)0x0)) {
          piVar8 = extraout_ECX + 1;
        }
        (**(code **)(*piVar8 + 0x10))();
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          *(int *)(unaff_EBP + -0x54) = -*(int *)(unaff_EBP + -0x54);
          *(int *)(unaff_EBP + -0x5c) = -*(int *)(unaff_EBP + -0x5c);
          FUN_004459fe();
        }
        piStack_bfc = (int *)0x7a7957;
        (*DAT_0097b54c)();
        if (*(int *)(unaff_EBP + -0x10) == 0x4dfcde) {
          if (*(int *)(unaff_EBP + -0x18) == 0) {
            *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + -0xb0) + 0x1e;
          }
          else {
            *(int *)(unaff_EBP + -0x5c) = *(int *)(unaff_EBP + -0xb0) + -0x1e;
          }
        }
        iVar7 = *(int *)(unaff_EBP + -0x14);
        piStack_bfc = *(int **)(unaff_EBP + 0x18);
        uStack_c04 = (double)CONCAT44(-(uint)(iVar7 != 0) & *(uint *)(unaff_EBP + -0xf0),
                                      *(int *)(unaff_EBP + -0x24) - iVar7);
        piStack_c08 = (int *)(unaff_EBP + -0xf0 + iVar7 * 4);
        iVar7 = FUN_005d528b(unaff_EBP + -0x5c);
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + iVar7;
LAB_007a79b4:
        if ((*(int *)(unaff_EBP + -0x14) != 0) ||
           (((*(int *)(unaff_EBP + -0x10) != 0x40413a && (*(int *)(unaff_EBP + -0x10) != 0x4dfcdc))
            && (*(int *)(unaff_EBP + -0x10) != 0x4e23ef)))) {
          iVar7 = (**(code **)(extraout_ECX[1] + 0x10))();
          iVar7 = *(int *)(iVar7 + 4);
          piVar8 = (int *)(**(code **)(extraout_ECX[1] + 0x10))();
          iVar2 = *piVar8;
          iVar4 = extraout_ECX[0x7bf] - iVar2;
          if ((((iVar4 < -5) || (5 < iVar4)) || (iVar4 = extraout_ECX[0x7c0] - iVar7, iVar4 < -0x95)
              ) || (0x95 < iVar4)) {
            extraout_ECX[0x7c1] = 0;
            extraout_ECX[0x7bf] = iVar2;
            extraout_ECX[0x7c0] = iVar7;
          }
          else {
            if (99 < extraout_ECX[0x7c1]) {
              if (*(int *)(unaff_EBP + -0x28) != 0) {
                FUN_004030b1();
                *(undefined4 *)(unaff_EBP + -0x28) = 0;
              }
              goto LAB_007a7d86;
            }
            extraout_ECX[0x7c1] = extraout_ECX[0x7c1] + 1;
          }
          iVar7 = *(int *)(unaff_EBP + -0x2c);
          if (*(code **)(unaff_EBP + -0x10) == ptr_004f5c6a) {
            iVar2 = *(int *)(unaff_EBP + -0x40);
            *(undefined4 *)(unaff_EBP + 0x18) = 0x78;
          }
          else {
            piStack_bfc = *(int **)(unaff_EBP + -0x2c);
            uStack_c04 = (double)CONCAT44(0x7a7d64,(undefined1 *)uStack_c04);
            FUN_0078c1bd();
            if (*(int *)(unaff_EBP + -0x10) == 0x4dfcde) {
              *(undefined4 *)(unaff_EBP + 0x18) = 0x564;
            }
            else if (*(code **)(unaff_EBP + -0x10) == ptr_004e23ec) {
              *(undefined4 *)(unaff_EBP + 0x18) = 0;
            }
            else {
              uVar5 = FUN_0043f6fe();
              *(int *)(unaff_EBP + 0x18) =
                   (extraout_ECX[(uint)(uVar5 < 0x80000000) * 0xfd + 0x14f] *
                   (&DAT_00978688)[iVar7 * 6]) / (int)(&DAT_00978684)[iVar7 * 6];
            }
            if (*(int *)(unaff_EBP + -0x6c) != 0) {
              FUN_00413367();
            }
            FUN_007a9209();
            piStack_bfc = (int *)(unaff_EBP + -0x28);
            *(undefined1 **)(unaff_EBP + 0x10) = &stack0xfffff408;
            uStack_c04 = (double)CONCAT44(0x7a7e13,(undefined1 *)uStack_c04);
            FUN_004059fd();
            piStack_bfc = *(int **)(unaff_EBP + -0x2c);
            iVar2 = *(int *)(unaff_EBP + -0x40);
            uStack_c04 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x18),
                                          *(int *)(unaff_EBP + 0x18) + iVar2);
            piStack_c08 = (int *)0x7a7e29;
            FUN_0078ceed();
          }
          pcVar6 = *(code **)(unaff_EBP + -0x10);
          if (pcVar6 == (code *)0x40684f) {
            iVar4 = (&DAT_00978684)[iVar7 * 6];
            extraout_ECX[0x5ed] = iVar4 + iVar2;
            if (iVar4 + iVar2 == 0) {
              extraout_ECX[0x5ed] = 1;
              goto LAB_007a7e5b;
            }
          }
          else {
LAB_007a7e5b:
            if (pcVar6 == (code *)0x3ee1b0) {
LAB_007a7eb2:
              iVar4 = FUN_007a9287();
              *(int *)(unaff_EBP + -0x38) = iVar4 + (&DAT_00978684)[iVar7 * 6] + iVar2;
LAB_007a7ec4:
              FUN_004b8f75();
            }
            else {
              if (pcVar6 == (code *)0x4dd5cb) {
LAB_007a7e95:
                iVar4 = 0;
                if (*(int *)(unaff_EBP + -0x14) != 0) {
                  iVar4 = FUN_007a9287();
                }
                *(int *)(unaff_EBP + 0x10) = (&DAT_00978684)[iVar7 * 6] + iVar4 + iVar2;
                goto LAB_007a7ec4;
              }
              if (pcVar6 == ptr_004dfcda) goto LAB_007a7eb2;
              if (pcVar6 == (code *)&DAT_004e23e9) goto LAB_007a7e95;
              if ((0x4e23eb < (int)pcVar6) && (((int)pcVar6 < 0x4e23ee || (pcVar6 == ptr_004e23ec)))
                 ) goto LAB_007a7eb2;
            }
            if ((*(int *)(unaff_EBP + -0x10) == 0x406849) && (*(int *)(unaff_EBP + 0x14) == 0)) {
              piStack_bfc = (int *)0x1;
              uStack_c04 = 1.6159855250365343e-307;
              uVar3 = FUN_0064d61f();
              uStack_c04 = (double)CONCAT44(uVar3,0x7a7f07);
              FUN_00790b31();
              FUN_007d3e08();
              FUN_007bd2b0();
            }
          }
          if (*(int *)(unaff_EBP + 8) != 0) {
            if ((code *)**(int **)(unaff_EBP + 8) == ptr_004dfcda) {
              (**(code **)(extraout_ECX[1] + 0x10))();
              FUN_0087a90a();
            }
            else if ((*(int *)(unaff_EBP + 0x14) != 0) ||
                    ((code *)**(int **)(unaff_EBP + 8) == ptr_004f5c6a)) {
              piStack_bfc = (int *)0x7a7f89;
              FUN_0079316f();
              FUN_007d3e08();
              goto LAB_007a7f97;
            }
            piStack_bfc = *(int **)(unaff_EBP + 0xc);
            uStack_c04 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + 8),0x7a7f61);
            FUN_00790b31();
          }
LAB_007a7f97:
          iVar7 = *(int *)(unaff_EBP + -0x10);
          if (((iVar7 == 0x10f3e0) || (iVar7 == 0x14011e)) || (iVar7 == 0x895829)) {
            piStack_bfc = (int *)(uint)(iVar7 == 0x10f3e0);
            uStack_c04 = _DAT_008f19e8;
            if (piStack_bfc != (int *)0x0) {
              uStack_c04 = _DAT_008f19f0;
            }
            uStack_c04 = _DAT_008ea320 / uStack_c04;
            piStack_c08 = (int *)0x7a7fec;
            FUN_0042dc18();
          }
          *(undefined4 *)(unaff_EBP + 0x10) = 1;
          if ((*(int *)(unaff_EBP + 8) == 0) || (*(int *)(unaff_EBP + 0x14) != 0)) {
LAB_007a802c:
            *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + 0x10);
          }
          else {
            FUN_006509a1();
            iVar7 = FUN_00413367();
            *(int *)(unaff_EBP + 0x10) = iVar7;
            if (iVar7 < 2) {
              *(undefined4 *)(unaff_EBP + 0x10) = 1;
            }
            if (*(int *)(unaff_EBP + 0x10) < 0xf) goto LAB_007a802c;
            *(undefined4 *)(unaff_EBP + -100) = 0xf;
          }
          if (0 < *(int *)(unaff_EBP + -0x14)) {
            *(int *)(unaff_EBP + -0x4c) = unaff_EBP + -0xf0;
            *(int *)(unaff_EBP + 0x20) = unaff_EBP + -0xbec;
            *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x14);
            do {
              puVar9 = *(undefined4 **)(unaff_EBP + 0x20);
              piStack_bfc = (int *)0x7a8069;
              _memset(puVar9,0,0x98);
              *puVar9 = **(undefined4 **)(unaff_EBP + -0x4c);
              uVar3 = FUN_005c634c();
              puVar9[2] = uVar3;
              uVar3 = FUN_0067d28e();
              puVar9[3] = uVar3;
              uVar3 = FUN_005c9cb2();
              puVar9[1] = uVar3;
              piStack_bfc = *(int **)(unaff_EBP + -0x5c);
              iVar7 = *(int *)(unaff_EBP + 0x20);
              uStack_c04 = (double)CONCAT44(unaff_EBP + -0x9c,0x7a80ae);
              puVar9 = (undefined4 *)FUN_005c5bbc();
              uVar3 = *puVar9;
              *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x4c) + 4;
              *(undefined4 *)(iVar7 + 0x90) = uVar3;
              *(undefined4 *)(iVar7 + 0x94) = puVar9[1];
              piVar8 = (int *)(unaff_EBP + -0x34);
              *piVar8 = *piVar8 + -1;
              *(int *)(unaff_EBP + 0x20) = iVar7 + 0x98;
            } while (*piVar8 != 0);
          }
          if (*(int *)(unaff_EBP + -0x10) != 0x40413c) {
            piStack_bfc = (int *)0x7a80f4;
            FUN_007a9375();
          }
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
          sVar1 = FUN_0045f084();
          if (sVar1 == 0x7a) {
            *(undefined4 *)(unaff_EBP + 0x20) = 0;
            piStack_bfc = (int *)0x7a812d;
            iVar7 = FUN_00650dae();
            if (iVar7 != 0) {
              FUN_006509a1();
              uVar3 = FUN_00413367();
              *(undefined4 *)(unaff_EBP + -0x34) = uVar3;
            }
          }
          *(undefined4 *)(unaff_EBP + 0x20) = 0;
          if (0 < *(int *)(unaff_EBP + -0x14)) {
            *(int *)(unaff_EBP + -0x30) = unaff_EBP + -0xbd4;
            do {
              if (*(int *)(unaff_EBP + -0x10) == 0x12a193) {
                if (0 < *(int *)(unaff_EBP + 0x10)) {
                  puVar9 = *(undefined4 **)(unaff_EBP + -0x30);
                  for (iVar7 = *(int *)(unaff_EBP + 0x10); iVar7 != 0; iVar7 = iVar7 + -1) {
                    *puVar9 = 1;
                    puVar9 = puVar9 + 1;
                  }
                }
              }
              else {
                uVar3 = FUN_0045f084();
                iVar7 = *(int *)(unaff_EBP + -0x44);
                *(undefined4 *)(unaff_EBP + -0x38) = uVar3;
                *(undefined4 *)(unaff_EBP + -0x70) = *(undefined4 *)(iVar7 + 0x32c4);
                *(int *)(unaff_EBP + -0x6c) = extraout_ECX[0x129];
                piStack_bfc = (int *)(*(int *)(*(int *)(unaff_EBP + -0x30) + -0x18) + 0x150);
                uStack_c04 = (double)CONCAT44(0x7a81c5,(undefined1 *)uStack_c04);
                uVar3 = FUN_004b8c9b();
                *(undefined4 *)(unaff_EBP + -0x48) = uVar3;
                iVar2 = *(int *)(unaff_EBP + -0x30);
                piStack_bfc = *(int **)(unaff_EBP + 0x1c);
                uStack_c04 = (double)CONCAT44(iVar2 + 0x3c,iVar2);
                piStack_c08 = *(int **)(unaff_EBP + 0xc);
                FUN_0066c1d7(*(undefined4 *)(unaff_EBP + -0x68),iVar7 + 0x209c,iVar7 + 0x2114,
                             *(undefined4 *)(unaff_EBP + -0x48),*(int *)(iVar2 + -0x18) + 0x170,
                             *(undefined4 *)(unaff_EBP + -100),*(undefined4 *)(unaff_EBP + -0x6c),0,
                             0,*(undefined4 *)(unaff_EBP + -0x2c),0,*(undefined4 *)(unaff_EBP + 8));
              }
              if (*(int *)(unaff_EBP + 8) != 0) {
                iVar7 = *(int *)(unaff_EBP + 0x20);
                piStack_bfc = *(int **)(unaff_EBP + 0xc);
                uStack_c04 = (double)CONCAT44(0x7a8243,(undefined1 *)uStack_c04);
                iVar2 = FUN_0064cf49();
                if (iVar2 != 0) {
                  *(int *)(unaff_EBP + -0x14) = iVar7 + 1;
                  break;
                }
              }
              *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
              *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 0x98;
            } while (*(int *)(unaff_EBP + 0x20) < *(int *)(unaff_EBP + -0x14));
          }
          piVar8 = *(int **)(unaff_EBP + 8);
          piStack_bfc = *(int **)(unaff_EBP + -0x2c);
          uStack_c04 = (double)CONCAT44(extraout_ECX[0x129],*(undefined4 *)(unaff_EBP + 0xc));
          piStack_c08 = piVar8;
          FUN_0064ba86();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          if ((piVar8 == (int *)0x0) || ((*piVar8 != 0x3d0cea && (*piVar8 != 0x4faa91)))) {
            *(undefined4 *)(unaff_EBP + -0x38) = 1;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x38) = 0;
          }
          uVar3 = FUN_0075578b();
          *(undefined4 *)(unaff_EBP + -0x90) = uVar3;
          *(undefined4 *)(unaff_EBP + -0x6c) = 0;
          if ((piVar8 != (int *)0x0) && ((*piVar8 == 0x30d7eb || (*piVar8 == 0x2f514b)))) {
            FUN_006509a1();
            iVar7 = FUN_00413367();
            *(int *)(unaff_EBP + -0x90) = *(int *)(unaff_EBP + -0x90) + iVar7;
            *(int *)(unaff_EBP + -0x6c) = iVar7;
          }
          *(undefined4 *)(unaff_EBP + 0x20) = 0;
          if (0 < *(int *)(unaff_EBP + -0x14)) {
            iVar7 = *(int *)(unaff_EBP + -0x10);
            *(undefined4 *)(unaff_EBP + -0x4c) = 0;
            piVar8 = (int *)(unaff_EBP + -0xbdc);
            do {
              if (iVar7 == 0x40413c) {
                *piVar8 = (-(uint)(*(int *)(unaff_EBP + 0x20) != 0) & 0x118) +
                          *(int *)(unaff_EBP + 0x18);
              }
              else {
                iVar2 = 0x118;
                if (*(int *)(unaff_EBP + -0x4c) < 0x118) {
                  iVar2 = *(int *)(unaff_EBP + -0x4c);
                }
                *piVar8 = *(int *)(unaff_EBP + 0x18) + iVar2;
              }
              *(undefined4 *)(unaff_EBP + 0x10) = 0;
              if (0 < *(int *)(unaff_EBP + -100)) {
                *(int **)(unaff_EBP + -0x30) = piVar8 + 2;
                do {
                  *(undefined4 *)(unaff_EBP + -0x24) = 1;
                  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
                  *(undefined4 *)(unaff_EBP + -0x34) = 0;
                  *(undefined4 *)(unaff_EBP + -0x48) = 0;
                  if (((iVar7 == 0x111aee) || (iVar7 == 0x12a18f)) || (iVar7 == 0x14282b)) {
LAB_007a854d:
                    if (iVar7 == 0x4dd5ca) {
LAB_007a8555:
                      *(undefined4 *)(unaff_EBP + -0x24) = 7;
                      FUN_006509a1();
                      uVar3 = FUN_00413367();
                      *(undefined4 *)(unaff_EBP + -0x98) = uVar3;
                      uVar5 = FUN_004133f0();
                      iVar2 = *(int *)(unaff_EBP + -0x98);
                      iVar7 = FUN_005c5e27();
                      iVar7 = ((-0xf - uVar5 % 0x14) - iVar2) - iVar7;
                    }
                    else {
                      FUN_006509a1();
                      iVar7 = FUN_00413367();
                      uVar5 = FUN_004133f0();
                      *(uint *)(unaff_EBP + -0x98) = uVar5 % 0x14 - iVar7;
                      iVar7 = FUN_005c5e27();
                      iVar7 = *(int *)(unaff_EBP + -0x98) + 0x23 + iVar7;
                      *(uint *)(unaff_EBP + -0x24) =
                           ((*(int *)(unaff_EBP + -0x10) != 0x4dd5cc) - 1 & 3) + 5;
                    }
                    if ((*(byte *)(extraout_ECX + 0x14b) & 1) != 0) {
                      iVar7 = -iVar7;
                    }
                    piVar10 = (int *)(**(code **)(extraout_ECX[1] + 0x10))();
                    iVar7 = *piVar10 + iVar7;
LAB_007a8624:
                    *(int *)(unaff_EBP + -0x3c) = iVar7;
                  }
                  else {
                    if (iVar7 == 0x4dd5ca) goto LAB_007a8555;
                    if (iVar7 == 0x4dd5cc) goto LAB_007a854d;
                    if (iVar7 == 0x3ee1b0) {
                      iVar7 = FUN_005cdcb1();
                      if ((iVar7 != 0) || (**(int **)(unaff_EBP + -0x30) < 1)) goto LAB_007a8627;
                      FUN_006509a1();
                      iVar7 = FUN_00413367();
                      uVar5 = FUN_004133f0();
                      *(uint *)(unaff_EBP + -0x48) = uVar5 % 0x14 + iVar7;
                      iVar7 = FUN_005c5e27();
                      *(int *)(unaff_EBP + -0x3c) = *(int *)(unaff_EBP + -0x48) + -10 + iVar7;
                      uVar3 = (**(code **)(*(int *)(piVar8[-4] + 4) + 0x10))();
                      *(undefined4 *)(unaff_EBP + -0x48) = uVar3;
                      piVar10 = (int *)(**(code **)(extraout_ECX[1] + 0x10))();
                      iVar7 = *(int *)(unaff_EBP + -0x3c);
                      uVar5 = (uint)(**(int **)(unaff_EBP + -0x48) < *piVar10);
                      *(undefined4 *)(unaff_EBP + -0x24) = 6;
                      *(uint *)(unaff_EBP + -0x48) = uVar5;
                      if (uVar5 != 0) {
                        iVar7 = -iVar7;
                      }
                      *(int *)(unaff_EBP + -0x3c) = iVar7;
                      piVar10 = (int *)(**(code **)(extraout_ECX[1] + 0x10))();
                      iVar7 = *piVar10 + *(int *)(unaff_EBP + -0x3c);
                      goto LAB_007a8624;
                    }
                    if (iVar7 == 0x4e23ed) {
                      iVar7 = extraout_ECX[1];
                      *(undefined4 *)(unaff_EBP + -0x24) = 3;
                      puVar9 = (undefined4 *)(**(code **)(iVar7 + 0x10))();
                      *(undefined4 *)(unaff_EBP + -0x3c) = *puVar9;
                      iVar7 = extraout_ECX[1];
                    }
                    else {
                      if (iVar7 != 0x4e23ef) {
                        uVar5 = FUN_004133f0();
                        uVar5 = uVar5 % 100;
                        iVar7 = *(int *)(unaff_EBP + -0x90);
                        *(uint *)(unaff_EBP + -0x98) = uVar5;
                        if (99 < iVar7) {
                          iVar7 = 100;
                        }
                        if (iVar7 < 1) {
                          iVar7 = 0;
                        }
                        iVar2 = FUN_007a931e();
                        if (**(int **)(unaff_EBP + -0x30) < iVar2) {
                          if ((((int)uVar5 < iVar7) && (iVar7 = FUN_005cdcb1(), iVar7 == 0)) &&
                             (*(int *)(unaff_EBP + -0x98) < *(int *)(unaff_EBP + -0x6c)))
                          goto LAB_007a8541;
                        }
                        else if ((int)uVar5 < iVar7) {
LAB_007a8541:
                          *(undefined4 *)(unaff_EBP + -0x24) = 2;
                        }
                        goto LAB_007a8627;
                      }
                      uVar5 = extraout_ECX[0x14b];
                      iVar7 = *(int *)(&DAT_008f1918 + *(int *)(unaff_EBP + 0x10) * 4);
                      *(undefined4 *)(unaff_EBP + -0x24) = 9;
                      *(uint *)(unaff_EBP + -0x3c) =
                           iVar7 * ((-(uint)((uVar5 & 1) != 0) & 0xfffffffe) + 1);
                      iVar7 = extraout_ECX[1];
                    }
                    iVar7 = (**(code **)(iVar7 + 0x10))();
                    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(iVar7 + 4);
                  }
LAB_007a8627:
                  FUN_0067d25d();
                  pcVar6 = *(code **)(unaff_EBP + -0x10);
                  iVar7 = 0;
                  *(undefined1 *)(unaff_EBP + -4) = 9;
                  if ((pcVar6 == (code *)0x406849) || (pcVar6 == (code *)0x40684f)) {
LAB_007a867a:
                    iVar2 = (-(uint)(*(int *)(unaff_EBP + 0x10) != 1) & 0xffffff60) + 0xf0;
LAB_007a868c:
                    *piVar8 = *piVar8 + iVar2;
                  }
                  else if (pcVar6 == (code *)0x111af0) {
                    iVar2 = *(int *)(unaff_EBP + -0x74);
                    if ((iVar2 == 0x1e) || (iVar2 == 0x1f)) {
                      iVar2 = (-(uint)(*(int *)(unaff_EBP + 0x10) != 1) & 0xffffffb0) + 0xa0;
                      goto LAB_007a868c;
                    }
                    if ((iVar2 == 0x28) || (iVar2 == 0x29)) goto LAB_007a867a;
                  }
                  else if (pcVar6 == (code *)0x4dd5cb) {
                    *piVar8 = (-(uint)(*(int *)(unaff_EBP + 0x10) != 1) & 0xfffffef2) + 0x15e;
                    piVar10 = (int *)FUN_0067d25d();
                    *(int **)(unaff_EBP + -0x98) = piVar10;
                    if (*piVar10 != 0) {
                      InterlockedIncrement((LONG *)(*piVar10 + 8));
                    }
                    FUN_00402fa6();
                    *(undefined4 *)(unaff_EBP + -0x44) = **(undefined4 **)(unaff_EBP + -0x98);
                    if (*(int *)(unaff_EBP + -0x70) != 0) {
                      FUN_004030b1();
                      *(undefined4 *)(unaff_EBP + -0x70) = 0;
                    }
                  }
                  else if (pcVar6 == ptr_004e23ec) {
                    iVar7 = (*(int *)(&DAT_008f1930 + *(int *)(unaff_EBP + 0x10) * 4) *
                            (*(int *)(unaff_EBP + -0x8c) + 10)) / 0x10;
                  }
                  else if (pcVar6 == ptr_004e23ec) {
                    iVar2 = FUN_0079d2cf();
                    *(int *)(unaff_EBP + 0x18) = iVar2;
                    *piVar8 = iVar2;
                  }
                  iVar2 = FUN_00413367();
                  if ((0 < iVar2) && (0 < **(int **)(unaff_EBP + -0x30))) {
                    **(int **)(unaff_EBP + -0x30) = iVar2;
                  }
                  iVar2 = FUN_005dcae0();
                  if (iVar2 == 0) {
                    **(undefined4 **)(unaff_EBP + -0x30) = 0;
                  }
                  piStack_bfc = (int *)0x0;
                  uStack_c04 = (double)CONCAT44(*(undefined4 *)(unaff_EBP + -0x24),
                                                *(undefined4 *)(unaff_EBP + -0x38));
                  *(int ***)(unaff_EBP + -0x98) = &piStack_c08;
                  piStack_c08 = extraout_ECX_00;
                  FUN_004059fd(unaff_EBP + -0x44);
                  iVar2 = piVar8[0x21];
                  iVar4 = piVar8[0x20];
                  uVar3 = *(undefined4 *)(unaff_EBP + 0x10);
                  iVar12 = iVar7 + *piVar8 + *(int *)(unaff_EBP + -0x40);
                  uVar17 = (*(undefined4 **)(unaff_EBP + -0x30))[0xf];
                  uVar16 = **(undefined4 **)(unaff_EBP + -0x30);
                  *(undefined1 *)(unaff_EBP + -4) = 9;
                  uVar15 = *(undefined4 *)(unaff_EBP + -0x18);
                  iVar7 = piVar8[-3];
                  uVar14 = *(undefined4 *)(unaff_EBP + -0x10);
                  uVar11 = FUN_0067e5d1(uVar14,iVar12,iVar7,uVar15,uVar16,uVar17,uVar3,iVar4,iVar2);
                  FUN_005cbf42(uVar11,uVar14,iVar12,iVar7,uVar15,uVar16,uVar17,uVar3,iVar4,iVar2);
                  *(undefined1 *)(unaff_EBP + -4) = 8;
                  if (*(int *)(unaff_EBP + -0x44) != 0) {
                    FUN_004030b1();
                    *(undefined4 *)(unaff_EBP + -0x44) = 0;
                  }
                  *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
                  *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 4;
                  iVar7 = *(int *)(unaff_EBP + -0x10);
                } while (*(int *)(unaff_EBP + 0x10) < *(int *)(unaff_EBP + -100));
              }
              *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
              *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x4c) + 0x46;
              piVar8 = piVar8 + 0x26;
            } while (*(int *)(unaff_EBP + 0x20) < *(int *)(unaff_EBP + -0x14));
          }
          piStack_bfc = (int *)0x7a8784;
          FUN_0060142b();
          *(undefined1 *)(unaff_EBP + -4) = 0xb;
          iVar7 = FUN_00429303();
          *(undefined1 *)(unaff_EBP + 0x10) = *(undefined1 *)(iVar7 + 0xf8);
          FUN_00457cda();
          FUN_00457cda();
          FUN_00457d37();
          pcVar6 = *(code **)(unaff_EBP + -0x10);
          if ((int)pcVar6 < 0x236a6a) {
            if ((((pcVar6 == (code *)0x236a69) ||
                 ((pcVar6 == (code *)0x111ae9 || (pcVar6 == (code *)0x12a189)))) ||
                (pcVar6 == (code *)0x142829)) ||
               ((pcVar6 == (code *)0x205d29 || (pcVar6 == (code *)0x21e3c9)))) {
LAB_007a8915:
              FUN_00457d37();
            }
          }
          else if ((((pcVar6 == (code *)0x2f9f6c) || (pcVar6 == (code *)0x312609)) ||
                   (pcVar6 == (code *)0x4dd5cc)) ||
                  ((pcVar6 == ptr_004f5c6a || (pcVar6 == (code *)0x4faa8c)))) goto LAB_007a8915;
          FUN_00457cda();
          FUN_00457cda();
          FUN_00457cda();
          FUN_00457cda();
          FUN_007d1e08();
          FUN_00457d37();
          if (0 < *(int *)(unaff_EBP + -0x14)) {
            piVar8 = (int *)(unaff_EBP + -0xbec);
            *(undefined4 *)(unaff_EBP + 0x1c) = *(undefined4 *)(unaff_EBP + -0x14);
            do {
              FUN_004b8c9b();
              FUN_00457d37();
              FUN_00457cda();
              FUN_005c5474();
              FUN_00457cda();
              FUN_00457cda();
              FUN_00457cda();
              (**(code **)(*(int *)(*piVar8 + 4) + 0x10))();
              FUN_0045d247();
              (**(code **)(*(int *)(*piVar8 + 4) + 0x10))();
              FUN_0045d247();
              (**(code **)(*(int *)(*piVar8 + 4) + 0x14))();
              FUN_0045d247();
              (**(code **)(*(int *)(*piVar8 + 4) + 0x14))();
              FUN_0045d247();
              FUN_0045d247();
              if (0 < *(int *)(unaff_EBP + -100)) {
                *(int **)(unaff_EBP + 0x10) = piVar8 + 6;
                *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(unaff_EBP + -100);
                do {
                  FUN_00457d37();
                  *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 4;
                  piVar10 = (int *)(unaff_EBP + 0x20);
                  *piVar10 = *piVar10 + -1;
                } while (*piVar10 != 0);
              }
              FUN_005d0a74();
              FUN_00457d37();
              piVar8 = piVar8 + 0x26;
              piVar10 = (int *)(unaff_EBP + 0x1c);
              *piVar10 = *piVar10 + -1;
            } while (*piVar10 != 0);
          }
          piVar8 = extraout_ECX + 1;
          (**(code **)(extraout_ECX[1] + 0x10))();
          FUN_0045d247();
          (**(code **)(*piVar8 + 0x10))();
          FUN_0045d247();
          FUN_004751b2();
          FUN_007b4235();
          if ((*(int *)(unaff_EBP + 8) != 0) && (*(int *)(unaff_EBP + 0x14) == 0)) {
            if (*(int *)(*(int *)(unaff_EBP + 8) + 0xc) == 4) {
              if (0 < *(int *)(unaff_EBP + -0x14)) {
                FUN_004b8c9b();
                FUN_0043f6fe();
                piStack_bfc = (int *)0x7a8c14;
                FUN_007acc49();
              }
            }
            else {
              FUN_0043f6fe();
              piStack_bfc = *(int **)(unaff_EBP + -0x68);
              uStack_c04 = (double)CONCAT44(0x7a8bcc,(undefined1 *)uStack_c04);
              FUN_007acb52();
            }
          }
          if (*(int *)(unaff_EBP + -0x10) == 0x40413a) {
            *(undefined1 **)(unaff_EBP + 0x1c) = &stack0xfffff40c;
            piStack_bfc = (int *)0x7a8c32;
            FUN_00424e0a();
            iVar7 = *piVar8;
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            (**(code **)(iVar7 + 0x10))();
            piStack_bfc = (int *)0x7a8c47;
            puVar9 = (undefined4 *)(**(code **)(*piVar8 + 0x10))();
            piStack_bfc = (int *)*puVar9;
            *(int *)(unaff_EBP + 0x18) = (int)&uStack_c04 + 4;
            uStack_c04 = (double)((ulonglong)extraout_ECX_01 << 0x20);
            piStack_c08 = (int *)0x7a8c55;
            FUN_00424dd7();
            uStack_c04._0_4_ = (undefined1 *)0xab9;
            piStack_c08 = (int *)(unaff_EBP + 0x20);
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            uVar3 = FUN_00679d86();
            *(undefined4 *)(unaff_EBP + 0x10) = uVar3;
            *(undefined1 *)(unaff_EBP + -4) = 0xf;
            uStack_c04._0_4_ = (undefined1 *)0x7a8c7d;
            iVar7 = FUN_0043f900();
            uStack_c04 = (double)CONCAT44(uStack_c04._4_4_,(uint)(iVar7 == 0));
            piStack_c08 = (int *)0x7a8c8b;
            piStack_c08 = (int *)FUN_00411641();
            FUN_00424e82();
            FUN_0042b613();
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            FUN_00402676();
            *(int ***)(unaff_EBP + 0x10) = &piStack_bfc;
            uStack_c04 = 3.9680487093223e-317;
            piStack_bfc = extraout_ECX_02;
            FUN_00424e0a();
            uStack_c04._0_4_ = (undefined1 *)((int)&uStack_c04 + 4);
            *(int *)(unaff_EBP + 0x1c) = (int)&uStack_c04 + 4;
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            piStack_c08 = (int *)0x7a8cce;
            uStack_c04._4_4_ = extraout_ECX_03;
            FUN_00486ada();
            uStack_c04._0_4_ = (undefined1 *)0xaba;
            piStack_c08 = (int *)(unaff_EBP + 0x20);
            *(undefined1 *)(unaff_EBP + -4) = 0x11;
            FUN_00679d86();
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            uStack_c04._0_4_ = (undefined1 *)0x7a8cf0;
            iVar7 = FUN_0043f900();
            uStack_c04 = (double)CONCAT44(uStack_c04._4_4_,(uint)(iVar7 == 0));
            piStack_c08 = (int *)0x7a8cfd;
            piStack_c08 = (int *)FUN_00411641();
            FUN_00424e82();
            FUN_0042d941();
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            FUN_00402676();
          }
          if (*(int *)(unaff_EBP + 0x14) == 0x406849) {
            FUN_007d3e08();
          }
          if ((*(int *)(unaff_EBP + -0x10) == 0x40413a) || (*(int *)(unaff_EBP + 0x14) == 0x406849))
          {
            extraout_ECX[0x7a7] = *(int *)(unaff_EBP + -0xb0);
            extraout_ECX[0x7a8] = *(int *)(unaff_EBP + -0xac);
            iVar7 = *(int *)(unaff_EBP + -0x40);
            extraout_ECX[0x7a9] = iVar7;
            extraout_ECX[0x7aa] = iVar7 + 1;
            iVar7 = *(int *)(unaff_EBP + -0x10);
            extraout_ECX[0x7a5] = 1;
            extraout_ECX[0x7a6] = 0;
            if ((iVar7 == 0x40413a) || (*(int *)(unaff_EBP + 0x14) == 0x406849)) {
              FUN_004e98b7();
            }
          }
          if ((((*(int *)(unaff_EBP + -0x10) == 0x111aee) ||
               (*(int *)(unaff_EBP + -0x10) == 0x12a18f)) ||
              (*(int *)(unaff_EBP + -0x10) == 0x14282b)) && (0 < *(int *)(unaff_EBP + -0x14))) {
            extraout_ECX[0x7ac] = 1;
            FUN_007b4812();
            iVar7 = *(int *)(unaff_EBP + -0x18);
            extraout_ECX[0x7ab] = *(int *)(unaff_EBP + -0x10);
            if (iVar7 == 0) {
              FUN_006509a1();
              FUN_00413367();
              piStack_bfc = (int *)0x7a8e31;
              iVar7 = FUN_0087a90a();
            }
            else {
              FUN_006509a1();
              FUN_00413367();
              piStack_bfc = (int *)0x7a8e08;
              iVar7 = FUN_0087a90a();
              iVar7 = -iVar7;
            }
            *(int *)(unaff_EBP + 0x14) = iVar7;
            puVar9 = (undefined4 *)FUN_007b46c2();
            iVar7 = *(int *)(unaff_EBP + -0x18);
            puVar9[2] = *(undefined4 *)(unaff_EBP + 0x14);
            *puVar9 = 0;
            puVar9[1] = 0x5a;
            if (iVar7 == 0) {
              FUN_006509a1();
              FUN_00413367();
              piStack_bfc = (int *)0x7a8e9f;
              iVar7 = FUN_0087a90a();
            }
            else {
              FUN_006509a1();
              FUN_00413367();
              piStack_bfc = (int *)0x7a8e79;
              iVar7 = FUN_0087a90a();
              iVar7 = -iVar7;
            }
            puVar9 = (undefined4 *)FUN_007b46c2();
            *puVar9 = 2;
            puVar9[2] = iVar7;
            puVar9[1] = 0xb4;
            extraout_ECX[0x7b2] = *(int *)(unaff_EBP + -0x40) + 0x6ea;
            FUN_004e98b7();
          }
          if (*(int *)(unaff_EBP + -0x10) == 0x4dd5cc) {
            if (0 < *(int *)(unaff_EBP + -0x14)) {
              extraout_ECX[0x7ac] = 1;
              FUN_007b4812();
              extraout_ECX[0x7ab] = *(int *)(unaff_EBP + -0x10);
              puVar9 = (undefined4 *)FUN_007b46c2();
              puVar9[2] = (-(uint)(*(int *)(unaff_EBP + -0x18) != 0) & 0xffffff26) + 0x6d;
              *puVar9 = 0;
              puVar9[1] = 0x1e;
              puVar9 = (undefined4 *)FUN_007b46c2();
              *puVar9 = 0;
              puVar9[2] = 0;
              puVar9[1] = 0x5a;
              puVar9 = (undefined4 *)FUN_007b46c2();
              puVar9[2] = (-(uint)(*(int *)(unaff_EBP + -0x18) != 0) & 0xffffffee) + 9;
              *puVar9 = 0;
              puVar9[1] = 0x1e;
              puVar9 = (undefined4 *)FUN_007b46c2();
              *puVar9 = 0;
              puVar9[2] = 0;
              puVar9[1] = 0x5a;
              puVar9 = (undefined4 *)FUN_007b46c2();
              puVar9[2] = (-(uint)(*(int *)(unaff_EBP + -0x18) != 0) & 0xfffffff4) + 6;
              *puVar9 = 0;
              puVar9[1] = 0x1e;
              puVar9 = (undefined4 *)FUN_007b46c2();
              *puVar9 = 0;
              puVar9[2] = 0;
              puVar9[1] = 0x5a;
              piStack_bfc = (int *)0x7a8fd7;
              FUN_007a9265();
              piStack_bfc = (int *)0x7a8fe2;
              FUN_007a9265();
              piStack_bfc = (int *)0x7a8ff8;
              FUN_007a9265();
              piStack_bfc = (int *)0x7a9003;
              FUN_007a9265();
              piStack_bfc = (int *)0x7a9011;
              FUN_007a9265();
              extraout_ECX[0x7b2] = *(int *)(unaff_EBP + -0x40) + 0x5aa;
              FUN_005ee6c0();
              FUN_005ea2cf();
              FUN_004e98b7();
              goto LAB_007a903f;
            }
          }
          else {
LAB_007a903f:
            if (*(int *)(unaff_EBP + -0x10) == 0x4dd5ca) {
              if (*(int *)(unaff_EBP + -0x14) < 1) goto LAB_007a91ac;
              FUN_007a9250();
              extraout_ECX[0x7ab] = *(int *)(unaff_EBP + -0x10);
              piStack_bfc = (int *)0x7a9073;
              FUN_007a9265();
              piStack_bfc = (int *)0x7a908e;
              FUN_007a9265();
              piStack_bfc = (int *)0x7a9099;
              FUN_007a9265();
              piStack_bfc = (int *)0x7a90b2;
              FUN_007a9265();
              piStack_bfc = (int *)0x7a90bd;
              FUN_007a9265();
              piStack_bfc = (int *)0x7a90d5;
              FUN_007a9265();
              piStack_bfc = (int *)0x7a90e0;
              FUN_007a9265();
              piStack_bfc = (int *)0x7a90f7;
              FUN_007a9265();
              piStack_bfc = (int *)0x7a9102;
              FUN_007a9265();
              extraout_ECX[0x7b2] = *(int *)(unaff_EBP + -0x40) + 0x7a8;
              FUN_005ee6c0();
              FUN_005ea2cf();
              FUN_004e98b7();
            }
            if ((*(int *)(unaff_EBP + -0x10) == 0x4e23ef) && (0 < *(int *)(unaff_EBP + -0x14))) {
              FUN_007a9250();
              extraout_ECX[0x7ab] = *(int *)(unaff_EBP + -0x10);
              piStack_bfc = (int *)0x7a9157;
              FUN_007a9265();
              FUN_005ca1ff();
              piStack_bfc = (int *)0x7a9183;
              FUN_007a9265();
              piStack_bfc = (int *)0x7a9191;
              FUN_007a9265();
              FUN_005ee6c0();
              FUN_005ea2cf();
              FUN_004e98b7();
            }
          }
LAB_007a91ac:
          FUN_007a921e();
          uVar3 = 1;
          extraout_ECX[0x7b6] = 1;
          FUN_007b4235();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          FUN_00457cd2();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_0064bb90();
          FUN_00403621();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_007a9210();
          goto LAB_007a91f8;
        }
      }
      if (*(int *)(unaff_EBP + -0x28) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x28) = 0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      bVar13 = *(int *)(unaff_EBP + -0x20) == 0;
    }
  }
  else {
LAB_007a7d86:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    bVar13 = *(int *)(unaff_EBP + -0x20) == 0;
  }
  if (!bVar13) {
    FUN_007a934b();
  }
  uVar3 = 0;
LAB_007a91f8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


