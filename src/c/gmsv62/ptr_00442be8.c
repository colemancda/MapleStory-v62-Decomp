/* ptr_00442be8 - 0x00442be8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall ptr_00442be8(uint *param_1)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int unaff_EBX;
  int unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  uint *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if (((*param_1 == unaff_ESI) || (*(uint *)(*param_1 - 4) == unaff_ESI)) ||
     (((iVar4 = *(int *)(unaff_EDI + 0x484) / 10000, iVar4 != unaff_EBX && (iVar4 != 0xc1)) &&
      ((**(uint **)(unaff_EBP + -0x10) == unaff_ESI ||
       (*(uint *)(**(uint **)(unaff_EBP + -0x10) - 4) == unaff_ESI)))))) {
    if (*(uint *)(unaff_EDI + 0x428) == unaff_ESI) {
      uVar8 = *(uint *)(unaff_EDI + 0x47c);
      uVar6 = *(undefined4 *)(unaff_EDI + 0x4a4);
      iVar4 = unaff_EDI + 0x1d;
      uVar13 = *(undefined4 *)(unaff_EDI + 0x484);
      uVar17 = *(undefined4 *)(unaff_EDI + 0x19);
      uVar16 = *(undefined4 *)(unaff_EBP + -0x18);
      uVar15 = *(undefined4 *)(unaff_EBP + -0x10);
    }
    else {
      piVar10 = (int *)(unaff_EBP + -0x244);
      piVar5 = (int *)(unaff_EDI + 0x364);
      *(undefined4 *)(unaff_EBP + -0x1c) = 0x31;
      do {
        iVar4 = *piVar5;
        if (iVar4 == -1) {
          iVar4 = *(int *)((int)piVar5 + -0x347);
        }
        *piVar10 = iVar4;
        piVar5 = piVar5 + 1;
        piVar10 = piVar10 + 1;
        piVar1 = (int *)(unaff_EBP + -0x1c);
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      uVar8 = *(uint *)(unaff_EDI + 0x47c);
      uVar6 = *(undefined4 *)(unaff_EDI + 0x4a4);
      iVar4 = unaff_EBP + -0x244;
      uVar13 = *(undefined4 *)(unaff_EDI + 0x484);
      uVar17 = *(undefined4 *)(unaff_EDI + 0x19);
      uVar16 = *(undefined4 *)(unaff_EBP + -0x18);
      uVar15 = *(undefined4 *)(unaff_EBP + -0x10);
    }
    FUN_00406ad7(*(undefined4 *)(unaff_EBP + -0x20),*(undefined1 *)(unaff_EDI + 0x10),
                 *(undefined4 *)(unaff_EDI + 0x11),iVar4,uVar15,uVar16,uVar17,uVar13,uVar6,
                 uVar8 != unaff_ESI);
  }
  iVar4 = *(int *)(unaff_EDI + 0x484) / 10000;
  if ((iVar4 == unaff_EBX) || (iVar4 == 0xc1)) {
    puVar11 = *(uint **)(unaff_EBP + -0x18);
  }
  else {
    puVar11 = *(uint **)(unaff_EBP + -0x10);
  }
  if (*puVar11 == unaff_ESI) {
    *(uint *)(unaff_EBP + -0x1c) = unaff_ESI;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(*puVar11 - 4);
  }
  piVar10 = (int *)(*(int *)(unaff_EBP + -0x84) + 0xc);
  FUN_00445a52(*(undefined4 *)(unaff_EBP + -0x1c),1,unaff_EBP + -0xa9);
  _memset((void *)*piVar10,unaff_ESI,*(int *)(unaff_EBP + -0x1c) << 2);
  iVar4 = *(int *)(unaff_EBP + -0x20);
  *(uint *)(*(int *)(unaff_EBP + -0x84) + 8) = unaff_ESI;
  if (((iVar4 < (int)unaff_ESI) || (1 < *(int *)(unaff_EBP + -0x20))) &&
     (*(int *)(unaff_EBP + -0x20) != 99)) {
    iVar4 = *(int *)(unaff_EBP + 8);
    if (iVar4 < 3) {
      iVar4 = 2;
    }
    if (9 < iVar4) {
      iVar4 = 10;
    }
    *(uint *)(unaff_EBP + 8) = unaff_ESI;
    if ((int)unaff_ESI < *(int *)(unaff_EBP + -0x1c)) {
      *(int *)(unaff_EBP + -0x40) = iVar4 + 10;
      *(uint *)(unaff_EBP + 0xc) = unaff_ESI;
      do {
        iVar4 = *(int *)(unaff_EDI + 0x484) / 10000;
        if ((iVar4 == 0xbe) || (iVar4 == 0xc1)) {
          iVar4 = *(int *)(*(int *)(**(int **)(unaff_EBP + -0x18) + 4 + *(int *)(unaff_EBP + 8) * 8)
                          + 0x24);
        }
        else {
          iVar4 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x60) + 0x14) + 8 +
                          *(int *)(unaff_EBP + 0xc));
        }
        *(int *)(*piVar10 + *(int *)(unaff_EBP + 8) * 4) =
             (*(int *)(unaff_EBP + -0x40) * iVar4) / 0x10;
        if (*(uint *)(unaff_EBP + 0x10) == unaff_ESI) {
LAB_00442eaf:
          uVar8 = *(uint *)(unaff_EBP + 8);
        }
        else {
          iVar4 = *(int *)(unaff_EBP + -0x20);
          if (((((iVar4 < 0x16) || (0x1b < iVar4)) && (iVar4 != 0x36)) &&
              ((iVar4 != 0x5b && (iVar4 != 0x56)))) &&
             ((iVar4 != 0x4b && ((iVar4 != 0x54 && (iVar4 != 0x55)))))) {
            if (iVar4 != 0x61) {
              if ((iVar4 != 0x5a) && (iVar4 != 0x62)) goto LAB_00442eaf;
              goto LAB_00442e8e;
            }
LAB_00442e93:
            uVar8 = *(uint *)(unaff_EBP + 8);
            if (uVar8 != unaff_ESI) goto LAB_00442eb2;
          }
          else {
LAB_00442e8e:
            if (iVar4 == 0x61) goto LAB_00442e93;
            uVar8 = *(uint *)(unaff_EBP + 8);
            if (uVar8 != 2) goto LAB_00442eb2;
          }
          *(undefined4 *)(*piVar10 + uVar8 * 4) = 0x7fffffff;
        }
LAB_00442eb2:
        piVar5 = (int *)(*(int *)(unaff_EBP + -0x84) + 8);
        *piVar5 = *piVar5 + *(int *)(*piVar10 + uVar8 * 4);
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 0x20;
        *(uint *)(unaff_EBP + 8) = uVar8 + 1;
      } while ((int)(uVar8 + 1) < *(int *)(unaff_EBP + -0x1c));
    }
  }
  else {
    iVar4 = *(int *)(unaff_EBP + 0xc);
    if (iVar4 < 0x47) {
      iVar4 = 0x46;
    }
    *(int *)(unaff_EBP + 0xc) = iVar4;
    if (0x8b < iVar4) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0x8c;
    }
    *(uint *)(unaff_EBP + 8) = unaff_ESI;
    if ((int)unaff_ESI < *(int *)(unaff_EBP + -0x1c)) {
      *(uint *)(unaff_EBP + 0x10) = unaff_ESI;
      do {
        iVar4 = *(int *)(unaff_EDI + 0x484) / 10000;
        if ((iVar4 == 0xbe) || (iVar4 == 0xc1)) {
          iVar4 = *(int *)(*(int *)(**(int **)(unaff_EBP + -0x18) + 4 + *(int *)(unaff_EBP + 8) * 8)
                          + 0x24);
        }
        else {
          iVar4 = *(int *)(*(int *)(*(int *)(unaff_EBP + -0x60) + 0x14) + 8 +
                          *(int *)(unaff_EBP + 0x10));
        }
        piVar5 = (int *)(*piVar10 + *(int *)(unaff_EBP + 8) * 4);
        *(int **)(unaff_EBP + -0x40) = piVar5;
        *(int **)(unaff_EBP + -0x28) = piVar5;
        *piVar5 = (iVar4 * 100) / *(int *)(unaff_EBP + 0xc);
        piVar5 = (int *)(*(int *)(unaff_EBP + -0x84) + 8);
        *piVar5 = *piVar5 + **(int **)(unaff_EBP + -0x40);
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
        *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 0x20;
      } while (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + -0x1c));
    }
  }
  FUN_004031b7(0xfffffffe,3);
  uVar8 = *(uint *)(unaff_EDI + 0xcc4);
  *(undefined4 *)(unaff_EBP + -4) = 0xe;
  if (uVar8 == unaff_ESI) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0041141a(unaff_EBP + 8,unaff_EBP + -0x3c);
  FUN_004125e6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar4 < (int)unaff_ESI) {
    FUN_00878dfb(iVar4);
  }
  FUN_004031b7(0xfffffffe,3);
  uVar8 = *(uint *)(unaff_EDI + 0xcc0);
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  if (uVar8 == unaff_ESI) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0041141a(unaff_EBP + 8,unaff_EBP + -0x3c);
  FUN_004125e6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar4 < (int)unaff_ESI) {
    FUN_00878dfb(iVar4);
  }
  FUN_004031b7(0xfffffffe,3);
  uVar8 = *(uint *)(unaff_EDI + 0xcd0);
  *(undefined4 *)(unaff_EBP + -4) = 0x10;
  *(int *)(unaff_EBP + 8) = unaff_EDI + 0xcd0;
  if (uVar8 == unaff_ESI) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0041141a(unaff_EBP + 0xc,unaff_EBP + -0x3c);
  FUN_004125e6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar4 < (int)unaff_ESI) {
    FUN_00878dfb(iVar4);
  }
  FUN_004031b7(0xfffffffe,3);
  uVar8 = *(uint *)(unaff_EDI + 0xccc);
  *(undefined4 *)(unaff_EBP + -4) = 0x11;
  *(int *)(unaff_EBP + 0xc) = unaff_EDI + 0xccc;
  if (uVar8 == unaff_ESI) {
    FUN_00878dfb(0x80004003);
  }
  FUN_0041141a(unaff_EBP + 0x10,unaff_EBP + -0x3c);
  FUN_004125e6();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
  if (iVar4 < (int)unaff_ESI) {
    FUN_00878dfb(iVar4);
  }
  puVar11 = *(uint **)(unaff_EBP + -0x84);
  puVar2 = (uint *)*piVar10;
  *puVar11 = unaff_ESI;
  puVar11[1] = *puVar2;
  iVar4 = *(int *)(unaff_EDI + 0x484) / 10000;
  *(double *)(unaff_EBP + -0x44) = (double)*(int *)(unaff_EDI + 0xcf0) * _DAT_008e8cd0;
  if ((iVar4 == 0xbe) || (iVar4 == 0xc1)) {
    FUN_004031b7(0xfffffffe,3);
    uVar8 = **(uint **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0x12;
    if (uVar8 == unaff_ESI) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + 0x10,unaff_EBP + -0x3c);
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar4 < (int)unaff_ESI) {
      FUN_00878dfb(iVar4);
    }
    FUN_004031b7(0xfffffffe,3);
    uVar8 = **(uint **)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0x13;
    if (uVar8 == unaff_ESI) {
      FUN_00878dfb(0x80004003);
    }
    FUN_0041141a(unaff_EBP + 8,unaff_EBP + -0x3c);
    FUN_004125e6();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar4 < (int)unaff_ESI) {
      FUN_00878dfb(iVar4);
    }
    *(uint *)(unaff_EBP + 8) = unaff_ESI;
    if ((int)unaff_ESI < *(int *)(unaff_EBP + -0x1c)) {
      do {
        if (*(int *)(unaff_EDI + 0xcf0) != 100) {
          if (*(uint *)(unaff_EBP + 8) == unaff_ESI) {
            puVar11 = (uint *)(*(int *)(**(int **)(unaff_EBP + -0x18) + 4) + 0xc);
            if (*puVar11 == unaff_ESI) {
              FUN_00878dfb(0x80004003);
            }
            *(uint *)(unaff_EBP + 0xc) = *puVar11;
            iVar4 = *(int *)(**(int **)(unaff_EBP + -0x18) + 4);
            if (*(uint *)(iVar4 + 0xc) == unaff_ESI) {
              FUN_00878dfb(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar4 + 0xc);
            iVar4 = *(int *)(unaff_EBP + -0x14);
            if (*(uint *)(iVar4 + 0xcd0) == unaff_ESI) {
              FUN_00878dfb(0x80004003);
            }
            piVar10 = *(int **)(iVar4 + 0xcd0);
            *(double *)(unaff_EBP + -0x2c) = 1.0 - *(double *)(unaff_EBP + -0x44);
            uVar6 = FUN_0040e53d();
            *(undefined4 *)(unaff_EBP + -0xa8) = uVar6;
            *(uint *)(unaff_EBP + -0xa4) = unaff_ESI;
            uVar6 = __ftol();
            *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
            uVar6 = FUN_0040e48b();
            *(undefined4 *)(unaff_EBP + -0xa0) = uVar6;
            *(uint *)(unaff_EBP + -0x9c) = unaff_ESI;
            uVar6 = __ftol();
            iVar4 = (**(code **)(*piVar10 + 0x44))(piVar10,uVar6,*(undefined4 *)(unaff_EBP + 0xc));
            if (iVar4 < (int)unaff_ESI) {
              FUN_00878e09(iVar4,piVar10,&DAT_00963d08);
            }
            puVar11 = (uint *)(*(int *)(**(int **)(unaff_EBP + -0x18) + 4) + 0x10);
            if (*puVar11 == unaff_ESI) {
              FUN_00878dfb(0x80004003);
            }
            *(uint *)(unaff_EBP + 0xc) = *puVar11;
            iVar4 = *(int *)(**(int **)(unaff_EBP + -0x18) + 4);
            if (*(uint *)(iVar4 + 0x10) == unaff_ESI) {
              FUN_00878dfb(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar4 + 0x10);
            iVar4 = *(int *)(unaff_EBP + -0x14);
            if (*(uint *)(iVar4 + 0xccc) == unaff_ESI) {
              FUN_00878dfb(0x80004003);
            }
            piVar10 = *(int **)(iVar4 + 0xccc);
            uVar6 = FUN_0040e53d();
            *(undefined4 *)(unaff_EBP + -0x98) = uVar6;
            *(uint *)(unaff_EBP + -0x94) = unaff_ESI;
            uVar6 = __ftol();
            *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
            uVar6 = FUN_0040e48b();
            *(undefined4 *)(unaff_EBP + -200) = uVar6;
            *(uint *)(unaff_EBP + -0xc4) = unaff_ESI;
            uVar6 = __ftol();
            iVar4 = (**(code **)(*piVar10 + 0x44))(piVar10,uVar6,*(undefined4 *)(unaff_EBP + 0xc));
            if (iVar4 < (int)unaff_ESI) {
              FUN_00878e09(iVar4,piVar10,&DAT_00963d08);
            }
          }
          iVar4 = *(int *)(unaff_EBP + 8) * 8;
          puVar11 = (uint *)(*(int *)(iVar4 + 4 + **(int **)(unaff_EBP + -0x18)) + 0xc);
          *(uint **)(unaff_EBP + 0xc) = puVar11;
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
            puVar11 = *(uint **)(unaff_EBP + 0xc);
          }
          *(uint *)(unaff_EBP + 0x10) = *puVar11;
          puVar11 = (uint *)(*(int *)(iVar4 + **(int **)(unaff_EBP + -0x18) + 4) + 0xc);
          *(uint **)(unaff_EBP + 0xc) = puVar11;
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
          }
          *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
          uVar6 = FUN_0040e48b();
          *(undefined4 *)(unaff_EBP + -0xb4) = uVar6;
          *(uint *)(unaff_EBP + -0xb0) = unaff_ESI;
          uVar6 = __ftol();
          iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x44))
                            (*(int **)(unaff_EBP + 0xc),uVar6);
          if (iVar7 < (int)unaff_ESI) {
            FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
          }
          puVar11 = (uint *)(*(int *)(iVar4 + 4 + **(int **)(unaff_EBP + -0x18)) + 0xc);
          *(uint **)(unaff_EBP + 0xc) = puVar11;
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
            puVar11 = *(uint **)(unaff_EBP + 0xc);
          }
          *(uint *)(unaff_EBP + 0x10) = *puVar11;
          puVar11 = (uint *)(*(int *)(iVar4 + **(int **)(unaff_EBP + -0x18) + 4) + 0xc);
          *(uint **)(unaff_EBP + 0xc) = puVar11;
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
          }
          *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
          uVar6 = FUN_0040e53d();
          *(undefined4 *)(unaff_EBP + -0xd8) = uVar6;
          *(uint *)(unaff_EBP + -0xd4) = unaff_ESI;
          uVar6 = __ftol();
          iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x4c))
                            (*(int **)(unaff_EBP + 0xc),uVar6);
          if (iVar7 < (int)unaff_ESI) {
            FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
          }
          puVar11 = (uint *)(*(int *)(iVar4 + 4 + **(int **)(unaff_EBP + -0x18)) + 0x10);
          *(uint **)(unaff_EBP + 0xc) = puVar11;
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
            puVar11 = *(uint **)(unaff_EBP + 0xc);
          }
          *(uint *)(unaff_EBP + 0x10) = *puVar11;
          puVar11 = (uint *)(*(int *)(iVar4 + **(int **)(unaff_EBP + -0x18) + 4) + 0x10);
          *(uint **)(unaff_EBP + 0xc) = puVar11;
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
          }
          *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
          uVar6 = FUN_0040e48b();
          *(undefined4 *)(unaff_EBP + -0x78) = uVar6;
          *(uint *)(unaff_EBP + -0x74) = unaff_ESI;
          uVar6 = __ftol();
          iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x44))
                            (*(int **)(unaff_EBP + 0xc),uVar6);
          if (iVar7 < (int)unaff_ESI) {
            FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
          }
          puVar11 = (uint *)(*(int *)(iVar4 + 4 + **(int **)(unaff_EBP + -0x18)) + 0x10);
          *(uint **)(unaff_EBP + 0xc) = puVar11;
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
            puVar11 = *(uint **)(unaff_EBP + 0xc);
          }
          *(uint *)(unaff_EBP + 0xc) = *puVar11;
          iVar4 = *(int *)(iVar4 + **(int **)(unaff_EBP + -0x18) + 4);
          if (*(uint *)(iVar4 + 0x10) == unaff_ESI) {
            FUN_00878dfb(0x80004003);
          }
          piVar10 = *(int **)(iVar4 + 0x10);
          uVar6 = FUN_0040e53d();
          *(undefined4 *)(unaff_EBP + -0x34) = uVar6;
          *(uint *)(unaff_EBP + -0x30) = unaff_ESI;
          uVar6 = __ftol();
          iVar4 = (**(code **)(*piVar10 + 0x4c))(piVar10,uVar6);
          if (iVar4 < (int)unaff_ESI) {
            FUN_00878e09(iVar4,piVar10,&DAT_00963cc8);
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
        if (*(uint *)(*(int *)(unaff_EBP + -0x14) + 0xcd0) == unaff_ESI) {
          FUN_00878dfb(0x80004003);
        }
        FUN_004250ac(unaff_EBP + -0x170,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x150,
                     unaff_EBP + -0x110,unaff_EBP + -0x130,unaff_EBP + -0x160,unaff_EBP + -0x120);
        iVar4 = FUN_00402bc3(unaff_EBP + -0x170);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x150);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x110);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x130);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x160);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x120);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
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
        if (*(uint *)(*(int *)(unaff_EBP + -0x14) + 0xccc) == unaff_ESI) {
          FUN_00878dfb(0x80004003);
        }
        FUN_004250ac(unaff_EBP + -0x180,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0xf0,
                     unaff_EBP + -0x140,unaff_EBP + -0x100,unaff_EBP + -0x70,unaff_EBP + -0x5c);
        iVar4 = FUN_00402bc3(unaff_EBP + -0x180);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        iVar4 = FUN_00402bc3(unaff_EBP + -0xf0);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x140);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x100);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x70);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x5c);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
        unaff_EDI = *(int *)(unaff_EBP + -0x14);
      } while (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + -0x1c));
    }
    *(uint *)(unaff_EBP + 8) = unaff_ESI;
    while ((uVar8 = **(uint **)(unaff_EBP + -0x10), uVar8 != unaff_ESI &&
           (*(uint *)(unaff_EBP + 8) < *(uint *)(uVar8 - 4)))) {
      if (*(int *)(unaff_EDI + 0xcf0) != 100) {
        if (*(uint *)(unaff_EBP + 8) == unaff_ESI) {
          iVar4 = *(int *)(uVar8 + 4);
          if (*(uint *)(iVar4 + 0xc) == unaff_ESI) {
            FUN_00878dfb(0x80004003);
          }
          *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(iVar4 + 0xc);
          iVar4 = *(int *)(**(int **)(unaff_EBP + -0x10) + 4);
          if (*(uint *)(iVar4 + 0xc) == unaff_ESI) {
            FUN_00878dfb(0x80004003);
          }
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar4 + 0xc);
          iVar4 = *(int *)(unaff_EBP + -0x14);
          if (*(uint *)(iVar4 + 0xcc4) == unaff_ESI) {
            FUN_00878dfb(0x80004003);
          }
          piVar10 = *(int **)(iVar4 + 0xcc4);
          *(double *)(unaff_EBP + -0x2c) = 1.0 - *(double *)(unaff_EBP + -0x44);
          uVar6 = FUN_0040e53d();
          *(undefined4 *)(unaff_EBP + -0x34) = uVar6;
          *(uint *)(unaff_EBP + -0x30) = unaff_ESI;
          uVar6 = __ftol();
          *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
          uVar6 = FUN_0040e48b();
          *(undefined4 *)(unaff_EBP + -0x78) = uVar6;
          *(uint *)(unaff_EBP + -0x74) = unaff_ESI;
          uVar6 = __ftol();
          iVar4 = (**(code **)(*piVar10 + 0x44))(piVar10,uVar6,*(undefined4 *)(unaff_EBP + 0xc));
          if (iVar4 < (int)unaff_ESI) {
            FUN_00878e09(iVar4,piVar10,&DAT_00963d08);
          }
          puVar11 = (uint *)(*(int *)(**(int **)(unaff_EBP + -0x10) + 4) + 0x10);
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
          }
          *(uint *)(unaff_EBP + 0xc) = *puVar11;
          iVar4 = *(int *)(**(int **)(unaff_EBP + -0x10) + 4);
          if (*(uint *)(iVar4 + 0x10) == unaff_ESI) {
            FUN_00878dfb(0x80004003);
          }
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar4 + 0x10);
          iVar4 = *(int *)(unaff_EBP + -0x14);
          if (*(uint *)(iVar4 + 0xcc0) == unaff_ESI) {
            FUN_00878dfb(0x80004003);
          }
          piVar10 = *(int **)(iVar4 + 0xcc0);
          uVar6 = FUN_0040e53d();
          *(undefined4 *)(unaff_EBP + -0xd8) = uVar6;
          *(uint *)(unaff_EBP + -0xd4) = unaff_ESI;
          uVar6 = __ftol();
          *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
          uVar6 = FUN_0040e48b();
          *(undefined4 *)(unaff_EBP + -0xb4) = uVar6;
          *(uint *)(unaff_EBP + -0xb0) = unaff_ESI;
          uVar6 = __ftol();
          iVar4 = (**(code **)(*piVar10 + 0x44))(piVar10,uVar6,*(undefined4 *)(unaff_EBP + 0xc));
          if (iVar4 < (int)unaff_ESI) {
            FUN_00878e09(iVar4,piVar10,&DAT_00963d08);
          }
        }
        iVar4 = *(int *)(unaff_EBP + 8) * 8;
        puVar11 = (uint *)(*(int *)(iVar4 + 4 + **(int **)(unaff_EBP + -0x10)) + 0xc);
        *(uint **)(unaff_EBP + 0xc) = puVar11;
        if (*puVar11 == unaff_ESI) {
          FUN_00878dfb(0x80004003);
          puVar11 = *(uint **)(unaff_EBP + 0xc);
        }
        *(uint *)(unaff_EBP + 0x10) = *puVar11;
        puVar11 = (uint *)(*(int *)(iVar4 + **(int **)(unaff_EBP + -0x10) + 4) + 0xc);
        *(uint **)(unaff_EBP + 0xc) = puVar11;
        if (*puVar11 == unaff_ESI) {
          FUN_00878dfb(0x80004003);
        }
        *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
        uVar6 = FUN_0040e48b();
        *(undefined4 *)(unaff_EBP + -200) = uVar6;
        *(uint *)(unaff_EBP + -0xc4) = unaff_ESI;
        uVar6 = __ftol();
        iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x44))(*(int **)(unaff_EBP + 0xc),uVar6);
        if (iVar7 < (int)unaff_ESI) {
          FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
        }
        puVar11 = (uint *)(*(int *)(iVar4 + 4 + **(int **)(unaff_EBP + -0x10)) + 0xc);
        *(uint **)(unaff_EBP + 0xc) = puVar11;
        if (*puVar11 == unaff_ESI) {
          FUN_00878dfb(0x80004003);
          puVar11 = *(uint **)(unaff_EBP + 0xc);
        }
        *(uint *)(unaff_EBP + 0x10) = *puVar11;
        puVar11 = (uint *)(*(int *)(iVar4 + **(int **)(unaff_EBP + -0x10) + 4) + 0xc);
        *(uint **)(unaff_EBP + 0xc) = puVar11;
        if (*puVar11 == unaff_ESI) {
          FUN_00878dfb(0x80004003);
        }
        *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
        uVar6 = FUN_0040e53d();
        *(undefined4 *)(unaff_EBP + -0x98) = uVar6;
        *(uint *)(unaff_EBP + -0x94) = unaff_ESI;
        uVar6 = __ftol();
        iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x4c))(*(int **)(unaff_EBP + 0xc),uVar6);
        if (iVar7 < (int)unaff_ESI) {
          FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
        }
        puVar11 = (uint *)(*(int *)(iVar4 + 4 + **(int **)(unaff_EBP + -0x10)) + 0x10);
        *(uint **)(unaff_EBP + 0xc) = puVar11;
        if (*puVar11 == unaff_ESI) {
          FUN_00878dfb(0x80004003);
          puVar11 = *(uint **)(unaff_EBP + 0xc);
        }
        *(uint *)(unaff_EBP + 0x10) = *puVar11;
        puVar11 = (uint *)(*(int *)(iVar4 + **(int **)(unaff_EBP + -0x10) + 4) + 0x10);
        *(uint **)(unaff_EBP + 0xc) = puVar11;
        if (*puVar11 == unaff_ESI) {
          FUN_00878dfb(0x80004003);
        }
        *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
        uVar6 = FUN_0040e48b();
        *(undefined4 *)(unaff_EBP + -0xa0) = uVar6;
        *(uint *)(unaff_EBP + -0x9c) = unaff_ESI;
        uVar6 = __ftol();
        iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x44))(*(int **)(unaff_EBP + 0xc),uVar6);
        if (iVar7 < (int)unaff_ESI) {
          FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
        }
        puVar11 = (uint *)(*(int *)(iVar4 + 4 + **(int **)(unaff_EBP + -0x10)) + 0x10);
        *(uint **)(unaff_EBP + 0xc) = puVar11;
        if (*puVar11 == unaff_ESI) {
          FUN_00878dfb(0x80004003);
          puVar11 = *(uint **)(unaff_EBP + 0xc);
        }
        *(uint *)(unaff_EBP + 0xc) = *puVar11;
        iVar4 = *(int *)(iVar4 + **(int **)(unaff_EBP + -0x10) + 4);
        if (*(uint *)(iVar4 + 0x10) == unaff_ESI) {
          FUN_00878dfb(0x80004003);
        }
        piVar10 = *(int **)(iVar4 + 0x10);
        uVar6 = FUN_0040e53d();
        *(undefined4 *)(unaff_EBP + -0xa8) = uVar6;
        *(uint *)(unaff_EBP + -0xa4) = unaff_ESI;
        uVar6 = __ftol();
        iVar4 = (**(code **)(*piVar10 + 0x4c))(piVar10,uVar6);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878e09(iVar4,piVar10,&DAT_00963cc8);
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
      if (*(uint *)(*(int *)(unaff_EBP + -0x14) + 0xcc4) == unaff_ESI) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x180,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x5c,
                   unaff_EBP + -0x70,unaff_EBP + -0x100,unaff_EBP + -0x140,unaff_EBP + -0xf0);
      iVar4 = FUN_00402bc3(unaff_EBP + -0x180);
      if (iVar4 < (int)unaff_ESI) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x5c);
      if (iVar4 < (int)unaff_ESI) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x70);
      if (iVar4 < (int)unaff_ESI) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x100);
      if (iVar4 < (int)unaff_ESI) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x140);
      if (iVar4 < (int)unaff_ESI) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_00402bc3(unaff_EBP + -0xf0);
      if (iVar4 < (int)unaff_ESI) {
        FUN_00878dfb(iVar4);
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
      if (*(uint *)(*(int *)(unaff_EBP + -0x14) + 0xcc0) == unaff_ESI) {
        FUN_00878dfb(0x80004003);
      }
      FUN_004250ac(unaff_EBP + -0x170,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x120,
                   unaff_EBP + -0x160,unaff_EBP + -0x130,unaff_EBP + -0x110,unaff_EBP + -0x150);
      iVar4 = FUN_00402bc3(unaff_EBP + -0x170);
      if (iVar4 < (int)unaff_ESI) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x120);
      if (iVar4 < (int)unaff_ESI) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x160);
      if (iVar4 < (int)unaff_ESI) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x130);
      if (iVar4 < (int)unaff_ESI) {
        FUN_00878dfb(iVar4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x110);
      if (iVar4 < (int)unaff_ESI) {
        FUN_00878dfb(iVar4);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iVar4 = FUN_00402bc3(unaff_EBP + -0x150);
      if (iVar4 < (int)unaff_ESI) {
        FUN_00878dfb(iVar4);
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
      unaff_EDI = *(int *)(unaff_EBP + -0x14);
    }
    uVar8 = *(uint *)(unaff_EDI + 0xcd0);
    *(uint *)(unaff_EBP + 8) = (-(uint)(*(int *)(unaff_EDI + 0x480) != 0) & 0x1000000) - 1;
    *(int *)(unaff_EBP + 0xc) = unaff_EDI + 0xcd0;
    if (uVar8 == unaff_ESI) {
      FUN_00878dfb(0x80004003);
    }
    piVar10 = (int *)**(undefined4 **)(unaff_EBP + 0xc);
    *(int **)(unaff_EBP + 0xc) = piVar10;
    iVar4 = (**(code **)(*piVar10 + 0xe0))(piVar10,*(undefined4 *)(unaff_EBP + 8));
    if (iVar4 < (int)unaff_ESI) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963df8);
    }
    if (*(uint *)(unaff_EDI + 0xccc) == unaff_ESI) {
      FUN_00878dfb(0x80004003);
    }
    piVar10 = *(int **)(unaff_EDI + 0xccc);
    iVar4 = (**(code **)(*piVar10 + 0xe0))(piVar10,*(undefined4 *)(unaff_EBP + 8));
    if (iVar4 < (int)unaff_ESI) {
      FUN_00878e09(iVar4,piVar10,&DAT_00963df8);
    }
    iVar4 = *(int *)(unaff_EBP + -0x14);
    *(undefined4 *)(iVar4 + 0x498) = 0;
    iVar7 = *(int *)(**(int **)(unaff_EBP + -0x10) + 4);
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar7 + 0x14);
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar7 + 0x18);
    iVar7 = *(int *)(**(int **)(unaff_EBP + -0x10) + 4);
    iVar12 = *(int *)(**(int **)(unaff_EBP + -0x18) + 4 + **(int **)(unaff_EBP + -0x84) * 8);
    *(int *)(unaff_EBP + -0x44) = *(int *)(iVar12 + 0x28) - *(int *)(iVar7 + 0x1c);
    *(int *)(unaff_EBP + -0x40) = *(int *)(iVar12 + 0x2c) - *(int *)(iVar7 + 0x20);
    *(undefined4 *)(iVar4 + 0x488) = *(undefined4 *)(iVar12 + 0x14);
    *(undefined4 *)(iVar4 + 0x48c) = *(undefined4 *)(iVar12 + 0x18);
    *(undefined4 *)(iVar4 + 0x490) = *(undefined4 *)(iVar12 + 0x1c);
    *(undefined4 *)(iVar4 + 0x494) = *(undefined4 *)(iVar12 + 0x20);
  }
  else {
    if (**(uint **)(unaff_EBP + 8) == unaff_ESI) {
      FUN_00878dfb(0x80004003);
    }
    uVar8 = FUN_0042503d();
    if ((uVar8 & 0xff000000) != 0) {
      puVar11 = *(uint **)(unaff_EBP + 8);
      if (*puVar11 == unaff_ESI) {
        FUN_00878dfb(0x80004003);
      }
      piVar10 = (int *)*puVar11;
      iVar4 = (**(code **)(*piVar10 + 0xe0))(piVar10,0xffffff);
      if (iVar4 < (int)unaff_ESI) {
        FUN_00878e09(iVar4,piVar10,&DAT_00963df8);
      }
      puVar11 = *(uint **)(unaff_EBP + 0xc);
      if (*puVar11 == unaff_ESI) {
        FUN_00878dfb(0x80004003);
      }
      piVar10 = (int *)*puVar11;
      iVar4 = (**(code **)(*piVar10 + 0xe0))(piVar10,0xffffff);
      if (iVar4 < (int)unaff_ESI) {
        FUN_00878e09(iVar4,piVar10,&DAT_00963df8);
      }
    }
    *(uint *)(unaff_EBP + 8) = unaff_ESI;
    if ((int)unaff_ESI < *(int *)(unaff_EBP + -0x1c)) {
      do {
        if (*(int *)(*(int *)(unaff_EBP + -0x14) + 0xcf0) != 100) {
          if (*(uint *)(unaff_EBP + 8) == unaff_ESI) {
            puVar11 = (uint *)(*(int *)(**(int **)(unaff_EBP + -0x10) + 4) + 0xc);
            if (*puVar11 == unaff_ESI) {
              FUN_00878dfb(0x80004003);
            }
            *(uint *)(unaff_EBP + 0xc) = *puVar11;
            iVar4 = *(int *)(**(int **)(unaff_EBP + -0x10) + 4);
            if (*(uint *)(iVar4 + 0xc) == unaff_ESI) {
              FUN_00878dfb(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar4 + 0xc);
            iVar4 = *(int *)(unaff_EBP + -0x14);
            if (*(uint *)(iVar4 + 0xcc4) == unaff_ESI) {
              FUN_00878dfb(0x80004003);
            }
            piVar10 = *(int **)(iVar4 + 0xcc4);
            *(double *)(unaff_EBP + -0x2c) = 1.0 - *(double *)(unaff_EBP + -0x44);
            uVar6 = FUN_0040e53d();
            *(undefined4 *)(unaff_EBP + -0x34) = uVar6;
            *(uint *)(unaff_EBP + -0x30) = unaff_ESI;
            uVar6 = __ftol();
            *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
            uVar6 = FUN_0040e48b();
            *(undefined4 *)(unaff_EBP + -0x78) = uVar6;
            *(uint *)(unaff_EBP + -0x74) = unaff_ESI;
            uVar6 = __ftol();
            iVar4 = (**(code **)(*piVar10 + 0x44))(piVar10,uVar6,*(undefined4 *)(unaff_EBP + 0xc));
            if (iVar4 < (int)unaff_ESI) {
              FUN_00878e09(iVar4,piVar10,&DAT_00963d08);
            }
            puVar11 = (uint *)(*(int *)(**(int **)(unaff_EBP + -0x10) + 4) + 0x10);
            if (*puVar11 == unaff_ESI) {
              FUN_00878dfb(0x80004003);
            }
            *(uint *)(unaff_EBP + 0xc) = *puVar11;
            iVar4 = *(int *)(**(int **)(unaff_EBP + -0x10) + 4);
            if (*(uint *)(iVar4 + 0x10) == unaff_ESI) {
              FUN_00878dfb(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(iVar4 + 0x10);
            iVar4 = *(int *)(unaff_EBP + -0x14);
            if (*(uint *)(iVar4 + 0xcc0) == unaff_ESI) {
              FUN_00878dfb(0x80004003);
            }
            piVar10 = *(int **)(iVar4 + 0xcc0);
            uVar6 = FUN_0040e53d();
            *(undefined4 *)(unaff_EBP + -0xd8) = uVar6;
            *(uint *)(unaff_EBP + -0xd4) = unaff_ESI;
            uVar6 = __ftol();
            *(undefined4 *)(unaff_EBP + 0xc) = uVar6;
            uVar6 = FUN_0040e48b();
            *(undefined4 *)(unaff_EBP + -0xb4) = uVar6;
            *(uint *)(unaff_EBP + -0xb0) = unaff_ESI;
            uVar6 = __ftol();
            iVar4 = (**(code **)(*piVar10 + 0x44))(piVar10,uVar6,*(undefined4 *)(unaff_EBP + 0xc));
            if (iVar4 < (int)unaff_ESI) {
              FUN_00878e09(iVar4,piVar10,&DAT_00963d08);
            }
          }
          iVar4 = *(int *)(unaff_EBP + 8) * 8;
          puVar11 = (uint *)(*(int *)(iVar4 + 4 + **(int **)(unaff_EBP + -0x10)) + 0xc);
          *(uint **)(unaff_EBP + 0xc) = puVar11;
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
            puVar11 = *(uint **)(unaff_EBP + 0xc);
          }
          *(uint *)(unaff_EBP + 0x10) = *puVar11;
          puVar11 = (uint *)(*(int *)(iVar4 + **(int **)(unaff_EBP + -0x10) + 4) + 0xc);
          *(uint **)(unaff_EBP + 0xc) = puVar11;
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
          }
          *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
          uVar6 = FUN_0040e48b();
          *(undefined4 *)(unaff_EBP + -200) = uVar6;
          *(uint *)(unaff_EBP + -0xc4) = unaff_ESI;
          uVar6 = __ftol();
          iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x44))
                            (*(int **)(unaff_EBP + 0xc),uVar6);
          if (iVar7 < (int)unaff_ESI) {
            FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
          }
          puVar11 = (uint *)(*(int *)(iVar4 + 4 + **(int **)(unaff_EBP + -0x10)) + 0xc);
          *(uint **)(unaff_EBP + 0xc) = puVar11;
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
            puVar11 = *(uint **)(unaff_EBP + 0xc);
          }
          *(uint *)(unaff_EBP + 0x10) = *puVar11;
          puVar11 = (uint *)(*(int *)(iVar4 + **(int **)(unaff_EBP + -0x10) + 4) + 0xc);
          *(uint **)(unaff_EBP + 0xc) = puVar11;
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
          }
          *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
          uVar6 = FUN_0040e53d();
          *(undefined4 *)(unaff_EBP + -0x98) = uVar6;
          *(uint *)(unaff_EBP + -0x94) = unaff_ESI;
          uVar6 = __ftol();
          iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x4c))
                            (*(int **)(unaff_EBP + 0xc),uVar6);
          if (iVar7 < (int)unaff_ESI) {
            FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
          }
          puVar11 = (uint *)(*(int *)(iVar4 + 4 + **(int **)(unaff_EBP + -0x10)) + 0x10);
          *(uint **)(unaff_EBP + 0xc) = puVar11;
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
            puVar11 = *(uint **)(unaff_EBP + 0xc);
          }
          *(uint *)(unaff_EBP + 0x10) = *puVar11;
          puVar11 = (uint *)(*(int *)(iVar4 + **(int **)(unaff_EBP + -0x10) + 4) + 0x10);
          *(uint **)(unaff_EBP + 0xc) = puVar11;
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
          }
          *(undefined4 *)(unaff_EBP + 0xc) = **(undefined4 **)(unaff_EBP + 0xc);
          uVar6 = FUN_0040e48b();
          *(undefined4 *)(unaff_EBP + -0xa0) = uVar6;
          *(uint *)(unaff_EBP + -0x9c) = unaff_ESI;
          uVar6 = __ftol();
          iVar7 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x44))
                            (*(int **)(unaff_EBP + 0xc),uVar6);
          if (iVar7 < (int)unaff_ESI) {
            FUN_00878e09(iVar7,*(undefined4 *)(unaff_EBP + 0xc),&DAT_00963cc8);
          }
          puVar11 = (uint *)(*(int *)(iVar4 + 4 + **(int **)(unaff_EBP + -0x10)) + 0x10);
          *(uint **)(unaff_EBP + 0xc) = puVar11;
          if (*puVar11 == unaff_ESI) {
            FUN_00878dfb(0x80004003);
            puVar11 = *(uint **)(unaff_EBP + 0xc);
          }
          *(uint *)(unaff_EBP + 0xc) = *puVar11;
          iVar4 = *(int *)(iVar4 + **(int **)(unaff_EBP + -0x10) + 4);
          if (*(uint *)(iVar4 + 0x10) == unaff_ESI) {
            FUN_00878dfb(0x80004003);
          }
          piVar10 = *(int **)(iVar4 + 0x10);
          uVar6 = FUN_0040e53d();
          *(undefined4 *)(unaff_EBP + -0xa8) = uVar6;
          *(uint *)(unaff_EBP + -0xa4) = unaff_ESI;
          uVar6 = __ftol();
          iVar4 = (**(code **)(*piVar10 + 0x4c))(piVar10,uVar6);
          if (iVar4 < (int)unaff_ESI) {
            FUN_00878e09(iVar4,piVar10,&DAT_00963cc8);
          }
        }
        FUN_00403191(&DAT_00980690);
        puVar9 = (undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xcf0);
        uVar6 = *puVar9;
        *(undefined4 *)(unaff_EBP + -4) = 0x28;
        FUN_004031b7(uVar6,3);
        uVar6 = *puVar9;
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        FUN_004031b7(uVar6,3);
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x2c;
        *(undefined4 *)(unaff_EBP + 0xc) =
             *(undefined4 *)
              (*(int *)(**(int **)(unaff_EBP + -0x10) + 4 + *(int *)(unaff_EBP + 8) * 8) + 0xc);
        if (*(uint *)(*(int *)(unaff_EBP + -0x14) + 0xcc4) == unaff_ESI) {
          FUN_00878dfb(0x80004003);
        }
        FUN_004250ac(unaff_EBP + -0x180,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x5c,
                     unaff_EBP + -0x70,unaff_EBP + -0x100,unaff_EBP + -0x140,unaff_EBP + -0xf0);
        iVar4 = FUN_00402bc3(unaff_EBP + -0x180);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2b;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x5c);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x70);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x29;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x100);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x140);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3(unaff_EBP + -0xf0);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        FUN_00403191(&DAT_00980690);
        uVar6 = *puVar9;
        *(undefined4 *)(unaff_EBP + -4) = 0x2d;
        FUN_004031b7(uVar6,3);
        uVar6 = *puVar9;
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        FUN_004031b7(uVar6,3);
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        FUN_00403191(&DAT_00980690);
        *(undefined1 *)(unaff_EBP + -4) = 0x31;
        *(undefined4 *)(unaff_EBP + 0xc) =
             *(undefined4 *)
              (*(int *)(**(int **)(unaff_EBP + -0x10) + 4 + *(int *)(unaff_EBP + 8) * 8) + 0x10);
        if (*(uint *)(*(int *)(unaff_EBP + -0x14) + 0xcc0) == unaff_ESI) {
          FUN_00878dfb(0x80004003);
        }
        FUN_004250ac(unaff_EBP + -0x170,*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x120,
                     unaff_EBP + -0x160,unaff_EBP + -0x130,unaff_EBP + -0x110,unaff_EBP + -0x150);
        iVar4 = FUN_00402bc3(unaff_EBP + -0x170);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x30;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x120);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x160);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2e;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x130);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x2d;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x110);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iVar4 = FUN_00402bc3(unaff_EBP + -0x150);
        if (iVar4 < (int)unaff_ESI) {
          FUN_00878dfb(iVar4);
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
      } while (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + -0x1c));
    }
    piVar10 = *(int **)(unaff_EBP + -0x10);
    *(uint *)(*(int *)(unaff_EBP + -0x14) + 0x498) = unaff_ESI;
    iVar7 = *(int *)(*piVar10 + 4);
    *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar7 + 0x14);
    iVar4 = *(int *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(iVar7 + 0x18);
    iVar7 = *(int *)(*piVar10 + 4);
    *(undefined4 *)(unaff_EBP + -0x88) = *(undefined4 *)(iVar7 + 0x24);
    *(undefined4 *)(unaff_EBP + -0x84) = *(undefined4 *)(iVar7 + 0x28);
    *(uint *)(unaff_EBP + -0x40) = unaff_ESI;
    *(uint *)(unaff_EBP + -0x44) = unaff_ESI;
  }
  if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x60) + 0x14) + 0xc) == 0) {
    puVar9 = &DAT_0097bb30;
  }
  else {
    if (*(int *)(iVar4 + 0xcc4) == 0) {
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
  iVar4 = *piVar10;
  *(undefined4 *)(unaff_EBP + -4) = 0x34;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar10 = (int *)*piVar10;
  *(int **)(unaff_EBP + 8) = piVar10;
  iVar4 = (**(code **)(*piVar10 + 100))(piVar10,*puVar9,puVar9[1],puVar9[2],puVar9[3]);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined4 *)(unaff_EBP + -4) = 0x32;
  if ((*(byte *)(unaff_EBP + -0x24) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) & 0xfffffffd;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
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
  iVar4 = *piVar10;
  *(undefined1 *)(unaff_EBP + -4) = 0x37;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar10 = (int *)*piVar10;
  *(int **)(unaff_EBP + 8) = piVar10;
  iVar4 = (**(code **)(*piVar10 + 0x90))
                    (piVar10,0,0,*(undefined4 *)(unaff_EBP + -0x5c),
                     *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                     *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x70),
                     *(undefined4 *)(unaff_EBP + -0x6c),*(undefined4 *)(unaff_EBP + -0x68),
                     *(undefined4 *)(unaff_EBP + -100));
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
  }
  FUN_004125d9();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x5c);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x70);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  if ((((*(int *)(unaff_EBP + -0xc0) == 0) && (iVar4 = *(int *)(unaff_EBP + -0x20), iVar4 != 0x24))
      && (iVar4 != 0x25)) &&
     (((iVar4 != 0x69 && (iVar4 != 0x68)) && ((iVar4 != 0x2d && (iVar4 != 0x2e)))))) {
    iVar4 = *(int *)(unaff_EBP + -0x14);
    if (*(int *)(iVar4 + 0xcc4) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar10 = *(int **)(iVar4 + 0xcc4);
    iVar7 = (**(code **)(*piVar10 + 0xd8))(piVar10,1);
    if (iVar7 < 0) {
      FUN_00878e09(iVar7,piVar10,&DAT_00963df8);
    }
    if (*(int *)(iVar4 + 0xcc0) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar7 = (**(code **)(**(int **)(iVar4 + 0xcc0) + 0xd8))(*(int **)(iVar4 + 0xcc0),1);
    if (iVar7 < 0) {
      FUN_00878e09();
    }
    if (*(int *)(iVar4 + 0xcbc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar10 = *(int **)(iVar4 + 0xcbc);
    iVar7 = (**(code **)(*piVar10 + 0xd8))(piVar10,1);
    if (iVar7 < 0) {
      FUN_00878e09(iVar7,piVar10,&DAT_00963df8);
    }
    if (*(int *)(iVar4 + 0xcd0) == 0) {
      FUN_00878dfb();
    }
    FUN_00444de1();
    FUN_00424e27();
    FUN_00444de1();
    FUN_00424aee();
    *(undefined4 *)(unaff_EBP + -4) = 0x3c;
    FUN_00424aee();
    uVar14 = CONCAT44(unaff_EBP + -0x70,unaff_EBP + -0x5c);
    uVar6 = *(undefined4 *)(unaff_EBP + -0x28);
    iVar7 = -*(int *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    FUN_00424df4(iVar7,uVar6,unaff_EBP + -0x5c,unaff_EBP + -0x70);
    FUN_00424f2f(iVar7,uVar6,uVar14);
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
    uVar14 = CONCAT44(unaff_EBP + -0x70,unaff_EBP + -0x5c);
    uVar6 = *(undefined4 *)(unaff_EBP + -0x40);
    iVar12 = -*(int *)(unaff_EBP + -0x44);
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    iVar7 = iVar12;
    FUN_00424df4(iVar12,uVar6,unaff_EBP + -0x5c,unaff_EBP + -0x70);
    FUN_00424f2f(iVar7,uVar6,uVar14);
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
    uVar6 = *(undefined4 *)(unaff_EBP + -0x40);
    *(int *)(iVar4 + 0x49c) = iVar12;
    piVar10 = (int *)(iVar4 + 0xcf4);
    *(undefined4 *)(iVar4 + 0x4a0) = uVar6;
    *piVar10 = 1;
  }
  else {
    iVar4 = *(int *)(unaff_EBP + -0x14);
    if (*(int *)(iVar4 + 0xcc4) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar10 = *(int **)(iVar4 + 0xcc4);
    iVar7 = (**(code **)(*piVar10 + 0xd8))(piVar10,0);
    if (iVar7 < 0) {
      FUN_00878e09(iVar7,piVar10,&DAT_00963df8);
    }
    if (*(int *)(iVar4 + 0xcc0) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar7 = (**(code **)(**(int **)(iVar4 + 0xcc0) + 0xd8))(*(int **)(iVar4 + 0xcc0),0);
    if (iVar7 < 0) {
      FUN_00878e09();
    }
    if (*(int *)(iVar4 + 0xcbc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar10 = *(int **)(iVar4 + 0xcbc);
    iVar7 = (**(code **)(*piVar10 + 0xd8))(piVar10,0);
    if (iVar7 < 0) {
      FUN_00878e09(iVar7,piVar10,&DAT_00963df8);
    }
    if (*(int *)(iVar4 + 0xcd0) == 0) {
      FUN_00878dfb();
    }
    piVar10 = *(int **)(iVar4 + 0xcd0);
    iVar7 = (**(code **)(*piVar10 + 0xd8))(piVar10,0);
    if (iVar7 < 0) {
      FUN_00878e09(iVar7,piVar10,&DAT_00963df8);
    }
    if (*(int *)(iVar4 + 0xccc) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar10 = *(int **)(iVar4 + 0xccc);
    iVar7 = (**(code **)(*piVar10 + 0xd8))(piVar10,0);
    if (iVar7 < 0) {
      FUN_00878e09(iVar7,piVar10,&DAT_00963df8);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0x38;
    FUN_00403191(&DAT_00980690);
    *(undefined1 *)(unaff_EBP + -4) = 0x39;
    if (*(int *)(iVar4 + 0xcb0) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar10 = *(int **)(iVar4 + 0xcb0);
    *(int **)(unaff_EBP + 8) = piVar10;
    iVar4 = (**(code **)(*piVar10 + 0x90))
                      (piVar10,*(undefined4 *)(unaff_EBP + -0x2c),*(undefined4 *)(unaff_EBP + -0x28)
                       ,*(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c),
                       *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x5c);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x70);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
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
    iVar4 = (**(code **)(*piVar10 + 0x90))
                      (piVar10,*(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(unaff_EBP + -0x40)
                       ,*(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                       *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50),
                       *(undefined4 *)(unaff_EBP + -0x70),*(undefined4 *)(unaff_EBP + -0x6c),
                       *(undefined4 *)(unaff_EBP + -0x68),*(undefined4 *)(unaff_EBP + -100));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 8),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3a;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      FUN_00878dfb();
    }
    iVar4 = *(int *)(unaff_EBP + -0x14);
    uVar6 = *(undefined4 *)(unaff_EBP + -0x44);
    *(undefined4 *)(iVar4 + 0xcf4) = 0;
    *(undefined4 *)(iVar4 + 0x49c) = uVar6;
    piVar10 = (int *)(iVar4 + 0xcf4);
    *(undefined4 *)(iVar4 + 0x4a0) = *(undefined4 *)(unaff_EBP + -0x40);
  }
  iVar4 = *(int *)(iVar4 + 0x484) / 10000;
  if (((iVar4 != 0xbe) && (iVar4 != 0xc1)) && (cVar3 = FUN_00433bfa(), cVar3 == '\0')) {
    FUN_00424e27();
    FUN_00444de1();
  }
  FUN_00424aee();
  *(undefined4 *)(unaff_EBP + -4) = 0x40;
  FUN_00424aee();
  iVar4 = *piVar10;
  iVar7 = *(int *)(unaff_EBP + -0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  if (iVar4 != 0) {
    iVar7 = -iVar7;
  }
  uVar14 = CONCAT44(unaff_EBP + -0x70,unaff_EBP + -0x5c);
  uVar6 = *(undefined4 *)(unaff_EBP + -0x84);
  FUN_00424df4(iVar7,uVar6,unaff_EBP + -0x5c,unaff_EBP + -0x70);
  FUN_00424f2f(iVar7,uVar6,uVar14);
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  FUN_00424aee();
  *(undefined4 *)(unaff_EBP + -4) = 0x42;
  FUN_00424aee();
  uVar14 = CONCAT44(unaff_EBP + -0x90,unaff_EBP + -0x4c);
  uVar13 = 0;
  uVar6 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  FUN_00424df4(0,0,unaff_EBP + -0x4c,unaff_EBP + -0x90);
  FUN_00424f2f(uVar6,uVar13,uVar14);
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    FUN_00878dfb();
  }
  uVar14 = 0;
  FUN_00424df4(0);
  FUN_00444db8(uVar14);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


