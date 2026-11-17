/* FUN_004423ce - 0x004423ce in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004423ce(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  FUN_00879bb8();
  iVar6 = *(int *)(extraout_ECX + 0x4ac);
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  if (iVar6 != 0) {
    FUN_00441501(0);
    goto LAB_00444da7;
  }
  uVar4 = FUN_0043f90a(unaff_EBP + -0xc0);
  *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
  if (*(int *)(extraout_ECX + 0x468) == 0) {
LAB_00442427:
    if (0x6d < *(int *)(unaff_EBP + -0x20)) goto LAB_00444da7;
  }
  else if (0x1b < *(int *)(unaff_EBP + -0x20)) {
    if (*(int *)(extraout_ECX + 0x468) != 0) goto LAB_00444da7;
    goto LAB_00442427;
  }
  uVar5 = FUN_0043f6fe();
  iVar6 = *(int *)(extraout_ECX + 0x468);
  puVar9 = (undefined4 *)((uint)(uVar5 < 0x80000000) * 0x3f4 + 0x4bc + extraout_ECX);
  *(undefined4 **)(unaff_EBP + -0x84) = puVar9;
  if (iVar6 == 0) {
    iVar6 = *(int *)(unaff_EBP + -0x20);
    if (iVar6 == 0x26) {
      *(undefined4 *)(extraout_ECX + 0x484) = 0;
    }
    *(undefined **)(unaff_EBP + -0x60) = &DAT_00978678 + iVar6 * 0x18;
    *(undefined4 **)(unaff_EBP + -0x10) = puVar9 + iVar6 + 4;
    iVar7 = *(int *)(extraout_ECX + 0x484) / 10000;
    *(undefined4 **)(unaff_EBP + -0x18) = puVar9 + iVar6 + 0x72;
    if ((((iVar7 == 0xbe) || (iVar7 == 0xc1)) &&
        ((iVar6 = puVar9[iVar6 + 0x72], iVar6 == 0 || (*(int *)(iVar6 + -4) == 0)))) ||
       (((iVar6 = *(int *)(extraout_ECX + 0x484) / 10000, iVar6 != 0xbe && (iVar6 != 0xc1)) &&
        ((**(int **)(unaff_EBP + -0x10) == 0 || (*(int *)(**(int **)(unaff_EBP + -0x10) + -4) == 0))
        )))) {
      if (*(int *)(extraout_ECX + 0x428) == 0) {
        iVar7 = *(int *)(extraout_ECX + 0x47c);
        uVar4 = *(undefined4 *)(extraout_ECX + 0x4a4);
        iVar6 = extraout_ECX + 0x1d;
        uVar12 = *(undefined4 *)(extraout_ECX + 0x484);
        uVar16 = *(undefined4 *)(extraout_ECX + 0x19);
        uVar15 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar14 = *(undefined4 *)(unaff_EBP + -0x10);
      }
      else {
        piVar10 = (int *)(unaff_EBP + -0x244);
        piVar8 = (int *)(extraout_ECX + 0x364);
        *(undefined4 *)(unaff_EBP + -0x1c) = 0x31;
        do {
          iVar6 = *piVar8;
          if (iVar6 == -1) {
            iVar6 = *(int *)((int)piVar8 + -0x347);
          }
          *piVar10 = iVar6;
          piVar8 = piVar8 + 1;
          piVar10 = piVar10 + 1;
          piVar1 = (int *)(unaff_EBP + -0x1c);
          *piVar1 = *piVar1 + -1;
        } while (*piVar1 != 0);
        iVar7 = *(int *)(extraout_ECX + 0x47c);
        uVar4 = *(undefined4 *)(extraout_ECX + 0x4a4);
        iVar6 = unaff_EBP + -0x244;
        uVar12 = *(undefined4 *)(extraout_ECX + 0x484);
        uVar16 = *(undefined4 *)(extraout_ECX + 0x19);
        uVar15 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar14 = *(undefined4 *)(unaff_EBP + -0x10);
      }
      FUN_00406ad7(*(undefined4 *)(unaff_EBP + -0x20),*(undefined1 *)(extraout_ECX + 0x10),
                   *(undefined4 *)(extraout_ECX + 0x11),iVar6,uVar14,uVar15,uVar16,uVar12,uVar4,
                   iVar7 != 0);
    }
    iVar6 = *(int *)(extraout_ECX + 0x484) / 10000;
    if ((iVar6 == 0xbe) || (iVar6 == 0xc1)) {
      piVar10 = *(int **)(unaff_EBP + -0x18);
    }
    else {
      piVar10 = *(int **)(unaff_EBP + -0x10);
    }
    if (*piVar10 == 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(*piVar10 + -4);
    }
    piVar10 = (int *)(*(int *)(unaff_EBP + -0x84) + 0xc);
    FUN_00445a52(*(undefined4 *)(unaff_EBP + -0x1c),1,unaff_EBP + -0xa9);
    _memset((void *)*piVar10,0,*(int *)(unaff_EBP + -0x1c) << 2);
    iVar6 = *(int *)(unaff_EBP + -0x20);
    *(undefined4 *)(*(int *)(unaff_EBP + -0x84) + 8) = 0;
    if (((iVar6 < 0) || (1 < *(int *)(unaff_EBP + -0x20))) && (*(int *)(unaff_EBP + -0x20) != 99)) {
      iVar6 = *(int *)(unaff_EBP + 8);
      if (iVar6 < 3) {
        iVar6 = 2;
      }
      if (9 < iVar6) {
        iVar6 = 10;
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      if (0 < *(int *)(unaff_EBP + -0x1c)) {
        *(int *)(unaff_EBP + -0x40) = iVar6 + 10;
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        do {
          iVar6 = *(int *)(extraout_ECX + 0x484) / 10000;
          if ((iVar6 == 0xbe) || (iVar6 == 0xc1)) {
            iVar6 = *(int *)(*(int *)(**(int **)(unaff_EBP + -0x18) + 4 +
                                     *(int *)(unaff_EBP + 8) * 8) + 0x24);
          }
          else {
            iVar6 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x60) + 0x14) + 8 +
                            *(int *)(unaff_EBP + 0xc));
          }
          *(int *)(*piVar10 + *(int *)(unaff_EBP + 8) * 4) =
               (*(int *)(unaff_EBP + -0x40) * iVar6) / 0x10;
          if (*(int *)(unaff_EBP + 0x10) == 0) {
LAB_00442eaf:
            iVar6 = *(int *)(unaff_EBP + 8);
          }
          else {
            iVar6 = *(int *)(unaff_EBP + -0x20);
            if ((((iVar6 < 0x16) || (0x1b < iVar6)) && (iVar6 != 0x36)) &&
               (((iVar6 != 0x5b && (iVar6 != 0x56)) &&
                ((iVar6 != 0x4b && ((iVar6 != 0x54 && (iVar6 != 0x55)))))))) {
              if (iVar6 != 0x61) {
                if ((iVar6 != 0x5a) && (iVar6 != 0x62)) goto LAB_00442eaf;
                goto LAB_00442e8e;
              }
LAB_00442e93:
              iVar6 = *(int *)(unaff_EBP + 8);
              if (iVar6 != 0) goto LAB_00442eb2;
            }
            else {
LAB_00442e8e:
              if (iVar6 == 0x61) goto LAB_00442e93;
              iVar6 = *(int *)(unaff_EBP + 8);
              if (iVar6 != 2) goto LAB_00442eb2;
            }
            *(undefined4 *)(*piVar10 + iVar6 * 4) = 0x7fffffff;
          }
LAB_00442eb2:
          piVar8 = (int *)(*(int *)(unaff_EBP + -0x84) + 8);
          *piVar8 = *piVar8 + *(int *)(*piVar10 + iVar6 * 4);
          *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0x20;
          *(int *)(unaff_EBP + 8) = iVar6 + 1;
        } while (iVar6 + 1 < *(int *)(unaff_EBP + -0x1c));
      }
    }
    else {
      iVar6 = *(int *)(unaff_EBP + 0xc);
      if (iVar6 < 0x47) {
        iVar6 = 0x46;
      }
      *(int *)(unaff_EBP + 0xc) = iVar6;
      if (0x8b < iVar6) {
        *(undefined4 *)(unaff_EBP + 0xc) = 0x8c;
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      if (0 < *(int *)(unaff_EBP + -0x1c)) {
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
        do {
          iVar6 = *(int *)(extraout_ECX + 0x484) / 10000;
          if ((iVar6 == 0xbe) || (iVar6 == 0xc1)) {
            iVar6 = *(int *)(*(int *)(**(int **)(unaff_EBP + -0x18) + 4 +
                                     *(int *)(unaff_EBP + 8) * 8) + 0x24);
          }
          else {
            iVar6 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x60) + 0x14) + 8 +
                            *(int *)(unaff_EBP + 0x10));
          }
          piVar8 = (int *)(*piVar10 + *(int *)(unaff_EBP + 8) * 4);
          *(int **)(unaff_EBP + -0x40) = piVar8;
          *(int **)(unaff_EBP + -0x28) = piVar8;
          *piVar8 = (iVar6 * 100) / *(int *)(unaff_EBP + 0xc);
          piVar8 = (int *)(*(int *)(unaff_EBP + -0x84) + 8);
          *piVar8 = *piVar8 + **(int **)(unaff_EBP + -0x40);
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
          *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 0x20;
        } while (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + -0x1c));
      }
    }
    FUN_004031b7(0xfffffffe,3);
    iVar6 = *(int *)(extraout_ECX + 0xcc4);
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
    if (iVar6 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + 8,unaff_EBP + -0x3c);
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    FUN_004031b7(0xfffffffe,3);
    iVar6 = *(int *)(extraout_ECX + 0xcc0);
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
    if (iVar6 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + 8,unaff_EBP + -0x3c);
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    FUN_004031b7(0xfffffffe,3);
    iVar6 = *(int *)(extraout_ECX + 0xcd0);
    *(undefined4 *)(unaff_EBP + -4) = 0x10;
    *(int *)(unaff_EBP + 8) = extraout_ECX + 0xcd0;
    if (iVar6 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + 0xc,unaff_EBP + -0x3c);
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    FUN_004031b7(0xfffffffe,3);
    iVar6 = *(int *)(extraout_ECX + 0xccc);
    *(undefined4 *)(unaff_EBP + -4) = 0x11;
    *(int *)(unaff_EBP + 0xc) = extraout_ECX + 0xccc;
    if (iVar6 == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + 0x10,unaff_EBP + -0x3c);
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    puVar9 = *(undefined4 **)(unaff_EBP + -0x84);
    puVar2 = (undefined4 *)*piVar10;
    *puVar9 = 0;
    puVar9[1] = *puVar2;
    iVar6 = *(int *)(extraout_ECX + 0x484) / 10000;
    *(double *)(unaff_EBP + -0x44) = (double)*(int *)(extraout_ECX + 0xcf0) * _DAT_008e8cd0;
    if ((iVar6 == 0xbe) || (iVar6 == 0xc1)) {
      FUN_004031b7(0xfffffffe,3);
      iVar6 = **(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0x12;
      if (iVar6 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_0041141a(unaff_EBP + 0x10,unaff_EBP + -0x3c);
      FUN_004125e6();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      FUN_004031b7(0xfffffffe,3);
      iVar6 = **(int **)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0x13;
      if (iVar6 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_0041141a(unaff_EBP + 8,unaff_EBP + -0x3c);
      FUN_004125e6();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      iVar6 = extraout_ECX;
      if (0 < *(int *)(unaff_EBP + -0x1c)) {
        do {
          if (*(int *)(iVar6 + 0xcf0) != 100) {
            if (*(int *)(unaff_EBP + 8) == 0) {
              piVar10 = (int *)(*(int *)(**(int **)(unaff_EBP + -0x18) + 4) + 0xc);
              if (*piVar10 == 0) {
                FUN_00878dfb(0x80004003);
              }
              *(int *)(unaff_EBP + 0xc) = *piVar10;
              iVar6 = *(int *)(**(int **)(unaff_EBP + -0x18) + 4);
              if (*(int *)(iVar6 + 0xc) == 0) {
                FUN_00878dfb(0x80004003);
              }
              *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar6 + 0xc);
              iVar6 = *(int *)(unaff_EBP + -0x14);
              if (*(int *)(iVar6 + 0xcd0) == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar10 = *(int **)(iVar6 + 0xcd0);
              *(double *)(unaff_EBP + -0x2c) = 1.0 - *(double *)(unaff_EBP + -0x44);
              uVar4 = FUN_0040e53d();
              *(undefined4 *)(unaff_EBP + -0xa8) = uVar4;
              *(undefined4 *)(unaff_EBP + -0xa4) = 0;
              uVar4 = __ftol();
              *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
              uVar4 = FUN_0040e48b();
              *(undefined4 *)(unaff_EBP + -0xa0) = uVar4;
              *(undefined4 *)(unaff_EBP + -0x9c) = 0;
              uVar4 = __ftol();
              iVar6 = (**(code **)(*piVar10 + 0x44))(piVar10,uVar4,*(undefined4 *)(unaff_EBP + 0xc))
              ;
              if (iVar6 < 0) {
                FUN_00878e09(iVar6,piVar10,&DAT_00963d08);
              }
              piVar10 = (int *)(*(int *)(**(int **)(unaff_EBP + -0x18) + 4) + 0x10);
              if (*piVar10 == 0) {
                FUN_00878dfb(0x80004003);
              }
              *(int *)(unaff_EBP + 0xc) = *piVar10;
              iVar6 = *(int *)(**(int **)(unaff_EBP + -0x18) + 4);
              if (*(int *)(iVar6 + 0x10) == 0) {
                FUN_00878dfb(0x80004003);
              }
              *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar6 + 0x10);
              iVar6 = *(int *)(unaff_EBP + -0x14);
              if (*(int *)(iVar6 + 0xccc) == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar10 = *(int **)(iVar6 + 0xccc);
              uVar4 = FUN_0040e53d();
              *(undefined4 *)(unaff_EBP + -0x98) = uVar4;
              *(undefined4 *)(unaff_EBP + -0x94) = 0;
              uVar4 = __ftol();
              *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
              uVar4 = FUN_0040e48b();
              *(undefined4 *)(unaff_EBP + -200) = uVar4;
              *(undefined4 *)(unaff_EBP + -0xc4) = 0;
              uVar4 = __ftol();
              iVar6 = (**(code **)(*piVar10 + 0x44))(piVar10,uVar4,*(undefined4 *)(unaff_EBP + 0xc))
              ;
              if (iVar6 < 0) {
                FUN_00878e09(iVar6,piVar10,&DAT_00963d08);
              }
            }
            iVar6 = *(int *)(unaff_EBP + 8) * 8;
            piVar10 = (int *)(*(int *)(iVar6 + 4 + **(int **)(unaff_EBP + -0x18)) + 0xc);
            *(int **)(unaff_EBP + 0xc) = piVar10;
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
              piVar10 = *(int **)(unaff_EBP + 0xc);
            }
            *(int *)(unaff_EBP + 0x10) = *piVar10;
            piVar10 = (int *)(*(int *)(iVar6 + **(int **)(unaff_EBP + -0x18) + 4) + 0xc);
            *(int **)(unaff_EBP + 0xc) = piVar10;
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
            uVar4 = FUN_0040e48b();
            *(undefined4 *)(unaff_EBP + -0xb4) = uVar4;
            *(undefined4 *)(unaff_EBP + -0xb0) = 0;
            uVar4 = __ftol();
            iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x44))
                              (*(int **)(unaff_EBP + 0xc),uVar4);
            if (iVar7 < 0) {
              FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
            }
            piVar10 = (int *)(*(int *)(iVar6 + 4 + **(int **)(unaff_EBP + -0x18)) + 0xc);
            *(int **)(unaff_EBP + 0xc) = piVar10;
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
              piVar10 = *(int **)(unaff_EBP + 0xc);
            }
            *(int *)(unaff_EBP + 0x10) = *piVar10;
            piVar10 = (int *)(*(int *)(iVar6 + **(int **)(unaff_EBP + -0x18) + 4) + 0xc);
            *(int **)(unaff_EBP + 0xc) = piVar10;
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
            uVar4 = FUN_0040e53d();
            *(undefined4 *)(unaff_EBP + -0xd8) = uVar4;
            *(undefined4 *)(unaff_EBP + -0xd4) = 0;
            uVar4 = __ftol();
            iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x4c))
                              (*(int **)(unaff_EBP + 0xc),uVar4);
            if (iVar7 < 0) {
              FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
            }
            piVar10 = (int *)(*(int *)(iVar6 + 4 + **(int **)(unaff_EBP + -0x18)) + 0x10);
            *(int **)(unaff_EBP + 0xc) = piVar10;
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
              piVar10 = *(int **)(unaff_EBP + 0xc);
            }
            *(int *)(unaff_EBP + 0x10) = *piVar10;
            piVar10 = (int *)(*(int *)(iVar6 + **(int **)(unaff_EBP + -0x18) + 4) + 0x10);
            *(int **)(unaff_EBP + 0xc) = piVar10;
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
            uVar4 = FUN_0040e48b();
            *(undefined4 *)(unaff_EBP + -0x78) = uVar4;
            *(undefined4 *)(unaff_EBP + -0x74) = 0;
            uVar4 = __ftol();
            iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x44))
                              (*(int **)(unaff_EBP + 0xc),uVar4);
            if (iVar7 < 0) {
              FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
            }
            piVar10 = (int *)(*(int *)(iVar6 + 4 + **(int **)(unaff_EBP + -0x18)) + 0x10);
            *(int **)(unaff_EBP + 0xc) = piVar10;
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
              piVar10 = *(int **)(unaff_EBP + 0xc);
            }
            *(int *)(unaff_EBP + 0xc) = *piVar10;
            iVar6 = *(int *)(iVar6 + **(int **)(unaff_EBP + -0x18) + 4);
            if (*(int *)(iVar6 + 0x10) == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar10 = *(int **)(iVar6 + 0x10);
            uVar4 = FUN_0040e53d();
            *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
            *(undefined4 *)(unaff_EBP + -0x30) = 0;
            uVar4 = __ftol();
            iVar6 = (**(code **)(*piVar10 + 0x4c))(piVar10,uVar4);
            if (iVar6 < 0) {
              FUN_00878e09(iVar6,piVar10,&DAT_00963cc8);
            }
          }
          FUN_00403191(&DAT_00980690);
          *(undefined4 *)(unaff_EBP + -4) = 0x14;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          *(undefined4 *)(unaff_EBP + 0xc) =
               *(undefined4 *)
                (*(int *)(**(int **)(unaff_EBP + -0x18) + 4 + *(int *)(unaff_EBP + 8) * 8) + 0xc);
          if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xcd0) == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_004250ac(unaff_EBP + -0x170,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x150,
                       unaff_EBP + -0x110,unaff_EBP + -0x130,unaff_EBP + -0x160,unaff_EBP + -0x120);
          iVar6 = FUN_00402bc3(unaff_EBP + -0x170);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x17;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x150);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x16;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x110);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x130);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x160);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x120);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          FUN_00403191(&DAT_00980690);
          *(undefined4 *)(unaff_EBP + -4) = 0x19;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          *(undefined4 *)(unaff_EBP + 0xc) =
               *(undefined4 *)
                (*(int *)(**(int **)(unaff_EBP + -0x18) + 4 + *(int *)(unaff_EBP + 8) * 8) + 0x10);
          if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xccc) == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_004250ac(unaff_EBP + -0x180,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0xf0,
                       unaff_EBP + -0x140,unaff_EBP + -0x100,unaff_EBP + -0x70,unaff_EBP + -0x5c);
          iVar6 = FUN_00402bc3(unaff_EBP + -0x180);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          iVar6 = FUN_00402bc3(unaff_EBP + -0xf0);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x140);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x100);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x70);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x5c);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
          iVar6 = *(int *)(unaff_EBP + -0x14);
        } while (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + -0x1c));
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      while ((iVar7 = **(int **)(unaff_EBP + -0x10), iVar7 != 0 &&
             (*(uint *)(unaff_EBP + 8) < *(uint *)(iVar7 + -4)))) {
        if (*(int *)(iVar6 + 0xcf0) != 100) {
          if (*(uint *)(unaff_EBP + 8) == 0) {
            iVar6 = *(int *)(iVar7 + 4);
            if (*(int *)(iVar6 + 0xc) == 0) {
              FUN_00878dfb(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(iVar6 + 0xc);
            iVar6 = *(int *)(**(int **)(unaff_EBP + -0x10) + 4);
            if (*(int *)(iVar6 + 0xc) == 0) {
              FUN_00878dfb(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar6 + 0xc);
            iVar6 = *(int *)(unaff_EBP + -0x14);
            if (*(int *)(iVar6 + 0xcc4) == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar10 = *(int **)(iVar6 + 0xcc4);
            *(double *)(unaff_EBP + -0x2c) = 1.0 - *(double *)(unaff_EBP + -0x44);
            uVar4 = FUN_0040e53d();
            *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
            *(undefined4 *)(unaff_EBP + -0x30) = 0;
            uVar4 = __ftol();
            *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
            uVar4 = FUN_0040e48b();
            *(undefined4 *)(unaff_EBP + -0x78) = uVar4;
            *(undefined4 *)(unaff_EBP + -0x74) = 0;
            uVar4 = __ftol();
            iVar6 = (**(code **)(*piVar10 + 0x44))(piVar10,uVar4,*(undefined4 *)(unaff_EBP + 0xc));
            if (iVar6 < 0) {
              FUN_00878e09(iVar6,piVar10,&DAT_00963d08);
            }
            piVar10 = (int *)(*(int *)(**(int **)(unaff_EBP + -0x10) + 4) + 0x10);
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
            }
            *(int *)(unaff_EBP + 0xc) = *piVar10;
            iVar6 = *(int *)(**(int **)(unaff_EBP + -0x10) + 4);
            if (*(int *)(iVar6 + 0x10) == 0) {
              FUN_00878dfb(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar6 + 0x10);
            iVar6 = *(int *)(unaff_EBP + -0x14);
            if (*(int *)(iVar6 + 0xcc0) == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar10 = *(int **)(iVar6 + 0xcc0);
            uVar4 = FUN_0040e53d();
            *(undefined4 *)(unaff_EBP + -0xd8) = uVar4;
            *(undefined4 *)(unaff_EBP + -0xd4) = 0;
            uVar4 = __ftol();
            *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
            uVar4 = FUN_0040e48b();
            *(undefined4 *)(unaff_EBP + -0xb4) = uVar4;
            *(undefined4 *)(unaff_EBP + -0xb0) = 0;
            uVar4 = __ftol();
            iVar6 = (**(code **)(*piVar10 + 0x44))(piVar10,uVar4,*(undefined4 *)(unaff_EBP + 0xc));
            if (iVar6 < 0) {
              FUN_00878e09(iVar6,piVar10,&DAT_00963d08);
            }
          }
          iVar6 = *(int *)(unaff_EBP + 8) * 8;
          piVar10 = (int *)(*(int *)(iVar6 + 4 + **(int **)(unaff_EBP + -0x10)) + 0xc);
          *(int **)(unaff_EBP + 0xc) = piVar10;
          if (*piVar10 == 0) {
            FUN_00878dfb(0x80004003);
            piVar10 = *(int **)(unaff_EBP + 0xc);
          }
          *(int *)(unaff_EBP + 0x10) = *piVar10;
          piVar10 = (int *)(*(int *)(iVar6 + **(int **)(unaff_EBP + -0x10) + 4) + 0xc);
          *(int **)(unaff_EBP + 0xc) = piVar10;
          if (*piVar10 == 0) {
            FUN_00878dfb(0x80004003);
          }
          *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
          uVar4 = FUN_0040e48b();
          *(undefined4 *)(unaff_EBP + -200) = uVar4;
          *(undefined4 *)(unaff_EBP + -0xc4) = 0;
          uVar4 = __ftol();
          iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x44))
                            (*(int **)(unaff_EBP + 0xc),uVar4);
          if (iVar7 < 0) {
            FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
          }
          piVar10 = (int *)(*(int *)(iVar6 + 4 + **(int **)(unaff_EBP + -0x10)) + 0xc);
          *(int **)(unaff_EBP + 0xc) = piVar10;
          if (*piVar10 == 0) {
            FUN_00878dfb(0x80004003);
            piVar10 = *(int **)(unaff_EBP + 0xc);
          }
          *(int *)(unaff_EBP + 0x10) = *piVar10;
          piVar10 = (int *)(*(int *)(iVar6 + **(int **)(unaff_EBP + -0x10) + 4) + 0xc);
          *(int **)(unaff_EBP + 0xc) = piVar10;
          if (*piVar10 == 0) {
            FUN_00878dfb(0x80004003);
          }
          *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
          uVar4 = FUN_0040e53d();
          *(undefined4 *)(unaff_EBP + -0x98) = uVar4;
          *(undefined4 *)(unaff_EBP + -0x94) = 0;
          uVar4 = __ftol();
          iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x4c))
                            (*(int **)(unaff_EBP + 0xc),uVar4);
          if (iVar7 < 0) {
            FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
          }
          piVar10 = (int *)(*(int *)(iVar6 + 4 + **(int **)(unaff_EBP + -0x10)) + 0x10);
          *(int **)(unaff_EBP + 0xc) = piVar10;
          if (*piVar10 == 0) {
            FUN_00878dfb(0x80004003);
            piVar10 = *(int **)(unaff_EBP + 0xc);
          }
          *(int *)(unaff_EBP + 0x10) = *piVar10;
          piVar10 = (int *)(*(int *)(iVar6 + **(int **)(unaff_EBP + -0x10) + 4) + 0x10);
          *(int **)(unaff_EBP + 0xc) = piVar10;
          if (*piVar10 == 0) {
            FUN_00878dfb(0x80004003);
          }
          *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
          uVar4 = FUN_0040e48b();
          *(undefined4 *)(unaff_EBP + -0xa0) = uVar4;
          *(undefined4 *)(unaff_EBP + -0x9c) = 0;
          uVar4 = __ftol();
          iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x44))
                            (*(int **)(unaff_EBP + 0xc),uVar4);
          if (iVar7 < 0) {
            FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
          }
          piVar10 = (int *)(*(int *)(iVar6 + 4 + **(int **)(unaff_EBP + -0x10)) + 0x10);
          *(int **)(unaff_EBP + 0xc) = piVar10;
          if (*piVar10 == 0) {
            FUN_00878dfb(0x80004003);
            piVar10 = *(int **)(unaff_EBP + 0xc);
          }
          *(int *)(unaff_EBP + 0xc) = *piVar10;
          iVar6 = *(int *)(iVar6 + **(int **)(unaff_EBP + -0x10) + 4);
          if (*(int *)(iVar6 + 0x10) == 0) {
            FUN_00878dfb(0x80004003);
          }
          piVar10 = *(int **)(iVar6 + 0x10);
          uVar4 = FUN_0040e53d();
          *(undefined4 *)(unaff_EBP + -0xa8) = uVar4;
          *(undefined4 *)(unaff_EBP + -0xa4) = 0;
          uVar4 = __ftol();
          iVar6 = (**(code **)(*piVar10 + 0x4c))(piVar10,uVar4);
          if (iVar6 < 0) {
            FUN_00878e09(iVar6,piVar10,&DAT_00963cc8);
          }
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0x1e;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x22;
        *(undefined4 *)(unaff_EBP + 0xc) =
             *(undefined4 *)
              (*(int *)(**(int **)(unaff_EBP + -0x10) + 4 + *(int *)(unaff_EBP + 8) * 8) + 0xc);
        if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xcc4) == 0) {
          FUN_00878dfb(0x80004003);
        }
        FUN_004250ac(unaff_EBP + -0x180,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x5c,
                     unaff_EBP + -0x70,unaff_EBP + -0x100,unaff_EBP + -0x140,unaff_EBP + -0xf0);
        iVar6 = FUN_00402bc3(unaff_EBP + -0x180);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x21;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x5c);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x70);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x100);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x140);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar6 = FUN_00402bc3(unaff_EBP + -0xf0);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 0x23;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x27;
        *(undefined4 *)(unaff_EBP + 0xc) =
             *(undefined4 *)
              (*(int *)(**(int **)(unaff_EBP + -0x10) + 4 + *(int *)(unaff_EBP + 8) * 8) + 0x10);
        if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xcc0) == 0) {
          FUN_00878dfb(0x80004003);
        }
        FUN_004250ac(unaff_EBP + -0x170,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x120,
                     unaff_EBP + -0x160,unaff_EBP + -0x130,unaff_EBP + -0x110,unaff_EBP + -0x150);
        iVar6 = FUN_00402bc3(unaff_EBP + -0x170);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x26;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x120);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x25;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x160);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x24;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x130);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x110);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x150);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
        iVar6 = *(int *)(unaff_EBP + -0x14);
      }
      iVar7 = *(int *)(iVar6 + 0xcd0);
      *(uint *)(unaff_EBP + 8) = (-(uint)(*(int *)(iVar6 + 0x480) != 0) & 0x1000000) - 1;
      *(int *)(unaff_EBP + 0xc) = iVar6 + 0xcd0;
      if (iVar7 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar10 = (int *)**(undefined4 **)(unaff_EBP + 0xc);
      *(int **)(unaff_EBP + 0xc) = piVar10;
      iVar7 = (**(code **)(*piVar10 + 0xe0))(piVar10,*(undefined4 *)(unaff_EBP + 8));
      if (iVar7 < 0) {
        FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963df8);
      }
      if (*(int *)(iVar6 + 0xccc) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar10 = *(int **)(iVar6 + 0xccc);
      iVar6 = (**(code **)(*piVar10 + 0xe0))(piVar10,*(undefined4 *)(unaff_EBP + 8));
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,piVar10,&DAT_00963df8);
      }
      iVar6 = *(int *)(unaff_EBP + -0x14);
      *(undefined4 *)(iVar6 + 0x498) = 0;
      iVar7 = *(int *)(**(int **)(unaff_EBP + -0x10) + 4);
      *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar7 + 0x14);
      *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar7 + 0x18);
      iVar7 = *(int *)(**(int **)(unaff_EBP + -0x10) + 4);
      iVar11 = *(int *)(**(int **)(unaff_EBP + -0x18) + 4 + **(int **)(unaff_EBP + -0x84) * 8);
      *(int *)(unaff_EBP + -0x44) = *(int *)(iVar11 + 0x28) - *(int *)(iVar7 + 0x1c);
      *(int *)(unaff_EBP + -0x40) = *(int *)(iVar11 + 0x2c) - *(int *)(iVar7 + 0x20);
      *(undefined4 *)(iVar6 + 0x488) = *(undefined4 *)(iVar11 + 0x14);
      *(undefined4 *)(iVar6 + 0x48c) = *(undefined4 *)(iVar11 + 0x18);
      *(undefined4 *)(iVar6 + 0x490) = *(undefined4 *)(iVar11 + 0x1c);
      *(undefined4 *)(iVar6 + 0x494) = *(undefined4 *)(iVar11 + 0x20);
    }
    else {
      if (**(int **)(unaff_EBP + 8) == 0) {
        FUN_00878dfb(0x80004003);
      }
      uVar5 = FUN_0042503d();
      if ((uVar5 & 0xff000000) != 0) {
        piVar10 = *(int **)(unaff_EBP + 8);
        if (*piVar10 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar10 = (int *)*piVar10;
        iVar6 = (**(code **)(*piVar10 + 0xe0))(piVar10,0xffffff);
        if (iVar6 < 0) {
          FUN_00878e09(iVar6,piVar10,&DAT_00963df8);
        }
        piVar10 = *(int **)(unaff_EBP + 0xc);
        if (*piVar10 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar10 = (int *)*piVar10;
        iVar6 = (**(code **)(*piVar10 + 0xe0))(piVar10,0xffffff);
        if (iVar6 < 0) {
          FUN_00878e09(iVar6,piVar10,&DAT_00963df8);
        }
      }
      *(undefined4 *)(unaff_EBP + 8) = 0;
      if (0 < *(int *)(unaff_EBP + -0x1c)) {
        do {
          if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xcf0) != 100) {
            if (*(int *)(unaff_EBP + 8) == 0) {
              piVar10 = (int *)(*(int *)(**(int **)(unaff_EBP + -0x10) + 4) + 0xc);
              if (*piVar10 == 0) {
                FUN_00878dfb(0x80004003);
              }
              *(int *)(unaff_EBP + 0xc) = *piVar10;
              iVar6 = *(int *)(**(int **)(unaff_EBP + -0x10) + 4);
              if (*(int *)(iVar6 + 0xc) == 0) {
                FUN_00878dfb(0x80004003);
              }
              *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar6 + 0xc);
              iVar6 = *(int *)(unaff_EBP + -0x14);
              if (*(int *)(iVar6 + 0xcc4) == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar10 = *(int **)(iVar6 + 0xcc4);
              *(double *)(unaff_EBP + -0x2c) = 1.0 - *(double *)(unaff_EBP + -0x44);
              uVar4 = FUN_0040e53d();
              *(undefined4 *)(unaff_EBP + -0x34) = uVar4;
              *(undefined4 *)(unaff_EBP + -0x30) = 0;
              uVar4 = __ftol();
              *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
              uVar4 = FUN_0040e48b();
              *(undefined4 *)(unaff_EBP + -0x78) = uVar4;
              *(undefined4 *)(unaff_EBP + -0x74) = 0;
              uVar4 = __ftol();
              iVar6 = (**(code **)(*piVar10 + 0x44))(piVar10,uVar4,*(undefined4 *)(unaff_EBP + 0xc))
              ;
              if (iVar6 < 0) {
                FUN_00878e09(iVar6,piVar10,&DAT_00963d08);
              }
              piVar10 = (int *)(*(int *)(**(int **)(unaff_EBP + -0x10) + 4) + 0x10);
              if (*piVar10 == 0) {
                FUN_00878dfb(0x80004003);
              }
              *(int *)(unaff_EBP + 0xc) = *piVar10;
              iVar6 = *(int *)(**(int **)(unaff_EBP + -0x10) + 4);
              if (*(int *)(iVar6 + 0x10) == 0) {
                FUN_00878dfb(0x80004003);
              }
              *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar6 + 0x10);
              iVar6 = *(int *)(unaff_EBP + -0x14);
              if (*(int *)(iVar6 + 0xcc0) == 0) {
                FUN_00878dfb(0x80004003);
              }
              piVar10 = *(int **)(iVar6 + 0xcc0);
              uVar4 = FUN_0040e53d();
              *(undefined4 *)(unaff_EBP + -0xd8) = uVar4;
              *(undefined4 *)(unaff_EBP + -0xd4) = 0;
              uVar4 = __ftol();
              *(undefined4 *)(unaff_EBP + 0xc) = uVar4;
              uVar4 = FUN_0040e48b();
              *(undefined4 *)(unaff_EBP + -0xb4) = uVar4;
              *(undefined4 *)(unaff_EBP + -0xb0) = 0;
              uVar4 = __ftol();
              iVar6 = (**(code **)(*piVar10 + 0x44))(piVar10,uVar4,*(undefined4 *)(unaff_EBP + 0xc))
              ;
              if (iVar6 < 0) {
                FUN_00878e09(iVar6,piVar10,&DAT_00963d08);
              }
            }
            iVar6 = *(int *)(unaff_EBP + 8) * 8;
            piVar10 = (int *)(*(int *)(iVar6 + 4 + **(int **)(unaff_EBP + -0x10)) + 0xc);
            *(int **)(unaff_EBP + 0xc) = piVar10;
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
              piVar10 = *(int **)(unaff_EBP + 0xc);
            }
            *(int *)(unaff_EBP + 0x10) = *piVar10;
            piVar10 = (int *)(*(int *)(iVar6 + **(int **)(unaff_EBP + -0x10) + 4) + 0xc);
            *(int **)(unaff_EBP + 0xc) = piVar10;
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
            uVar4 = FUN_0040e48b();
            *(undefined4 *)(unaff_EBP + -200) = uVar4;
            *(undefined4 *)(unaff_EBP + -0xc4) = 0;
            uVar4 = __ftol();
            iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x44))
                              (*(int **)(unaff_EBP + 0xc),uVar4);
            if (iVar7 < 0) {
              FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
            }
            piVar10 = (int *)(*(int *)(iVar6 + 4 + **(int **)(unaff_EBP + -0x10)) + 0xc);
            *(int **)(unaff_EBP + 0xc) = piVar10;
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
              piVar10 = *(int **)(unaff_EBP + 0xc);
            }
            *(int *)(unaff_EBP + 0x10) = *piVar10;
            piVar10 = (int *)(*(int *)(iVar6 + **(int **)(unaff_EBP + -0x10) + 4) + 0xc);
            *(int **)(unaff_EBP + 0xc) = piVar10;
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
            uVar4 = FUN_0040e53d();
            *(undefined4 *)(unaff_EBP + -0x98) = uVar4;
            *(undefined4 *)(unaff_EBP + -0x94) = 0;
            uVar4 = __ftol();
            iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x4c))
                              (*(int **)(unaff_EBP + 0xc),uVar4);
            if (iVar7 < 0) {
              FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
            }
            piVar10 = (int *)(*(int *)(iVar6 + 4 + **(int **)(unaff_EBP + -0x10)) + 0x10);
            *(int **)(unaff_EBP + 0xc) = piVar10;
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
              piVar10 = *(int **)(unaff_EBP + 0xc);
            }
            *(int *)(unaff_EBP + 0x10) = *piVar10;
            piVar10 = (int *)(*(int *)(iVar6 + **(int **)(unaff_EBP + -0x10) + 4) + 0x10);
            *(int **)(unaff_EBP + 0xc) = piVar10;
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
            uVar4 = FUN_0040e48b();
            *(undefined4 *)(unaff_EBP + -0xa0) = uVar4;
            *(undefined4 *)(unaff_EBP + -0x9c) = 0;
            uVar4 = __ftol();
            iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x44))
                              (*(int **)(unaff_EBP + 0xc),uVar4);
            if (iVar7 < 0) {
              FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
            }
            piVar10 = (int *)(*(int *)(iVar6 + 4 + **(int **)(unaff_EBP + -0x10)) + 0x10);
            *(int **)(unaff_EBP + 0xc) = piVar10;
            if (*piVar10 == 0) {
              FUN_00878dfb(0x80004003);
              piVar10 = *(int **)(unaff_EBP + 0xc);
            }
            *(int *)(unaff_EBP + 0xc) = *piVar10;
            iVar6 = *(int *)(iVar6 + **(int **)(unaff_EBP + -0x10) + 4);
            if (*(int *)(iVar6 + 0x10) == 0) {
              FUN_00878dfb(0x80004003);
            }
            piVar10 = *(int **)(iVar6 + 0x10);
            uVar4 = FUN_0040e53d();
            *(undefined4 *)(unaff_EBP + -0xa8) = uVar4;
            *(undefined4 *)(unaff_EBP + -0xa4) = 0;
            uVar4 = __ftol();
            iVar6 = (**(code **)(*piVar10 + 0x4c))(piVar10,uVar4);
            if (iVar6 < 0) {
              FUN_00878e09(iVar6,piVar10,&DAT_00963cc8);
            }
          }
          FUN_00403191(&DAT_00980690);
          puVar9 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xcf0);
          uVar4 = *puVar9;
          *(undefined4 *)(unaff_EBP + -4) = 0x28;
          FUN_004031b7(uVar4,3);
          uVar4 = *puVar9;
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          FUN_004031b7(uVar4,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x2a;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          *(undefined4 *)(unaff_EBP + 0xc) =
               *(undefined4 *)
                (*(int *)(**(int **)(unaff_EBP + -0x10) + 4 + *(int *)(unaff_EBP + 8) * 8) + 0xc);
          if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xcc4) == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_004250ac(unaff_EBP + -0x180,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x5c,
                       unaff_EBP + -0x70,unaff_EBP + -0x100,unaff_EBP + -0x140,unaff_EBP + -0xf0);
          iVar6 = FUN_00402bc3(unaff_EBP + -0x180);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2b;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x5c);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2a;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x70);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x29;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x100);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x140);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar6 = FUN_00402bc3(unaff_EBP + -0xf0);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          FUN_00403191(&DAT_00980690);
          uVar4 = *puVar9;
          *(undefined4 *)(unaff_EBP + -4) = 0x2d;
          FUN_004031b7(uVar4,3);
          uVar4 = *puVar9;
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          FUN_004031b7(uVar4,3);
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 0x31;
          *(undefined4 *)(unaff_EBP + 0xc) =
               *(undefined4 *)
                (*(int *)(**(int **)(unaff_EBP + -0x10) + 4 + *(int *)(unaff_EBP + 8) * 8) + 0x10);
          if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xcc0) == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_004250ac(unaff_EBP + -0x170,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x120,
                       unaff_EBP + -0x160,unaff_EBP + -0x130,unaff_EBP + -0x110,unaff_EBP + -0x150);
          iVar6 = FUN_00402bc3(unaff_EBP + -0x170);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x120);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x160);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2e;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x130);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x110);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x150);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
        } while (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + -0x1c));
      }
      piVar10 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0x498) = 0;
      iVar7 = *(int *)(*piVar10 + 4);
      *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar7 + 0x14);
      iVar6 = *(int *)(unaff_EBP + -0x14);
      *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar7 + 0x18);
      iVar7 = *(int *)(*piVar10 + 4);
      *(undefined4 *)(unaff_EBP + -0x88) = *(undefined4 *)(iVar7 + 0x24);
      *(undefined4 *)(unaff_EBP + -0x84) = *(undefined4 *)(iVar7 + 0x28);
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
      *(undefined4 *)(unaff_EBP + -0x44) = 0;
    }
    if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x60) + 0x14) + 0xc) == 0) {
      puVar9 = &DAT_0097bb30;
    }
    else {
      if (*(int *)(iVar6 + 0xcc4) == 0) {
        FUN_00878dfb(0x80004003);
      }
      *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) | 1;
      puVar9 = (undefined4 *)FUN_004113e5(unaff_EBP + 0x10);
      FUN_0040ee87(*puVar9,1);
      *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) | 2;
      puVar9 = (undefined4 *)(unaff_EBP + -0x5c);
      *(undefined4 *)(unaff_EBP + -4) = 0x33;
    }
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xcbc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar10 = (int *)FUN_004113e5(unaff_EBP + 0xc);
    iVar6 = *piVar10;
    *(undefined4 *)(unaff_EBP + -4) = 0x34;
    if (iVar6 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar10 = (int *)*piVar10;
    *(int **)(unaff_EBP + 8) = piVar10;
    iVar6 = (**(code **)(*piVar10 + 100))(piVar10,*puVar9,puVar9[1],puVar9[2],puVar9[3]);
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined4 *)(unaff_EBP + -4) = 0x32;
    if ((*(byte *)(unaff_EBP + -0x24) & 2) != 0) {
      *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffd;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x5c);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if ((*(byte *)(unaff_EBP + -0x24) & 1) != 0) {
      FUN_004125d9();
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0x35;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xcbc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar10 = (int *)FUN_004113e5(unaff_EBP + 0xc);
    iVar6 = *piVar10;
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    if (iVar6 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar10 = (int *)*piVar10;
    *(int **)(unaff_EBP + 8) = piVar10;
    iVar6 = (**(code **)(*piVar10 + 0x90))
                      (piVar10,0,0,*(undefined4 *)(unaff_EBP + -0x5c),
                       *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                       *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x70),
                       *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                       *(undefined4 *)(unaff_EBP + -100));
    if (iVar6 < 0) {
      FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    FUN_004125d9();
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar6 = FUN_00402bc3(unaff_EBP + -0x70);
    if (iVar6 < 0) {
      FUN_00878dfb(iVar6);
    }
    if (((((*(int *)(unaff_EBP + -0xc0) == 0) &&
          (iVar6 = *(int *)(unaff_EBP + -0x20), iVar6 != 0x24)) && (iVar6 != 0x25)) &&
        ((iVar6 != 0x69 && (iVar6 != 0x68)))) && ((iVar6 != 0x2d && (iVar6 != 0x2e)))) {
      iVar6 = *(int *)(unaff_EBP + -0x14);
      if (*(int *)(iVar6 + 0xcc4) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar10 = *(int **)(iVar6 + 0xcc4);
      iVar7 = (**(code **)(*piVar10 + 0xd8))(piVar10,1);
      if (iVar7 < 0) {
        FUN_00878e09(iVar7,piVar10,&DAT_00963df8);
      }
      if (*(int *)(iVar6 + 0xcc0) == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar7 = (**(code **)(**(int **)(iVar6 + 0xcc0) + 0xd8))(*(int **)(iVar6 + 0xcc0),1);
      if (iVar7 < 0) {
        FUN_00878e09();
      }
      if (*(int *)(iVar6 + 0xcbc) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar10 = *(int **)(iVar6 + 0xcbc);
      iVar7 = (**(code **)(*piVar10 + 0xd8))(piVar10,1);
      if (iVar7 < 0) {
        FUN_00878e09(iVar7,piVar10,&DAT_00963df8);
      }
      if (*(int *)(iVar6 + 0xcd0) == 0) {
        FUN_00878dfb();
      }
      FUN_00444de1();
      FUN_00424e27();
      FUN_00444de1();
      FUN_00424aee();
      *(undefined4 *)(unaff_EBP + -4) = 0x3c;
      FUN_00424aee();
      uVar13 = CONCAT44(unaff_EBP + -0x70,unaff_EBP + -0x5c);
      uVar4 = *(undefined4 *)(unaff_EBP + -0x28);
      iVar7 = -*(int *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 0x3d;
      FUN_00424df4(iVar7,uVar4,unaff_EBP + -0x5c,unaff_EBP + -0x70);
      FUN_00424f2f(iVar7,uVar4,uVar13);
      *(undefined1 *)(unaff_EBP + -4) = 0x3c;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        FUN_00878dfb();
      }
      FUN_00424aee();
      *(undefined4 *)(unaff_EBP + -4) = 0x3e;
      FUN_00424aee();
      uVar13 = CONCAT44(unaff_EBP + -0x70,unaff_EBP + -0x5c);
      uVar4 = *(undefined4 *)(unaff_EBP + -0x40);
      iVar11 = -*(int *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 0x3f;
      iVar7 = iVar11;
      FUN_00424df4(iVar11,uVar4,unaff_EBP + -0x5c,unaff_EBP + -0x70);
      FUN_00424f2f(iVar7,uVar4,uVar13);
      *(undefined1 *)(unaff_EBP + -4) = 0x3e;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar7 = FUN_00402bc3();
      if (iVar7 < 0) {
        FUN_00878dfb();
      }
      uVar4 = *(undefined4 *)(unaff_EBP + -0x40);
      *(int *)(iVar6 + 0x49c) = iVar11;
      piVar10 = (int *)(iVar6 + 0xcf4);
      *(undefined4 *)(iVar6 + 0x4a0) = uVar4;
      *piVar10 = 1;
    }
    else {
      iVar6 = *(int *)(unaff_EBP + -0x14);
      if (*(int *)(iVar6 + 0xcc4) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar10 = *(int **)(iVar6 + 0xcc4);
      iVar7 = (**(code **)(*piVar10 + 0xd8))(piVar10,0);
      if (iVar7 < 0) {
        FUN_00878e09(iVar7,piVar10,&DAT_00963df8);
      }
      if (*(int *)(iVar6 + 0xcc0) == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar7 = (**(code **)(**(int **)(iVar6 + 0xcc0) + 0xd8))(*(int **)(iVar6 + 0xcc0),0);
      if (iVar7 < 0) {
        FUN_00878e09();
      }
      if (*(int *)(iVar6 + 0xcbc) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar10 = *(int **)(iVar6 + 0xcbc);
      iVar7 = (**(code **)(*piVar10 + 0xd8))(piVar10,0);
      if (iVar7 < 0) {
        FUN_00878e09(iVar7,piVar10,&DAT_00963df8);
      }
      if (*(int *)(iVar6 + 0xcd0) == 0) {
        FUN_00878dfb();
      }
      piVar10 = *(int **)(iVar6 + 0xcd0);
      iVar7 = (**(code **)(*piVar10 + 0xd8))(piVar10,0);
      if (iVar7 < 0) {
        FUN_00878e09(iVar7,piVar10,&DAT_00963df8);
      }
      if (*(int *)(iVar6 + 0xccc) == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar7 = (**(code **)(**(int **)(iVar6 + 0xccc) + 0xd8))(*(int **)(iVar6 + 0xccc),0);
      if (iVar7 < 0) {
        FUN_00878e09();
      }
      FUN_00403191(&DAT_00980690);
      *(undefined4 *)(unaff_EBP + -4) = 0x38;
      FUN_00403191(&DAT_00980690);
      *(undefined1 *)(unaff_EBP + -4) = 0x39;
      if (*(int *)(iVar6 + 0xcb0) == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar10 = *(int **)(iVar6 + 0xcb0);
      *(int **)(unaff_EBP + 8) = piVar10;
      iVar6 = (**(code **)(*piVar10 + 0x90))
                        (piVar10,*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x5c),
                         *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                         *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x70),
                         *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                         *(undefined4 *)(unaff_EBP + -100));
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x38;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x5c);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x70);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined4 *)(unaff_EBP + -4) = 0x3a;
      FUN_00403191(&DAT_00980690);
      piVar10 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xcb4);
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      if (*piVar10 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar10 = (int *)*piVar10;
      *(int **)(unaff_EBP + 8) = piVar10;
      iVar6 = (**(code **)(*piVar10 + 0x90))
                        (piVar10,*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x5c),
                         *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                         *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x70),
                         *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                         *(undefined4 *)(unaff_EBP + -100));
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      iVar6 = *(int *)(unaff_EBP + -0x14);
      uVar4 = *(undefined4 *)(unaff_EBP + -0x44);
      *(undefined4 *)(iVar6 + 0xcf4) = 0;
      *(undefined4 *)(iVar6 + 0x49c) = uVar4;
      piVar10 = (int *)(iVar6 + 0xcf4);
      *(undefined4 *)(iVar6 + 0x4a0) = *(undefined4 *)(unaff_EBP + -0x40);
    }
    iVar6 = *(int *)(iVar6 + 0x484) / 10000;
    if (((iVar6 != 0xbe) && (iVar6 != 0xc1)) && (cVar3 = FUN_00433bfa(), cVar3 == '\0')) {
      FUN_00424e27();
      FUN_00444de1();
    }
    FUN_00424aee();
    *(undefined4 *)(unaff_EBP + -4) = 0x40;
    FUN_00424aee();
    iVar6 = *piVar10;
    iVar7 = *(int *)(unaff_EBP + -0x88);
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    if (iVar6 != 0) {
      iVar7 = -iVar7;
    }
    uVar13 = CONCAT44(unaff_EBP + -0x70,unaff_EBP + -0x5c);
    uVar4 = *(undefined4 *)(unaff_EBP + -0x84);
    FUN_00424df4(iVar7,uVar4,unaff_EBP + -0x5c,unaff_EBP + -0x70);
    FUN_00424f2f(iVar7,uVar4,uVar13);
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    FUN_00424aee();
    *(undefined4 *)(unaff_EBP + -4) = 0x42;
    FUN_00424aee();
    uVar13 = CONCAT44(unaff_EBP + -0x90,unaff_EBP + -0x4c);
    uVar12 = 0;
    uVar4 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x43;
    FUN_00424df4(0,0,unaff_EBP + -0x4c,unaff_EBP + -0x90);
    FUN_00424f2f(uVar4,uVar12,uVar13);
    *(undefined1 *)(unaff_EBP + -4) = 0x42;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar6 = FUN_00402bc3();
    if (iVar6 < 0) {
      FUN_00878dfb();
    }
    uVar13 = 0;
    FUN_00424df4(0);
    FUN_00444db8(uVar13);
  }
  else {
    FUN_00441501(0);
    *(undefined4 **)(unaff_EBP + 0x10) = puVar9 + *(int *)(unaff_EBP + -0x20) + 0xe0;
    iVar6 = puVar9[*(int *)(unaff_EBP + -0x20) + 0xe0];
    if ((iVar6 == 0) || (*(int *)(iVar6 + -4) == 0)) {
      FUN_00409842(*(undefined4 *)(extraout_ECX + 0x468),*(undefined4 *)(unaff_EBP + -0x20),
                   *(undefined4 *)(unaff_EBP + 0x10));
    }
    if ((**(int **)(unaff_EBP + 0x10) != 0) &&
       (iVar6 = *(int *)(**(int **)(unaff_EBP + 0x10) + -4), *(int *)(unaff_EBP + -0x24) = iVar6,
       iVar6 != 0)) {
      FUN_00445a52(*(undefined4 *)(unaff_EBP + -0x24),1,unaff_EBP + 0xf);
      _memset((void *)puVar9[3],0,*(int *)(unaff_EBP + -0x24) << 2);
      FUN_004031b7(0xfffffffe,3);
      iVar6 = *(int *)(extraout_ECX + 0xcc4);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar6 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_0041141a(unaff_EBP + 0xc,unaff_EBP + -0x3c);
      FUN_004125e6();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      FUN_004031b7(0xfffffffe,3);
      iVar6 = *(int *)(extraout_ECX + 0xcc0);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar6 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_0041141a(unaff_EBP + 0xc,unaff_EBP + -0x3c);
      FUN_004125e6();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      FUN_004031b7(0xfffffffe,3);
      iVar6 = *(int *)(extraout_ECX + 0xcbc);
      *(undefined4 *)(unaff_EBP + -4) = 2;
      if (iVar6 == 0) {
        FUN_00878dfb(0x80004003);
      }
      FUN_0041141a(unaff_EBP + 0xc,unaff_EBP + -0x3c);
      FUN_004125e6();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      iVar6 = *(int *)(unaff_EBP + 8);
      *puVar9 = 0;
      puVar9[2] = 0;
      if (iVar6 < 3) {
        iVar6 = 2;
      }
      *(int *)(unaff_EBP + 8) = iVar6;
      if (9 < iVar6) {
        *(undefined4 *)(unaff_EBP + 8) = 10;
      }
      iVar6 = FUN_0043f79a();
      if ((iVar6 == 0) || (*(undefined4 *)(unaff_EBP + -0x60) = 1, *(int *)(unaff_EBP + -0x20) == 0)
         ) {
        *(undefined4 *)(unaff_EBP + -0x60) = 0;
      }
      iVar6 = 0;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      if (0 < *(int *)(unaff_EBP + -0x24)) {
        do {
          iVar7 = *(int *)(**(int **)(unaff_EBP + 0x10) + 4 + iVar6 * 8);
          if (*(int *)(unaff_EBP + -0x60) == 0) {
            *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x84) + 0xc) + iVar6 * 4) =
                 *(undefined4 *)(iVar7 + 0x28);
          }
          else {
            *(int *)(*(int *)(*(int *)(unaff_EBP + -0x84) + 0xc) + *(int *)(unaff_EBP + 0xc) * 4) =
                 (*(int *)(iVar7 + 0x28) * (*(int *)(unaff_EBP + 8) + 10)) / 0x10;
          }
          piVar10 = (int *)(*(int *)(unaff_EBP + -0x84) + 8);
          *piVar10 = *piVar10 +
                     *(int *)(*(int *)(*(int *)(unaff_EBP + -0x84) + 0xc) +
                             *(int *)(unaff_EBP + 0xc) * 4);
          FUN_00403191(&DAT_00980690);
          *(undefined4 *)(unaff_EBP + -4) = 3;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 5;
          FUN_00403191(&DAT_00980690);
          *(undefined1 *)(unaff_EBP + -4) = 6;
          FUN_00403191(&DAT_00980690);
          iVar6 = *(int *)(extraout_ECX + 0xcc4);
          *(undefined1 *)(unaff_EBP + -4) = 7;
          *(undefined4 *)(unaff_EBP + -0x1c) =
               *(undefined4 *)
                (*(int *)(**(int **)(unaff_EBP + 0x10) + 4 + *(int *)(unaff_EBP + 0xc) * 8) + 0xc);
          if (iVar6 == 0) {
            FUN_00878dfb(0x80004003);
          }
          FUN_004250ac(unaff_EBP + -0x5c,*(undefined4 *)(unaff_EBP + -0x1c),unaff_EBP + -0x3c,
                       unaff_EBP + -0x80,unaff_EBP + -0xe0,unaff_EBP + -0xbc,unaff_EBP + -0xd0);
          iVar6 = FUN_00402bc3(unaff_EBP + -0x5c);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 6;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iVar6 = FUN_00402bc3(unaff_EBP + -0x80);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iVar6 = FUN_00402bc3(unaff_EBP + -0xe0);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iVar6 = FUN_00402bc3(unaff_EBP + -0xbc);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iVar6 = FUN_00402bc3(unaff_EBP + -0xd0);
          if (iVar6 < 0) {
            FUN_00878dfb(iVar6);
          }
          iVar6 = *(int *)(unaff_EBP + 0xc) + 1;
          *(int *)(unaff_EBP + 0xc) = iVar6;
        } while (iVar6 < *(int *)(unaff_EBP + -0x24));
      }
      iVar6 = *(int *)(unaff_EBP + -0xc0);
      piVar10 = *(int **)(unaff_EBP + -0x84);
      piVar10[1] = *(int *)(piVar10[3] + *piVar10 * 4);
      iVar7 = *(int *)(**(int **)(unaff_EBP + 0x10) + 4 + *piVar10 * 8);
      *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(iVar7 + 0x20);
      *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(iVar7 + 0x24);
      if (((iVar6 == 0) && (*(int *)(unaff_EBP + -0x20) != 9)) &&
         (*(int *)(unaff_EBP + -0x20) != 10)) {
        iVar6 = *(int *)(extraout_ECX + 0xcc4);
        *(int *)(unaff_EBP + 8) = extraout_ECX + 0xcc4;
        if (iVar6 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar10 = (int *)**(undefined4 **)(unaff_EBP + 8);
        *(int **)(unaff_EBP + 8) = piVar10;
        iVar6 = (**(code **)(*piVar10 + 0xd8))(piVar10,1);
        if (iVar6 < 0) {
          FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
        }
        iVar6 = *(int *)(extraout_ECX + 0xcc0);
        *(int *)(unaff_EBP + 8) = extraout_ECX + 0xcc0;
        if (iVar6 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar10 = (int *)**(undefined4 **)(unaff_EBP + 8);
        *(int **)(unaff_EBP + 8) = piVar10;
        iVar6 = (**(code **)(*piVar10 + 0xd8))(piVar10,1);
        if (iVar6 < 0) {
          FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
        }
        iVar6 = *(int *)(extraout_ECX + 0xcbc);
        *(int *)(unaff_EBP + 8) = extraout_ECX + 0xcbc;
        if (iVar6 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar10 = (int *)**(undefined4 **)(unaff_EBP + 8);
        *(int **)(unaff_EBP + 8) = piVar10;
        iVar6 = (**(code **)(*piVar10 + 0xd8))(piVar10,1);
        if (iVar6 < 0) {
          FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 10;
        FUN_00403191(&DAT_00980690);
        iVar6 = *(int *)(extraout_ECX + 0xcb0);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        if (iVar6 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar10 = *(int **)(extraout_ECX + 0xcb0);
        iVar6 = *piVar10;
        *(int **)(unaff_EBP + 8) = piVar10;
        iVar6 = (**(code **)(iVar6 + 0x90))
                          (piVar10,-*(int *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40),
                           *(undefined4 *)(unaff_EBP + -0x3c),*(undefined4 *)(unaff_EBP + -0x38),
                           *(undefined4 *)(unaff_EBP + -0x34),*(undefined4 *)(unaff_EBP + -0x30),
                           *(undefined4 *)(unaff_EBP + -0x80),*(undefined4 *)(unaff_EBP + -0x7c),
                           *(undefined4 *)(unaff_EBP + -0x78),*(undefined4 *)(unaff_EBP + -0x74));
        if (iVar6 < 0) {
          FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 10;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      else {
        iVar6 = *(int *)(extraout_ECX + 0xcc4);
        *(int *)(unaff_EBP + 8) = extraout_ECX + 0xcc4;
        if (iVar6 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar10 = (int *)**(undefined4 **)(unaff_EBP + 8);
        *(int **)(unaff_EBP + 8) = piVar10;
        iVar6 = (**(code **)(*piVar10 + 0xd8))(piVar10,0);
        if (iVar6 < 0) {
          FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
        }
        iVar6 = *(int *)(extraout_ECX + 0xcc0);
        *(int *)(unaff_EBP + 8) = extraout_ECX + 0xcc0;
        if (iVar6 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar10 = (int *)**(undefined4 **)(unaff_EBP + 8);
        *(int **)(unaff_EBP + 8) = piVar10;
        iVar6 = (**(code **)(*piVar10 + 0xd8))(piVar10,0);
        if (iVar6 < 0) {
          FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
        }
        iVar6 = *(int *)(extraout_ECX + 0xcbc);
        *(int *)(unaff_EBP + 8) = extraout_ECX + 0xcbc;
        if (iVar6 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar10 = (int *)**(undefined4 **)(unaff_EBP + 8);
        *(int **)(unaff_EBP + 8) = piVar10;
        iVar6 = (**(code **)(*piVar10 + 0xd8))(piVar10,0);
        if (iVar6 < 0) {
          FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963df8);
        }
        FUN_00403191(&DAT_00980690);
        *(undefined4 *)(unaff_EBP + -4) = 8;
        FUN_00403191(&DAT_00980690);
        iVar6 = *(int *)(extraout_ECX + 0xcb0);
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (iVar6 == 0) {
          FUN_00878dfb(0x80004003);
        }
        piVar10 = *(int **)(extraout_ECX + 0xcb0);
        iVar6 = *piVar10;
        *(int **)(unaff_EBP + 8) = piVar10;
        iVar6 = (**(code **)(iVar6 + 0x90))
                          (piVar10,*(undefined4 *)(unaff_EBP + -0x44),
                           *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                           *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                           *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x80),
                           *(undefined4 *)(unaff_EBP + -0x7c),*(undefined4 *)(unaff_EBP + -0x78),
                           *(undefined4 *)(unaff_EBP + -0x74));
        if (iVar6 < 0) {
          FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
        }
        *(undefined1 *)(unaff_EBP + -4) = 8;
        iVar6 = FUN_00402bc3(unaff_EBP + -0x3c);
        if (iVar6 < 0) {
          FUN_00878dfb(iVar6);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      }
      iVar6 = FUN_00402bc3(unaff_EBP + -0x80);
      if (iVar6 < 0) {
        FUN_00878dfb(iVar6);
      }
      FUN_00403191(&DAT_00980690);
      *(undefined4 *)(unaff_EBP + -4) = 0xc;
      FUN_00403191(&DAT_00980690);
      iVar6 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0xcac);
      piVar10 = (int *)(*(int *)(unaff_EBP + -0x14) + 0xcac);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (iVar6 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar8 = (int *)*piVar10;
      iVar6 = *piVar8;
      *(int **)(unaff_EBP + 8) = piVar8;
      iVar6 = (**(code **)(iVar6 + 0x90))
                        (piVar8,0,0,*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x80),
                         *(undefined4 *)(unaff_EBP + -0x7c),*(undefined4 *)(unaff_EBP + -0x78),
                         *(undefined4 *)(unaff_EBP + -0x74));
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar6 = FUN_00402bc3();
      if (iVar6 < 0) {
        FUN_00878dfb();
      }
      if (*piVar10 == 0) {
        FUN_00878dfb();
      }
      piVar10 = (int *)*piVar10;
      iVar6 = (**(code **)(*piVar10 + 0x80))(piVar10,0);
      if (iVar6 < 0) {
        FUN_00878e09(iVar6,piVar10,&DAT_00963de8);
      }
    }
  }
LAB_00444da7:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


