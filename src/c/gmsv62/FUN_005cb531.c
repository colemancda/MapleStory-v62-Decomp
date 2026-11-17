/* FUN_005cb531 - 0x005cb531 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_005cb531(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int extraout_ECX;
  int iVar14;
  int unaff_EBP;
  undefined2 uVar15;
  bool bVar16;
  int iVar17;
  
  FUN_00879bb8();
  iVar3 = *(int *)(extraout_ECX + 0x274);
  *(int *)(unaff_EBP + -0x38) = extraout_ECX;
  if ((iVar3 == 0) || (iVar3 = *(int *)(extraout_ECX + 0x160), iVar3 == 0)) {
    iVar3 = *(int *)(extraout_ECX + 0x15c);
  }
  if ((((((0 < *(int *)(iVar3 + 0x1e8)) && (iVar3 = FUN_005c8935(), iVar3 == 0)) &&
        (iVar3 = FUN_004cd670(extraout_ECX + 0x3d0,*(undefined4 *)(extraout_ECX + 0x3d8)),
        iVar3 == 0)) &&
       ((*(int *)(extraout_ECX + 0x204) == 0 && (*(int *)(extraout_ECX + 0x210) == 0)))) &&
      (*(int *)(extraout_ECX + 0x280) == 0)) && (*(int *)(extraout_ECX + 0x22c) == 0)) {
    puVar7 = (undefined4 *)(unaff_EBP + -0xc0);
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    uVar4 = FUN_005c5474();
    iVar5 = DAT_00978358;
    *(undefined4 *)(unaff_EBP + -0x54) = uVar4;
    iVar3 = *(int *)(unaff_EBP + 8);
    *(int *)(unaff_EBP + -0x58) = iVar5;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar3 == 0) {
      FUN_0043f3d6(unaff_EBP + -0x34,0);
      *(undefined4 *)(unaff_EBP + 8) = 0;
      goto LAB_005cb745;
    }
    if (iVar3 == 1) {
      puVar7 = (undefined4 *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
      iVar3 = FUN_005d5c94(*puVar7,puVar7[1]);
      *(int *)(unaff_EBP + -0x20) = iVar3;
    }
    else {
      if (iVar3 != 2) {
        if (iVar3 != 3) goto LAB_005cb745;
        piVar8 = *(int **)((-(uint)(*(int *)(extraout_ECX + 0xf0) != 0) &
                           *(int *)(extraout_ECX + 0xf0) - 0xcU) + 0x240);
        if (piVar8 != (int *)0x0) {
          iVar3 = (**(code **)(*piVar8 + 0x20))(&DAT_0097bc90);
          if (iVar3 == 0) {
            *(undefined4 *)(unaff_EBP + -0x24) = 0;
          }
          else {
            *(int **)(unaff_EBP + -0x24) = piVar8 + -1;
          }
          iVar3 = (**(code **)(*piVar8 + 0x20))(&DAT_0097946c);
          if (iVar3 == 0) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = piVar8 + -1;
          }
          *(int **)(unaff_EBP + -0x20) = piVar9;
          if ((int *)(-(uint)(iVar5 != 0) & iVar5 + 4U) == piVar8) {
            FUN_0043f3d6(unaff_EBP + -0x34,0);
            *(undefined4 *)(unaff_EBP + 8) = 0;
            goto LAB_005cb745;
          }
          if (piVar8 == (int *)(-(uint)(*(int *)(unaff_EBP + -0x24) != 0) &
                               *(int *)(unaff_EBP + -0x24) + 4U)) {
            FUN_0067b267(unaff_EBP + -0x34,0);
            *(undefined4 *)(unaff_EBP + 8) = 1;
            goto LAB_005cb745;
          }
          if (piVar8 == (int *)(-(uint)(piVar9 != (int *)0x0) & (uint)(piVar9 + 1))) {
            FUN_005c5b12(unaff_EBP + -0x34,0);
            *(undefined4 *)(unaff_EBP + 8) = 2;
            goto LAB_005cb745;
          }
        }
        goto LAB_005cbe66;
      }
      iVar3 = *(int *)(DAT_0097813c + 0x68);
      *(int *)(unaff_EBP + -0x20) = iVar3;
    }
    if (iVar3 != 0) {
      FUN_005c5b12(unaff_EBP + -0x34,0);
      *(undefined4 *)(unaff_EBP + 8) = 2;
LAB_005cb745:
      if ((*(int *)(extraout_ECX + 0x274) != 0) ||
         (iVar3 = *(int *)(*(int *)(extraout_ECX + 0x15c) + 0x194),
         *(undefined4 *)(unaff_EBP + -0x40) = 1, iVar3 == 0)) {
        *(undefined4 *)(unaff_EBP + -0x40) = 0;
      }
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      iVar3 = extraout_ECX;
      do {
        if ((*(int *)(iVar3 + 0x274) == 0) || (iVar5 = *(int *)(iVar3 + 0x160), iVar5 == 0)) {
          iVar5 = *(int *)(iVar3 + 0x15c);
        }
        if (*(int *)(iVar5 + 0x1e8) <= *(int *)(unaff_EBP + -0x1c)) goto LAB_005cbe14;
        iVar5 = FUN_004e67c9(*(undefined4 *)(unaff_EBP + -0x1c));
        if (((((*(int *)(iVar5 + 0x90) != 0) || (*(int *)(iVar3 + 0x148) == 0)) &&
             (*(int *)(iVar5 + 0x10) == 0)) &&
            (iVar6 = FUN_00413367(iVar3 + 0x164,*(undefined4 *)(iVar3 + 0x16c)),
            *(int *)(iVar5 + 0x14) <= iVar6)) &&
           ((*(int *)(unaff_EBP + 8) != 0 ||
            ((iVar6 = FUN_0043fb93(), iVar6 == 0 &&
             ((*(int *)(iVar5 + 0x1c) != 0 || (iVar6 = FUN_004bed04(), iVar6 == 0)))))))) {
          if ((*(int *)(iVar3 + 0x274) == 0) || (iVar6 = *(int *)(iVar3 + 0x160), iVar6 == 0)) {
            iVar6 = *(int *)(iVar3 + 0x15c);
          }
          iVar6 = FUN_004cd670(iVar6 + 0x158,*(undefined4 *)(iVar6 + 0x160));
          if (iVar6 != 0) {
            if ((*(int *)(iVar3 + 0x274) == 0) || (iVar6 = *(int *)(iVar3 + 0x160), iVar6 == 0)) {
              iVar6 = *(int *)(iVar3 + 0x15c);
            }
            if (*(int *)(unaff_EBP + -0x1c) == *(int *)(iVar6 + 0x1e8) + -1) goto LAB_005cbe14;
          }
          iVar6 = *(int *)(iVar5 + 0xc);
          if (iVar6 == 0) {
            piVar8 = (int *)(iVar3 + 4);
            iVar6 = (**(code **)(*(int *)(iVar3 + 4) + 0x10))();
            *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar6 + 4);
            puVar7 = (undefined4 *)(**(code **)(*piVar8 + 0x10))();
            *(undefined4 *)(unaff_EBP + -0x18) = *puVar7;
            uVar4 = FUN_00411537(unaff_EBP + -0xd0,iVar5 + 0x28);
            (*DAT_0097b54c)(uVar4,*(undefined4 *)(unaff_EBP + -0x18),
                            *(undefined4 *)(unaff_EBP + -0x10));
            iVar6 = (**(code **)(*piVar8 + 0x10))();
            *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(iVar6 + 4);
            puVar7 = (undefined4 *)(**(code **)(*piVar8 + 0x10))();
            *(undefined4 *)(unaff_EBP + -0x18) = *puVar7;
            piVar8 = (int *)FUN_00411537(unaff_EBP + -0xe0,iVar5 + 0x28);
            piVar8[2] = -piVar8[2];
            *piVar8 = -*piVar8;
            FUN_004459fe(piVar8,piVar8 + 2);
            (*DAT_0097b54c)(piVar8,*(undefined4 *)(unaff_EBP + -0x18),
                            *(undefined4 *)(unaff_EBP + -0x10));
            if (*(int *)(unaff_EBP + -0x54) == 0) {
              iVar6 = (*DAT_0097b5a0)(unaff_EBP + -0x9c,unaff_EBP + -0xe0,unaff_EBP + -0x34);
              if (iVar6 != 0) {
LAB_005cba5a:
                bVar16 = false;
                goto LAB_005cba5c;
              }
              iVar6 = (*DAT_0097b5a0)(unaff_EBP + -0x9c,unaff_EBP + -0xd0,unaff_EBP + -0x34);
LAB_005cbaa0:
              if (iVar6 != 0) goto LAB_005cbaa8;
            }
            else {
              iVar6 = (*DAT_0097b5a0)(unaff_EBP + -0x9c,unaff_EBP + -0xd0);
              if (iVar6 == 0) {
                if (*(int *)(unaff_EBP + -0x40) == 0) {
                  iVar6 = (*DAT_0097b5a0)(unaff_EBP + -0x9c,unaff_EBP + -0xe0,unaff_EBP + -0x34);
LAB_005cb94f:
                  if (iVar6 != 0) goto LAB_005cba5a;
                }
              }
              else {
LAB_005cbaa8:
                bVar16 = true;
LAB_005cba5c:
                iVar6 = *(int *)(unaff_EBP + -0x14);
                iVar14 = *(int *)(unaff_EBP + -0x40);
                *(undefined4 *)(unaff_EBP + -0x128 + iVar6 * 4) = *(undefined4 *)(unaff_EBP + -0x1c)
                ;
                if ((iVar14 != 0) || (bVar16)) {
                  uVar4 = 1;
                }
                else {
                  uVar4 = 0;
                }
                *(undefined4 *)(unaff_EBP + -0x104 + iVar6 * 4) = uVar4;
                if (*(int *)(iVar5 + 0xc) == 1) {
                  if (-1 < *(int *)(unaff_EBP + 8)) {
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
                      iVar3 = FUN_004b8c9b(*(int *)(unaff_EBP + -0x20) + 0x150,
                                           *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x158));
                      *(uint *)(unaff_EBP + -0xc0 + *(int *)(unaff_EBP + -0x14) * 4) =
                           iVar3 << 2 | 3;
                    }
                  }
                }
                else if (*(int *)(iVar5 + 0xc) == 2) {
                  iVar6 = *(int *)(iVar5 + 0x28);
                  if (!bVar16) {
                    iVar6 = -iVar6;
                  }
                  *(int *)(unaff_EBP + -0x10) = iVar6;
                  piVar8 = (int *)(**(code **)(*(int *)(iVar3 + 4) + 0x10))();
                  iVar6 = *piVar8;
                  iVar14 = *(int *)(unaff_EBP + -0x10);
                  iVar3 = (**(code **)(*(int *)(iVar3 + 4) + 0x10))();
                  iVar3 = *(int *)(iVar3 + 4) + *(int *)(iVar5 + 0x2c);
                  *(int *)(unaff_EBP + -0x60) = iVar6 + iVar14;
                  if (*(int *)(unaff_EBP + -0x54) == 0) {
                    iVar6 = (*(int *)(unaff_EBP + -0x2c) + *(int *)(unaff_EBP + -0x34)) / 2;
                    iVar14 = *(int *)(unaff_EBP + -0x34) + 10;
                    bVar16 = SBORROW4(iVar14,iVar6);
                    iVar5 = iVar14 - iVar6;
                  }
                  else {
                    iVar6 = (*(int *)(unaff_EBP + -0x34) + *(int *)(unaff_EBP + -0x2c)) / 2;
                    iVar14 = *(int *)(unaff_EBP + -0x2c) + -10;
                    bVar16 = SBORROW4(iVar6,iVar14);
                    iVar5 = iVar6 - iVar14;
                  }
                  uVar15 = (short)iVar14;
                  if (bVar16 == iVar5 < 0) {
                    uVar15 = (short)iVar6;
                  }
                  iVar5 = *(int *)(unaff_EBP + -0x30) + 10;
                  if (iVar5 <= iVar3) {
                    iVar5 = *(int *)(unaff_EBP + -0x28) + -10;
                    if (iVar3 <= iVar5) {
                      iVar5 = (*(int *)(unaff_EBP + -0x28) + *(int *)(unaff_EBP + -0x30)) / 2;
                    }
                  }
                  iVar3 = *(int *)(unaff_EBP + -0x14);
                  *(undefined2 *)(unaff_EBP + -0xc0 + iVar3 * 4) = uVar15;
                  *(short *)(unaff_EBP + -0xbe + iVar3 * 4) = (short)iVar5;
                }
                else {
                  *(undefined4 *)(unaff_EBP + -0xc0 + iVar6 * 4) = 0;
                }
                *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
              }
            }
          }
          else if ((iVar6 == 3) || (iVar6 == 4)) {
            iVar6 = FUN_007d1e08();
            if (0x9c3 < iVar6 - *(int *)(iVar3 + 0x144)) {
              FUN_00411537(unaff_EBP + -0x74,iVar5 + 0x38);
              piVar8 = (int *)(*(int *)(unaff_EBP + -0x38) + 4);
              iVar3 = (**(code **)(*(int *)(*(int *)(unaff_EBP + -0x38) + 4) + 0x10))();
              *(int *)(unaff_EBP + -0x70) = *(int *)(unaff_EBP + -0x70) + *(int *)(iVar3 + 4);
              iVar3 = (**(code **)(*piVar8 + 0x10))();
              *(int *)(unaff_EBP + -0x68) = *(int *)(unaff_EBP + -0x68) + *(int *)(iVar3 + 4);
              uVar4 = (**(code **)(*piVar8 + 0x10))();
              *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
              iVar3 = FUN_005c5474();
              *(uint *)(unaff_EBP + -0x74) =
                   ((-(uint)(iVar3 != 0) & 2) - 1) * *(int *)(iVar5 + 0x34) * *(int *)(iVar5 + 0x28)
                   + **(int **)(unaff_EBP + -0x10);
              uVar4 = (**(code **)(*piVar8 + 0x10))();
              *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
              iVar3 = FUN_005c5474();
              *(uint *)(unaff_EBP + -0x6c) =
                   ((-(uint)(iVar3 != 0) & 2) - 1) *
                   (*(int *)(iVar5 + 0x28) + *(int *)(iVar5 + 0x2c)) * *(int *)(iVar5 + 0x34) +
                   **(int **)(unaff_EBP + -0x10);
              iVar3 = (*DAT_0097b5a0)(unaff_EBP + -0x138,unaff_EBP + -0x74,unaff_EBP + -0x34);
              if (iVar3 != 0) {
                *(undefined4 *)(unaff_EBP + -0x3c) = 0;
                uVar4 = *(undefined4 *)(iVar5 + 0x30);
                uVar1 = *(undefined4 *)(iVar5 + 0x2c);
                *(undefined4 *)(unaff_EBP + -4) = 0;
                FUN_005d0ab2(unaff_EBP + -0x3c,*(undefined4 *)(iVar5 + 0x28),uVar1,uVar4);
                *(undefined4 *)(unaff_EBP + -0x10) = 0;
                *(undefined4 *)(unaff_EBP + -0x18) = 0;
                while ((iVar3 = *(int *)(unaff_EBP + -0x3c), iVar3 != 0 &&
                       (*(uint *)(unaff_EBP + -0x18) < *(uint *)(iVar3 + -4)))) {
                  *(uint *)(unaff_EBP + -0x78) = iVar3 + *(uint *)(unaff_EBP + -0x18) * 4;
                  uVar4 = (**(code **)(*piVar8 + 0x10))();
                  *(undefined4 *)(unaff_EBP + -0x5c) = uVar4;
                  *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(iVar5 + 0x34);
                  iVar10 = FUN_005c5474();
                  iVar3 = **(int **)(unaff_EBP + -0x78);
                  iVar6 = *(int *)(unaff_EBP + -100);
                  iVar14 = **(int **)(unaff_EBP + -0x5c);
                  *(undefined4 *)(unaff_EBP + -0x84) = 0;
                  *(undefined4 *)(unaff_EBP + -0x80) = 0;
                  *(undefined4 *)(unaff_EBP + -0x7c) = 0;
                  *(undefined ***)(unaff_EBP + -0x8c) = &PTR_FUN_008e8ab0;
                  iVar17 = *(int *)(iVar5 + 0xc);
                  *(undefined1 *)(unaff_EBP + -4) = 1;
                  if (iVar17 == 3) {
                    *(undefined4 *)(unaff_EBP + -0x5c) = DAT_00978138;
                    iVar17 = unaff_EBP + -0x8c;
                    iVar11 = (**(code **)(*piVar8 + 0x10))(iVar17);
                    iVar11 = *(int *)(iVar11 + 4) + 100;
                    iVar12 = (**(code **)(*piVar8 + 0x10))(iVar11);
                    FUN_00861498(((-(uint)(iVar10 != 0) & 2) - 1) * (iVar3 * iVar6 + iVar6 / 2) +
                                 iVar14,*(int *)(iVar12 + 4) + -100,iVar11,iVar17);
LAB_005cbc5d:
                    if (*(int *)(unaff_EBP + -0x84) != 0) {
                      *(uint *)(unaff_EBP + -0x10) =
                           *(uint *)(unaff_EBP + -0x10) |
                           1 << ((char)*(undefined4 *)
                                        (*(int *)(unaff_EBP + -0x3c) +
                                        *(int *)(unaff_EBP + -0x18) * 4) -
                                 (char)*(undefined4 *)(iVar5 + 0x28) & 0x1fU);
                    }
                  }
                  else if (iVar17 == 4) {
                    iVar3 = (**(code **)(*piVar8 + 0x10))();
                    puVar7 = (undefined4 *)FUN_00518b2e();
                    *puVar7 = *(undefined4 *)(iVar3 + 4);
                    goto LAB_005cbc5d;
                  }
                  *(undefined1 *)(unaff_EBP + -4) = 0;
                  *(undefined ***)(unaff_EBP + -0x8c) = &PTR_FUN_008e8ab0;
                  FUN_00434e79();
                  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
                }
                iVar3 = *(int *)(unaff_EBP + -0x10);
                if (iVar3 != 0) {
                  iVar5 = *(int *)(unaff_EBP + -0x14) * 4;
                  *(undefined4 *)(unaff_EBP + -0x128 + iVar5) = *(undefined4 *)(unaff_EBP + -0x1c);
                  uVar4 = FUN_005c5474();
                  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
                  *(undefined4 *)(unaff_EBP + -0x104 + iVar5) = uVar4;
                  *(int *)(unaff_EBP + -0xc0 + iVar5) = iVar3;
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                FUN_00445a30();
              }
            }
          }
          else {
            piVar8 = (int *)(iVar3 + 4);
            piVar9 = (int *)(**(code **)(*(int *)(iVar3 + 4) + 0x10))();
            *(int *)(unaff_EBP + -0x50) = *piVar9 + *(int *)(iVar5 + 0x28);
            iVar6 = (**(code **)(*piVar8 + 0x10))();
            *(int *)(unaff_EBP + -0x4c) = *(int *)(iVar6 + 4) + *(int *)(iVar5 + 0x2c);
            piVar9 = (int *)(**(code **)(*piVar8 + 0x10))();
            *(int *)(unaff_EBP + -0x48) = *piVar9 - *(int *)(iVar5 + 0x28);
            iVar6 = (**(code **)(*piVar8 + 0x10))();
            *(int *)(unaff_EBP + -0x44) = *(int *)(iVar6 + 4) + *(int *)(iVar5 + 0x2c);
            if (*(int *)(unaff_EBP + -0x54) == 0) {
              iVar6 = FUN_005cbe9b(*(undefined4 *)(unaff_EBP + -0x48),
                                   *(undefined4 *)(unaff_EBP + -0x48),
                                   *(int *)(iVar5 + 0x30) + *(int *)(unaff_EBP + -0x48),
                                   *(undefined4 *)(unaff_EBP + -0x44),4,unaff_EBP + -0x34);
              if (iVar6 == 0) {
                iVar6 = FUN_005cbe9b(*(undefined4 *)(unaff_EBP + -0x50),
                                     *(undefined4 *)(unaff_EBP + -0x50),
                                     *(int *)(unaff_EBP + -0x50) - *(int *)(iVar5 + 0x30),
                                     *(undefined4 *)(unaff_EBP + -0x4c),4,unaff_EBP + -0x34);
                goto LAB_005cbaa0;
              }
              goto LAB_005cba5a;
            }
            iVar6 = FUN_005cbe9b(*(undefined4 *)(unaff_EBP + -0x50),
                                 *(undefined4 *)(unaff_EBP + -0x50),
                                 *(int *)(unaff_EBP + -0x50) - *(int *)(iVar5 + 0x30),
                                 *(undefined4 *)(unaff_EBP + -0x4c),4,unaff_EBP + -0x34);
            if (iVar6 != 0) goto LAB_005cbaa8;
            if (*(int *)(unaff_EBP + -0x40) == 0) {
              iVar6 = FUN_005cbe9b(*(undefined4 *)(unaff_EBP + -0x48),
                                   *(undefined4 *)(unaff_EBP + -0x48),
                                   *(int *)(iVar5 + 0x30) + *(int *)(unaff_EBP + -0x48),
                                   *(undefined4 *)(unaff_EBP + -0x44),4,unaff_EBP + -0x34);
              goto LAB_005cb94f;
            }
          }
        }
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
        iVar3 = *(int *)(unaff_EBP + -0x38);
      } while( true );
    }
  }
LAB_005cbe66:
  uVar4 = 0;
LAB_005cbe68:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
LAB_005cbe14:
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    piVar8 = *(int **)(unaff_EBP + 0xc);
    if (((piVar8 != (int *)0x0) &&
        (puVar7 = *(undefined4 **)(unaff_EBP + 0x10), puVar7 != (undefined4 *)0x0)) &&
       (puVar2 = *(undefined4 **)(unaff_EBP + 0x14), puVar2 != (undefined4 *)0x0)) {
      uVar13 = FUN_004133f0();
      iVar3 = (uVar13 % *(uint *)(unaff_EBP + -0x14)) * 4;
      *piVar8 = *(int *)(unaff_EBP + -0x128 + iVar3) + 0xc;
      uVar4 = *(undefined4 *)(unaff_EBP + -0xc0 + iVar3);
      *puVar7 = *(undefined4 *)(unaff_EBP + -0x104 + iVar3);
      *puVar2 = uVar4;
    }
    uVar4 = 1;
    goto LAB_005cbe68;
  }
  goto LAB_005cbe66;
}


