/* ptr_005cbce8 - 0x005cbce8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall ptr_005cbce8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int unaff_EBX;
  int unaff_EBP;
  undefined2 uVar15;
  int unaff_ESI;
  int *unaff_EDI;
  bool bVar16;
  
  do {
    if (*(int *)(unaff_ESI + 0xc) == 1) {
      if (unaff_EBX <= *(int *)(unaff_EBP + 8)) {
        if (*(int *)(unaff_EBP + 8) < 2) {
          if (*(int *)(unaff_EBP + -0x24) == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = FUN_00653bf4(*(undefined4 *)(*(int *)(unaff_EBP + -0x24) + 0xa0));
          }
          *(uint *)(unaff_EBP + -0xc0 + *(int *)(unaff_EBP + -0x14) * 4) =
               *(int *)(*(int *)(unaff_EBP + -0x58) + 0xd78) << 2 | uVar13;
        }
        else if (*(int *)(unaff_EBP + 8) == 2) {
          iVar11 = FUN_004b8c9b(*(int *)(unaff_EBP + -0x20) + 0x150,
                                *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x158));
          *(uint *)(unaff_EBP + -0xc0 + *(int *)(unaff_EBP + -0x14) * 4) = iVar11 << 2 | 3;
        }
      }
    }
    else if (*(int *)(unaff_ESI + 0xc) == 2) {
      iVar11 = *(int *)(unaff_ESI + 0x28);
      if (param_2 == unaff_EBX) {
        iVar11 = -iVar11;
      }
      *(int *)(unaff_EBP + -0x10) = iVar11;
      piVar6 = (int *)(**(code **)(*unaff_EDI + 0x10))();
      iVar11 = *piVar6;
      iVar3 = *(int *)(unaff_EBP + -0x10);
      iVar12 = (**(code **)(*unaff_EDI + 0x10))();
      iVar12 = *(int *)(iVar12 + 4) + *(int *)(unaff_ESI + 0x2c);
      *(int *)(unaff_EBP + -0x60) = iVar11 + iVar3;
      if (*(int *)(unaff_EBP + -0x54) == 0) {
        iVar3 = (*(int *)(unaff_EBP + -0x2c) + *(int *)(unaff_EBP + -0x34)) / 2;
        iVar14 = *(int *)(unaff_EBP + -0x34) + 10;
        bVar16 = SBORROW4(iVar14,iVar3);
        iVar11 = iVar14 - iVar3;
      }
      else {
        iVar3 = (*(int *)(unaff_EBP + -0x34) + *(int *)(unaff_EBP + -0x2c)) / 2;
        iVar14 = *(int *)(unaff_EBP + -0x2c) + -10;
        bVar16 = SBORROW4(iVar3,iVar14);
        iVar11 = iVar3 - iVar14;
      }
      uVar15 = (short)iVar14;
      if (bVar16 == iVar11 < 0) {
        uVar15 = (short)iVar3;
      }
      iVar11 = *(int *)(unaff_EBP + -0x30) + 10;
      if (iVar11 <= iVar12) {
        iVar11 = *(int *)(unaff_EBP + -0x28) + -10;
        if (iVar12 <= iVar11) {
          iVar11 = (*(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x30)) / 2;
        }
      }
      iVar3 = *(int *)(unaff_EBP + -0x14);
      *(undefined2 *)(unaff_EBP + -0xc0 + iVar3 * 4) = uVar15;
      *(short *)(unaff_EBP + -0xbe + iVar3 * 4) = (short)iVar11;
    }
    else {
      *(int *)(unaff_EBP + -0xc0 + param_1 * 4) = unaff_EBX;
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
LAB_005cb768:
    do {
      do {
        do {
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
          iVar11 = *(int *)(unaff_EBP + -0x38);
          if ((*(int *)(iVar11 + 0x274) == 0) || (iVar3 = *(int *)(iVar11 + 0x160), iVar3 == 0)) {
            iVar3 = *(int *)(iVar11 + 0x15c);
          }
          if (*(int *)(iVar3 + 0x1e8) <= *(int *)(unaff_EBP + -0x1c)) {
LAB_005cbe14:
            if (*(int *)(unaff_EBP + -0x14) == 0) {
              uVar5 = 0;
            }
            else {
              piVar6 = *(int **)(unaff_EBP + 0xc);
              if (((piVar6 != (int *)0x0) &&
                  (puVar4 = *(undefined4 **)(unaff_EBP + 0x10), puVar4 != (undefined4 *)0x0)) &&
                 (puVar2 = *(undefined4 **)(unaff_EBP + 0x14), puVar2 != (undefined4 *)0x0)) {
                uVar13 = FUN_004133f0();
                iVar11 = (uVar13 % *(uint *)(unaff_EBP + -0x14)) * 4;
                *piVar6 = *(int *)(unaff_EBP + -0x128 + iVar11) + 0xc;
                uVar5 = *(undefined4 *)(unaff_EBP + -0xc0 + iVar11);
                *puVar4 = *(undefined4 *)(unaff_EBP + -0x104 + iVar11);
                *puVar2 = uVar5;
              }
              uVar5 = 1;
            }
            ExceptionList = *(void **)(unaff_EBP + -0xc);
            return uVar5;
          }
          unaff_ESI = FUN_004e67c9(*(undefined4 *)(unaff_EBP + -0x1c));
        } while (((((*(int *)(unaff_ESI + 0x90) == 0) && (*(int *)(iVar11 + 0x148) != 0)) ||
                  (*(int *)(unaff_ESI + 0x10) != 0)) ||
                 (iVar3 = FUN_00413367(iVar11 + 0x164,*(undefined4 *)(iVar11 + 0x16c)),
                 iVar3 < *(int *)(unaff_ESI + 0x14))) ||
                ((*(int *)(unaff_EBP + 8) == 0 &&
                 ((iVar3 = FUN_0043fb93(), iVar3 != 0 ||
                  ((*(int *)(unaff_ESI + 0x1c) == 0 && (iVar3 = FUN_004bed04(), iVar3 != 0))))))));
        if ((*(int *)(iVar11 + 0x274) == 0) || (iVar3 = *(int *)(iVar11 + 0x160), iVar3 == 0)) {
          iVar3 = *(int *)(iVar11 + 0x15c);
        }
        iVar3 = FUN_004cd670(iVar3 + 0x158,*(undefined4 *)(iVar3 + 0x160));
        if (iVar3 != 0) {
          if ((*(int *)(iVar11 + 0x274) == 0) || (iVar3 = *(int *)(iVar11 + 0x160), iVar3 == 0)) {
            iVar3 = *(int *)(iVar11 + 0x15c);
          }
          if (*(int *)(unaff_EBP + -0x1c) == *(int *)(iVar3 + 0x1e8) + -1) goto LAB_005cbe14;
        }
        iVar3 = *(int *)(unaff_ESI + 0xc);
        if (iVar3 != 0) {
          if ((iVar3 == 3) || (iVar3 == 4)) {
            iVar3 = FUN_007d1e08();
            if (0x9c3 < iVar3 - *(int *)(iVar11 + 0x144)) {
              FUN_00411537(unaff_EBP + -0x74,unaff_ESI + 0x38);
              piVar6 = (int *)(*(int *)(unaff_EBP + -0x38) + 4);
              iVar11 = (**(code **)(*(int *)(*(int *)(unaff_EBP + -0x38) + 4) + 0x10))();
              *(int *)(unaff_EBP + -0x70) = *(int *)(unaff_EBP + -0x70) + *(int *)(iVar11 + 4);
              iVar11 = (**(code **)(*piVar6 + 0x10))();
              *(int *)(unaff_EBP + -0x68) = *(int *)(unaff_EBP + -0x68) + *(int *)(iVar11 + 4);
              uVar5 = (**(code **)(*piVar6 + 0x10))();
              *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
              iVar11 = FUN_005c5474();
              *(uint *)(unaff_EBP + -0x74) =
                   ((-(uint)(iVar11 != 0) & 2) - 1) * *(int *)(unaff_ESI + 0x34) *
                   *(int *)(unaff_ESI + 0x28) + **(int **)(unaff_EBP + -0x10);
              uVar5 = (**(code **)(*piVar6 + 0x10))();
              *(undefined4 *)(unaff_EBP + -0x10) = uVar5;
              iVar11 = FUN_005c5474();
              *(uint *)(unaff_EBP + -0x6c) =
                   ((-(uint)(iVar11 != 0) & 2) - 1) *
                   (*(int *)(unaff_ESI + 0x28) + *(int *)(unaff_ESI + 0x2c)) *
                   *(int *)(unaff_ESI + 0x34) + **(int **)(unaff_EBP + -0x10);
              iVar11 = (*DAT_0097b5a0)(unaff_EBP + -0x138,unaff_EBP + -0x74,unaff_EBP + -0x34);
              if (iVar11 != 0) {
                *(undefined4 *)(unaff_EBP + -0x3c) = 0;
                uVar5 = *(undefined4 *)(unaff_ESI + 0x30);
                uVar1 = *(undefined4 *)(unaff_ESI + 0x2c);
                *(undefined4 *)(unaff_EBP + -4) = 0;
                FUN_005d0ab2(unaff_EBP + -0x3c,*(undefined4 *)(unaff_ESI + 0x28),uVar1,uVar5);
                *(undefined4 *)(unaff_EBP + -0x10) = 0;
                *(undefined4 *)(unaff_EBP + -0x18) = 0;
                while ((iVar11 = *(int *)(unaff_EBP + -0x3c), iVar11 != 0 &&
                       (*(uint *)(unaff_EBP + -0x18) < *(uint *)(iVar11 + -4)))) {
                  *(uint *)(unaff_EBP + -0x78) = iVar11 + *(uint *)(unaff_EBP + -0x18) * 4;
                  uVar5 = (**(code **)(*piVar6 + 0x10))();
                  *(undefined4 *)(unaff_EBP + -0x5c) = uVar5;
                  *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_ESI + 0x34);
                  iVar8 = FUN_005c5474();
                  iVar11 = **(int **)(unaff_EBP + -0x78);
                  iVar3 = *(int *)(unaff_EBP + -100);
                  iVar12 = **(int **)(unaff_EBP + -0x5c);
                  *(undefined4 *)(unaff_EBP + -0x84) = 0;
                  *(undefined4 *)(unaff_EBP + -0x80) = 0;
                  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
                  *(undefined ***)(unaff_EBP + -0x8c) = &PTR_FUN_008e8ab0;
                  iVar14 = *(int *)(unaff_ESI + 0xc);
                  *(undefined1 *)(unaff_EBP + -4) = 1;
                  if (iVar14 == 3) {
                    *(undefined4 *)(unaff_EBP + -0x5c) = DAT_00978138;
                    iVar14 = unaff_EBP + -0x8c;
                    iVar9 = (**(code **)(*piVar6 + 0x10))(iVar14);
                    iVar9 = *(int *)(iVar9 + 4) + 100;
                    iVar10 = (**(code **)(*piVar6 + 0x10))(iVar9);
                    FUN_00861498(((-(uint)(iVar8 != 0) & 2) - 1) * (iVar11 * iVar3 + iVar3 / 2) +
                                 iVar12,*(int *)(iVar10 + 4) + -100,iVar9,iVar14);
LAB_005cbc5d:
                    if (*(int *)(unaff_EBP + -0x84) != 0) {
                      *(uint *)(unaff_EBP + -0x10) =
                           *(uint *)(unaff_EBP + -0x10) |
                           1 << ((char)*(undefined4 *)
                                        (*(int *)(unaff_EBP + -0x3c) +
                                        *(int *)(unaff_EBP + -0x18) * 4) -
                                 (char)*(undefined4 *)(unaff_ESI + 0x28) & 0x1fU);
                    }
                  }
                  else if (iVar14 == 4) {
                    iVar11 = (**(code **)(*piVar6 + 0x10))();
                    puVar4 = (undefined4 *)FUN_00518b2e();
                    *puVar4 = *(undefined4 *)(iVar11 + 4);
                    goto LAB_005cbc5d;
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0;
                  *(undefined ***)(unaff_EBP + -0x8c) = &PTR_FUN_008e8ab0;
                  FUN_00434e79();
                  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
                }
                iVar11 = *(int *)(unaff_EBP + -0x10);
                if (iVar11 != 0) {
                  iVar3 = *(int *)(unaff_EBP + -0x14) * 4;
                  *(undefined4 *)(unaff_EBP + -0x128 + iVar3) = *(undefined4 *)(unaff_EBP + -0x1c);
                  uVar5 = FUN_005c5474();
                  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
                  *(undefined4 *)(unaff_EBP + -0x104 + iVar3) = uVar5;
                  *(int *)(unaff_EBP + -0xc0 + iVar3) = iVar11;
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                FUN_00445a30();
              }
            }
          }
          else {
            piVar6 = (int *)(iVar11 + 4);
            piVar7 = (int *)(**(code **)(*(int *)(iVar11 + 4) + 0x10))();
            *(int *)(unaff_EBP + -0x50) = *piVar7 + *(int *)(unaff_ESI + 0x28);
            iVar3 = (**(code **)(*piVar6 + 0x10))();
            *(int *)(unaff_EBP + -0x4c) = *(int *)(iVar3 + 4) + *(int *)(unaff_ESI + 0x2c);
            piVar7 = (int *)(**(code **)(*piVar6 + 0x10))();
            *(int *)(unaff_EBP + -0x48) = *piVar7 - *(int *)(unaff_ESI + 0x28);
            iVar3 = (**(code **)(*piVar6 + 0x10))();
            *(int *)(unaff_EBP + -0x44) = *(int *)(iVar3 + 4) + *(int *)(unaff_ESI + 0x2c);
            if (*(int *)(unaff_EBP + -0x54) == 0) {
              iVar3 = FUN_005cbe9b(*(undefined4 *)(unaff_EBP + -0x48),
                                   *(undefined4 *)(unaff_EBP + -0x48),
                                   *(int *)(unaff_ESI + 0x30) + *(int *)(unaff_EBP + -0x48),
                                   *(undefined4 *)(unaff_EBP + -0x44),4,unaff_EBP + -0x34);
              if (iVar3 != 0) goto LAB_005cba5a;
              iVar3 = FUN_005cbe9b(*(undefined4 *)(unaff_EBP + -0x50),
                                   *(undefined4 *)(unaff_EBP + -0x50),
                                   *(int *)(unaff_EBP + -0x50) - *(int *)(unaff_ESI + 0x30),
                                   *(undefined4 *)(unaff_EBP + -0x4c),4,unaff_EBP + -0x34);
LAB_005cbaa0:
              if (iVar3 != 0) {
LAB_005cbaa8:
                param_2 = 1;
                goto LAB_005cba5c;
              }
            }
            else {
              iVar3 = FUN_005cbe9b(*(undefined4 *)(unaff_EBP + -0x50),
                                   *(undefined4 *)(unaff_EBP + -0x50),
                                   *(int *)(unaff_EBP + -0x50) - *(int *)(unaff_ESI + 0x30),
                                   *(undefined4 *)(unaff_EBP + -0x4c),4,unaff_EBP + -0x34);
              if (iVar3 != 0) goto LAB_005cbaa8;
              if (*(int *)(unaff_EBP + -0x40) == 0) {
                iVar3 = FUN_005cbe9b(*(undefined4 *)(unaff_EBP + -0x48),
                                     *(undefined4 *)(unaff_EBP + -0x48),
                                     *(int *)(unaff_ESI + 0x30) + *(int *)(unaff_EBP + -0x48),
                                     *(undefined4 *)(unaff_EBP + -0x44),4,unaff_EBP + -0x34);
                goto LAB_005cb94f;
              }
            }
          }
          goto LAB_005cb768;
        }
        piVar6 = (int *)(iVar11 + 4);
        iVar3 = (**(code **)(*(int *)(iVar11 + 4) + 0x10))();
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar3 + 4);
        puVar4 = (undefined4 *)(**(code **)(*piVar6 + 0x10))();
        *(undefined4 *)(unaff_EBP + -0x18) = *puVar4;
        uVar5 = FUN_00411537(unaff_EBP + -0xd0,unaff_ESI + 0x28);
        (*DAT_0097b54c)(uVar5,*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x10))
        ;
        iVar3 = (**(code **)(*piVar6 + 0x10))();
        *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar3 + 4);
        puVar4 = (undefined4 *)(**(code **)(*piVar6 + 0x10))();
        *(undefined4 *)(unaff_EBP + -0x18) = *puVar4;
        piVar6 = (int *)FUN_00411537(unaff_EBP + -0xe0,unaff_ESI + 0x28);
        piVar6[2] = -piVar6[2];
        *piVar6 = -*piVar6;
        FUN_004459fe(piVar6,piVar6 + 2);
        (*DAT_0097b54c)(piVar6,*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x10)
                       );
        if (*(int *)(unaff_EBP + -0x54) == 0) {
          iVar3 = (*DAT_0097b5a0)(unaff_EBP + -0x9c,unaff_EBP + -0xe0,unaff_EBP + -0x34);
          if (iVar3 == 0) {
            iVar3 = (*DAT_0097b5a0)(unaff_EBP + -0x9c,unaff_EBP + -0xd0,unaff_EBP + -0x34);
            goto LAB_005cbaa0;
          }
          goto LAB_005cba5a;
        }
        iVar3 = (*DAT_0097b5a0)(unaff_EBP + -0x9c,unaff_EBP + -0xd0);
        if (iVar3 != 0) goto LAB_005cbaa8;
      } while (*(int *)(unaff_EBP + -0x40) != 0);
      iVar3 = (*DAT_0097b5a0)(unaff_EBP + -0x9c,unaff_EBP + -0xe0,unaff_EBP + -0x34);
LAB_005cb94f:
    } while (iVar3 == 0);
LAB_005cba5a:
    param_2 = 0;
LAB_005cba5c:
    unaff_EDI = (int *)(iVar11 + 4);
    param_1 = *(int *)(unaff_EBP + -0x14);
    unaff_EBX = 0;
    iVar11 = *(int *)(unaff_EBP + -0x40);
    *(undefined4 *)(unaff_EBP + -0x128 + param_1 * 4) = *(undefined4 *)(unaff_EBP + -0x1c);
    if ((iVar11 == 0) && (param_2 == 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    *(undefined4 *)(unaff_EBP + -0x104 + param_1 * 4) = uVar5;
  } while( true );
}


