/* FUN_0062d669 - 0x0062d669 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0062d669(void)

{
  uint *puVar1;
  ushort *puVar2;
  int *piVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  
  FUN_00879bb8();
  if (*(short *)(unaff_EBP + 8) != 0) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar6 = FUN_0062f6cd(unaff_EBP + 8,unaff_EBP + -0x20);
    if (iVar6 != 0) {
      iVar6 = *(int *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + 8);
      iVar7 = FUN_005ee726(unaff_EBP + -0x14);
      if (iVar7 == 0) {
        piVar3 = *(int **)(unaff_EBP + -0x1c);
        if ((((piVar3[1] < 0) || (*(int *)(extraout_ECX + 0x4c) <= piVar3[1])) &&
            ((*piVar3 < 0 || (*piVar3 <= *(int *)(extraout_ECX + 0x4c))))) &&
           ((piVar3[6] == 0 || (piVar3[6] == *(int *)(unaff_EBP + 0xc))))) {
          (*DAT_0097b4a8)(unaff_EBP + -0x70);
          SystemTimeToFileTime((SYSTEMTIME *)(unaff_EBP + -0x70),(LPFILETIME)(unaff_EBP + -0x38));
          iVar7 = FUN_00429303();
          uVar8 = *(uint *)(iVar7 + 0x1e8);
          *(uint *)(unaff_EBP + -0x34) =
               *(int *)(iVar7 + 0x1ec) + *(int *)(unaff_EBP + -0x34) +
               (uint)CARRY4(uVar8,*(uint *)(unaff_EBP + -0x38));
          *(uint *)(unaff_EBP + -0x38) = uVar8 + *(uint *)(unaff_EBP + -0x38);
          iVar7 = FUN_005ee6cd(unaff_EBP + 8,unaff_EBP + -0x30);
          if (iVar7 == 0) {
LAB_0062d7d7:
            iVar7 = *(int *)(unaff_EBP + -0x1c);
            if (*(int *)(iVar7 + 0x20) != 0) {
              uVar8 = FUN_0045f03e(iVar6 + 0x33,*(undefined4 *)(iVar6 + 0x35));
              if (*(uint *)(iVar7 + 0x20) < (uVar8 & 0xff)) goto LAB_0062df5f;
              iVar7 = *(int *)(unaff_EBP + -0x1c);
            }
            if (*(int *)(iVar7 + 0x1c) != 0) {
              uVar8 = FUN_0045f03e(iVar6 + 0x33,*(undefined4 *)(iVar6 + 0x35));
              if ((uVar8 & 0xff) < *(uint *)(iVar7 + 0x1c)) goto LAB_0062df5f;
              iVar7 = *(int *)(unaff_EBP + -0x1c);
            }
            if (*(int *)(iVar7 + 0x24) != 0) {
              sVar5 = FUN_0045f084(iVar6 + 0x9d,*(undefined4 *)(iVar6 + 0xa1));
              if ((uint)(int)sVar5 < *(uint *)(iVar7 + 0x24)) goto LAB_0062df5f;
              iVar7 = *(int *)(unaff_EBP + -0x1c);
            }
            *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(iVar7 + 0x30);
            *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(iVar7 + 0x34);
            *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar7 + 0x38);
            *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar7 + 0x3c);
            uVar8 = 0;
            iVar7 = 0;
            while( true ) {
              iVar12 = *(int *)(extraout_ECX + 0xd4);
              if ((iVar12 == 0) || (*(uint *)(iVar12 + -4) <= uVar8)) goto LAB_0062d8ac;
              if (*(uint *)(iVar7 + iVar12) == (uint)*(ushort *)(unaff_EBP + 8)) break;
              uVar8 = uVar8 + 1;
              iVar7 = iVar7 + 0x14;
            }
            iVar7 = *(int *)(extraout_ECX + 0xd4) + uVar8 * 0x14;
            *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(iVar7 + 4);
            *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(iVar7 + 8);
            *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar7 + 0xc);
            *(undefined4 *)(unaff_EBP + -0x2c) = *(undefined4 *)(iVar7 + 0x10);
LAB_0062d8ac:
            iVar7 = (*DAT_0097b4ac)(unaff_EBP + -0x40,unaff_EBP + -0x38);
            if ((iVar7 < 1) &&
               (iVar7 = (*DAT_0097b4ac)(unaff_EBP + -0x30,unaff_EBP + -0x38), -1 < iVar7)) {
              iVar7 = *(int *)(unaff_EBP + -0x1c);
              if ((*(int *)(iVar7 + 0x48) == 0) || (*(int *)(*(int *)(iVar7 + 0x48) + -4) == 0)) {
LAB_0062d94f:
                *(undefined4 *)(unaff_EBP + 0xc) = 0;
                while ((iVar12 = *(int *)(iVar7 + 0x50), iVar12 != 0 &&
                       (*(uint *)(unaff_EBP + 0xc) < *(uint *)(iVar12 + -4)))) {
                  piVar3 = (int *)(iVar12 + *(uint *)(unaff_EBP + 0xc) * 8);
                  iVar7 = *piVar3;
                  *(undefined4 *)(unaff_EBP + -0x10) = 0;
                  *(undefined4 *)(unaff_EBP + -0x14) = 1;
                  while( true ) {
                    iVar12 = *(int *)(iVar6 + 0x3e3 + (iVar7 / 1000000) * 4);
                    iVar9 = 0;
                    if (iVar12 != 0) {
                      iVar9 = *(int *)(iVar12 + -4);
                    }
                    if (iVar9 + -1 < *(int *)(unaff_EBP + -0x14)) break;
                    iVar6 = FUN_00458c4f(unaff_EBP + -0x58,iVar7 / 1000000,
                                         *(undefined4 *)(unaff_EBP + -0x14));
                    piVar4 = *(int **)(iVar6 + 4);
                    if (*(int *)(unaff_EBP + -0x54) != 0) {
                      FUN_00449913(0);
                      *(undefined4 *)(unaff_EBP + -0x54) = 0;
                    }
                    if ((piVar4 != (int *)0x0) && (iVar6 = FUN_0045e2eb(), iVar6 == *piVar3)) {
                      iVar6 = (**(code **)(*piVar4 + 0x18))();
                      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + iVar6;
                    }
                    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
                    iVar6 = *(int *)(unaff_EBP + 0x10);
                  }
                  iVar7 = FUN_0054e7b3(*piVar3);
                  if (iVar7 != 0) {
                    FUN_0044da62(*piVar3,*(undefined1 *)(iVar6 + 0x11),unaff_EBP + -0x18,0);
                    FUN_00458c4f(unaff_EBP + -0x48,1,-*(int *)(unaff_EBP + -0x18));
                    *(undefined1 *)(unaff_EBP + -4) = 1;
                    if ((*(int *)(unaff_EBP + -0x44) != 0) &&
                       (iVar7 = FUN_0045e2eb(), *piVar3 == iVar7)) {
                      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
                    }
                    *(undefined1 *)(unaff_EBP + -4) = 0;
                    if (*(int *)(unaff_EBP + -0x44) != 0) {
                      FUN_00449913(0);
                      *(undefined4 *)(unaff_EBP + -0x44) = 0;
                    }
                  }
                  iVar7 = piVar3[1];
                  if ((((0 < iVar7) && (*(int *)(unaff_EBP + -0x10) < iVar7)) ||
                      ((iVar7 < 0 && (0 < *(int *)(unaff_EBP + -0x10) + iVar7)))) ||
                     ((iVar7 == 0 && (*(int *)(unaff_EBP + -0x10) != 0)))) {
                    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                    iVar7 = *(int *)(unaff_EBP + -0x1c);
                    goto joined_r0x0062da85;
                  }
                  *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
                  iVar7 = *(int *)(unaff_EBP + -0x1c);
                }
                *(undefined4 *)(unaff_EBP + 0xc) = 0;
                while ((iVar12 = *(int *)(iVar7 + 0x7c), iVar12 != 0 &&
                       (*(uint *)(unaff_EBP + 0xc) < *(uint *)(iVar12 + -4)))) {
                  *(undefined4 *)(unaff_EBP + -0x14) = 0;
                  uVar10 = *(undefined4 *)(iVar12 + *(uint *)(unaff_EBP + 0xc) * 4);
                  puVar11 = (undefined4 *)(iVar6 + 0x25f);
                  while ((iVar7 = FUN_0062d64e(puVar11[-0x62],uVar10), iVar7 == 0 &&
                         (iVar7 = FUN_0062d64e(*puVar11,uVar10), iVar7 == 0))) {
                    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
                    puVar11 = puVar11 + 2;
                    if (0x30 < *(int *)(unaff_EBP + -0x14)) goto LAB_0062dc36;
                  }
                  *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
                  iVar7 = *(int *)(unaff_EBP + -0x1c);
                }
                *(undefined4 *)(unaff_EBP + -0x10) = 0;
                *(undefined4 *)(unaff_EBP + 0xc) = 0;
                while ((iVar12 = *(int *)(iVar7 + 0x80), iVar12 != 0 &&
                       (*(uint *)(unaff_EBP + 0xc) < *(uint *)(iVar12 + -4)))) {
                  *(undefined4 *)(unaff_EBP + -0x14) = 0;
                  uVar10 = *(undefined4 *)(iVar12 + *(uint *)(unaff_EBP + 0xc) * 4);
                  puVar11 = (undefined4 *)(iVar6 + 0x25f);
                  do {
                    iVar7 = FUN_0062d64e(puVar11[-0x62],uVar10);
                    if ((iVar7 != 0) || (iVar7 = FUN_0062d64e(*puVar11,uVar10), iVar7 != 0)) {
                      iVar7 = *(int *)(unaff_EBP + -0x1c);
                      *(undefined4 *)(unaff_EBP + -0x10) = 1;
                      goto LAB_0062db60;
                    }
                    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
                    puVar11 = puVar11 + 2;
                  } while (*(int *)(unaff_EBP + -0x14) < 0x31);
                  *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
                  iVar7 = *(int *)(unaff_EBP + -0x1c);
                }
LAB_0062db60:
                bVar13 = false;
                if (((*(int *)(iVar7 + 0x80) != 0) && (*(int *)(*(int *)(iVar7 + 0x80) + -4) != 0))
                   && (*(int *)(unaff_EBP + -0x10) == 0)) {
                  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                  goto joined_r0x0062da85;
                }
                for (uVar8 = 0;
                    (*(int *)(iVar7 + 0x84) != 0 && (uVar8 < *(uint *)(*(int *)(iVar7 + 0x84) + -4))
                    ); uVar8 = uVar8 + 1) {
                  if (*(int *)(unaff_EBP + 0x1c) == *(int *)(*(int *)(iVar7 + 0x84) + uVar8 * 4)) {
                    bVar13 = true;
                  }
                }
                if (((*(int *)(iVar7 + 0x84) == 0) || (*(int *)(*(int *)(iVar7 + 0x84) + -4) == 0))
                   || (bVar13)) {
                  if (*(int *)(iVar7 + 0x68) == 0) {
LAB_0062dc46:
                    if ((*(int *)(iVar7 + 0x98) != 0) || (*(int *)(iVar7 + 0x9c) != 0)) {
                      iVar6 = FUN_00458d2b(0);
                      if (iVar6 == 0) goto LAB_0062dbdc;
                      iVar7 = *(int *)(unaff_EBP + -0x1c);
                      if (*(int *)(iVar7 + 0x98) != 0) {
                        uVar8 = FUN_004b8d24(iVar6 + 0x51,*(undefined4 *)(iVar6 + 0x55));
                        if ((uVar8 & 0x80) != 0) goto LAB_0062dbdc;
                        iVar7 = *(int *)(unaff_EBP + -0x1c);
                      }
                      if (*(int *)(iVar7 + 0x9c) != 0) {
                        uVar8 = FUN_004b8d24(iVar6 + 0x51,*(undefined4 *)(iVar6 + 0x55));
                        if ((uVar8 & 0x100) != 0) goto LAB_0062dbdc;
                        iVar7 = *(int *)(unaff_EBP + -0x1c);
                      }
                    }
                    if ((*(int *)(unaff_EBP + 0x18) < *(int *)(iVar7 + 8)) ||
                       (*(int *)(iVar7 + 0xc) < *(int *)(unaff_EBP + 0x18))) goto LAB_0062df51;
                    for (uVar8 = 0;
                        (iVar6 = *(int *)(iVar7 + 0x58), iVar6 != 0 &&
                        (uVar8 < *(uint *)(iVar6 + -4))); uVar8 = uVar8 + 1) {
                      iVar7 = FUN_00650e34(*(undefined4 *)(unaff_EBP + 0x10),
                                           *(undefined4 *)(iVar6 + uVar8 * 8),0);
                      if (iVar7 != *(int *)(iVar6 + uVar8 * 8 + 4)) goto LAB_0062dbdc;
                      iVar7 = *(int *)(unaff_EBP + -0x1c);
                    }
                    *(undefined4 *)(unaff_EBP + 0xc) = 0;
                    uVar8 = 0;
                    while ((iVar6 = *(int *)(iVar7 + 0x4c), iVar6 != 0 &&
                           (uVar8 < *(uint *)(iVar6 + -4)))) {
                      puVar2 = (ushort *)(iVar6 + uVar8 * 8);
                      if (*(int *)(iVar6 + 4 + uVar8 * 8) == 0) {
                        *(uint *)(unaff_EBP + 0x1c) = (uint)*puVar2;
                        iVar6 = FUN_005ee726(unaff_EBP + 0x1c);
                        if ((iVar6 != 0) || (iVar6 = FUN_00627ca7(puVar2), iVar6 != 0))
                        goto LAB_0062dbdc;
                        iVar7 = *(int *)(unaff_EBP + -0x1c);
                      }
                      if (*(int *)(puVar2 + 2) == 1) {
                        *(uint *)(unaff_EBP + 0x1c) = (uint)*puVar2;
                        iVar6 = FUN_005ee726(unaff_EBP + 0x1c);
                        if (iVar6 == 0) goto LAB_0062dbdc;
                        iVar7 = *(int *)(unaff_EBP + -0x1c);
                      }
                      if (*(int *)(puVar2 + 2) == 2) {
                        iVar6 = FUN_00627ca7(puVar2);
                        if (iVar6 == 0) goto LAB_0062dbdc;
                        iVar7 = *(int *)(unaff_EBP + -0x1c);
                      }
                      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
                      uVar8 = *(uint *)(unaff_EBP + 0xc);
                    }
                    if ((*(int *)(iVar7 + 0x40) == 0) ||
                       (*(int *)(*(int *)(iVar7 + 0x40) + -4) == 0)) {
LAB_0062de44:
                      FUN_005e02ab(unaff_EBP + -0x28,*(undefined4 *)(unaff_EBP + 0x10));
                      iVar6 = *(int *)(unaff_EBP + -0x1c);
                      iVar7 = *(int *)(iVar6 + 0x8c);
                      iVar12 = *(int *)(unaff_EBP + -0x24);
                      *(undefined1 *)(unaff_EBP + -4) = 3;
                      if ((((iVar7 < 0) || (iVar12 == 0)) || (iVar7 <= *(int *)(iVar12 + 0x18))) &&
                         (((*(int *)(iVar6 + 0x90) < 0 || (iVar12 == 0)) ||
                          (*(int *)(iVar12 + 0x18) <= *(int *)(iVar6 + 0x90))))) {
                        *(undefined4 *)(unaff_EBP + 0x1c) = 0;
                        for (uVar8 = 0;
                            (iVar7 = *(int *)(iVar6 + 0x94), iVar7 != 0 &&
                            (uVar8 < *(uint *)(iVar7 + -4))); uVar8 = uVar8 + 1) {
                          iVar12 = *(int *)(unaff_EBP + 0x1c) + iVar7;
                          iVar7 = FUN_0062df7e(*(undefined4 *)(unaff_EBP + 0x10),
                                               *(undefined4 *)(*(int *)(unaff_EBP + 0x1c) + iVar7));
                          iVar6 = *(int *)(iVar12 + 4);
                          if (((-1 < iVar6) && (iVar7 < iVar6)) ||
                             ((iVar6 = *(int *)(iVar12 + 8), -1 < iVar6 && (iVar6 < iVar7)))) {
                            *(undefined1 *)(unaff_EBP + -4) = 0;
                            if (*(int *)(unaff_EBP + -0x24) != 0) goto LAB_0062dee4;
                            goto LAB_0062dbdc;
                          }
                          iVar6 = *(int *)(unaff_EBP + -0x1c);
                          iVar12 = *(int *)(unaff_EBP + -0x24);
                          *(int *)(unaff_EBP + 0x1c) = *(int *)(unaff_EBP + 0x1c) + 0xc;
                        }
                        if ((*(uint *)(iVar6 + 0xa0) & 1 << (*(byte *)(unaff_EBP + -0x6c) & 0x1f))
                            != 0) {
                          *(undefined1 *)(unaff_EBP + -4) = 0;
                          if (iVar12 != 0) {
                            FUN_005e06ab(0);
                            iVar6 = *(int *)(unaff_EBP + -0x1c);
                            *(undefined4 *)(unaff_EBP + -0x24) = 0;
                          }
                          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                          if (iVar6 != 0) {
                            FUN_0062f18d(0);
                          }
                          uVar10 = 1;
                          goto LAB_0062df6d;
                        }
                        *(undefined1 *)(unaff_EBP + -4) = 0;
                        if (iVar12 != 0) {
                          FUN_005e06ab(0);
                          iVar6 = *(int *)(unaff_EBP + -0x1c);
                          *(undefined4 *)(unaff_EBP + -0x24) = 0;
                        }
                        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                        bVar13 = iVar6 == 0;
                        goto LAB_0062df57;
                      }
                      *(undefined1 *)(unaff_EBP + -4) = 0;
LAB_0062dee4:
                      FUN_005e06ab(0);
                      *(undefined4 *)(unaff_EBP + -0x24) = 0;
                    }
                    else {
                      uVar8 = (uint)*(ushort *)(unaff_EBP + 8);
                      if (*(uint *)(iVar7 + 0x44) != 0) {
                        uVar8 = *(uint *)(iVar7 + 0x44);
                      }
                      *(undefined4 *)(unaff_EBP + 0xc) = 0;
                      *(uint *)(unaff_EBP + 0x18) = uVar8;
                      *(undefined1 *)(unaff_EBP + -4) = 2;
                      iVar6 = FUN_004b95d3(unaff_EBP + 0x18,unaff_EBP + 0xc);
                      if (iVar6 != 0) {
                        for (uVar8 = 0;
                            (iVar6 = *(int *)(*(int *)(unaff_EBP + -0x1c) + 0x40), iVar6 != 0 &&
                            (uVar8 < *(uint *)(iVar6 + -4))); uVar8 = uVar8 + 1) {
                          iVar6 = *(int *)(iVar6 + uVar8 * 4);
                          if (iVar6 == 0) {
                            iVar6 = DAT_00980dfc;
                          }
                          iVar7 = DAT_00980dfc;
                          if (*(int *)(unaff_EBP + 0xc) != 0) {
                            iVar7 = *(int *)(unaff_EBP + 0xc);
                          }
                          iVar6 = FUN_008858f0(iVar7,iVar6);
                          if (iVar6 == 0) {
                            *(undefined1 *)(unaff_EBP + -4) = 0;
                            FUN_00414ebb();
                            goto LAB_0062de44;
                          }
                        }
                      }
                      *(undefined1 *)(unaff_EBP + -4) = 0;
                      FUN_00414ebb();
                    }
                  }
                  else {
                    iVar6 = FUN_00458d2b(0);
                    if (iVar6 != 0) {
                      uVar10 = FUN_0045e2eb();
                      *(undefined4 *)(unaff_EBP + 0xc) = uVar10;
                      iVar7 = FUN_0055a60a(unaff_EBP + 0xc,0);
                      if (iVar7 != 0) {
                        iVar7 = *(int *)(unaff_EBP + -0x1c);
                        sVar5 = FUN_0045f084(iVar6 + 0x3b,*(undefined4 *)(iVar6 + 0x3f));
                        if (((int)sVar5 < *(int *)(iVar7 + 0x10)) ||
                           (iVar7 = *(int *)(unaff_EBP + -0x1c),
                           sVar5 = FUN_0045f084(iVar6 + 0x3b,*(undefined4 *)(iVar6 + 0x3f)),
                           *(int *)(iVar7 + 0x14) < (int)sVar5)) {
LAB_0062dc36:
                          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                          iVar7 = *(int *)(unaff_EBP + -0x1c);
                          goto joined_r0x0062da85;
                        }
                        iVar7 = *(int *)(unaff_EBP + -0x1c);
                        goto LAB_0062dc46;
                      }
                    }
                  }
LAB_0062dbdc:
                  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                  bVar13 = *(int *)(unaff_EBP + -0x1c) == 0;
                }
                else {
LAB_0062df51:
                  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                  bVar13 = iVar7 == 0;
                }
LAB_0062df57:
                if (bVar13) goto LAB_0062df6b;
              }
              else {
                sVar5 = FUN_0045f084(iVar6 + 0x39,*(undefined4 *)(iVar6 + 0x3d));
                if ((int)sVar5 / 100 == 9) {
                  iVar7 = *(int *)(unaff_EBP + -0x1c);
                  goto LAB_0062d94f;
                }
                iVar7 = *(int *)(unaff_EBP + -0x1c);
                for (uVar8 = 0;
                    (*(int *)(iVar7 + 0x48) != 0 && (uVar8 < *(uint *)(*(int *)(iVar7 + 0x48) + -4))
                    ); uVar8 = uVar8 + 1) {
                  sVar5 = FUN_0045f084(iVar6 + 0x39,*(undefined4 *)(iVar6 + 0x3d));
                  iVar7 = *(int *)(unaff_EBP + -0x1c);
                  if ((int)sVar5 == *(int *)(*(int *)(iVar7 + 0x48) + uVar8 * 4)) goto LAB_0062d94f;
                }
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
joined_r0x0062da85:
                if (iVar7 == 0) goto LAB_0062df6b;
              }
              FUN_0062f18d(0);
              goto LAB_0062df6b;
            }
          }
          else {
            iVar7 = *(int *)(unaff_EBP + -0x1c);
            if (*(int *)(iVar7 + 0x28) < 0) {
              if (*(int *)(iVar7 + 0x88) != 0) {
                FileTimeToSystemTime
                          ((FILETIME *)(unaff_EBP + -0x30),(LPSYSTEMTIME)(unaff_EBP + -0x60));
                FileTimeToSystemTime
                          ((FILETIME *)(unaff_EBP + -0x38),(LPSYSTEMTIME)(unaff_EBP + -0x50));
                if ((*(ushort *)(unaff_EBP + -0x60) <= *(ushort *)(unaff_EBP + -0x50)) &&
                   ((*(ushort *)(unaff_EBP + -0x50) != *(ushort *)(unaff_EBP + -0x60) ||
                    ((*(ushort *)(unaff_EBP + -0x5e) <= *(ushort *)(unaff_EBP + -0x4e) &&
                     ((*(ushort *)(unaff_EBP + -0x4e) != *(ushort *)(unaff_EBP + -0x5e) ||
                      (*(ushort *)(unaff_EBP + -0x5a) < *(ushort *)(unaff_EBP + -0x4a))))))))) {
                  iVar7 = *(int *)(unaff_EBP + -0x1c);
                  goto LAB_0062d7a8;
                }
              }
            }
            else {
LAB_0062d7a8:
              uVar14 = __allmul(*(int *)(iVar7 + 0x28),*(int *)(iVar7 + 0x28) >> 0x1f,600000000,0);
              puVar1 = (uint *)(unaff_EBP + -0x30);
              uVar8 = *puVar1;
              *puVar1 = *puVar1 + (uint)uVar14;
              *(int *)(unaff_EBP + -0x2c) =
                   *(int *)(unaff_EBP + -0x2c) + (int)((ulonglong)uVar14 >> 0x20) +
                   (uint)CARRY4(uVar8,(uint)uVar14);
              iVar7 = (*DAT_0097b4ac)(unaff_EBP + -0x30,unaff_EBP + -0x38);
              if (iVar7 < 1) goto LAB_0062d7d7;
            }
          }
        }
      }
    }
LAB_0062df5f:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0062f177();
  }
LAB_0062df6b:
  uVar10 = 0;
LAB_0062df6d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar10;
}


