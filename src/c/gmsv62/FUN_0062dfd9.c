/* FUN_0062dfd9 - 0x0062dfd9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0062dfd9(void)

{
  int *piVar1;
  ushort *puVar2;
  ushort uVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int unaff_EBP;
  uint uVar12;
  undefined4 uVar13;
  
  FUN_00879bb8();
  if (*(short *)(unaff_EBP + 8) == 0) {
    uVar13 = 0xc;
    goto LAB_0062e782;
  }
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar6 = FUN_0062f6cd(unaff_EBP + 8,unaff_EBP + -0x28);
  if (iVar6 == 0) {
LAB_0062e04d:
    uVar13 = 0xc;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iVar6 = *(int *)(unaff_EBP + 0x10);
    *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iVar7 = FUN_004b95d3(unaff_EBP + -0x1c,unaff_EBP + -0x10);
    if (iVar7 == 0) {
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
      }
      goto LAB_0062e04d;
    }
    iVar7 = *(int *)(unaff_EBP + -0x24);
    if ((*(int *)(iVar7 + 0x18) == 0) || (*(int *)(iVar7 + 0x18) == *(int *)(unaff_EBP + 0xc))) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      while ((iVar9 = *(int *)(iVar7 + 0x50), iVar9 != 0 &&
             (*(uint *)(unaff_EBP + 0xc) < *(uint *)(iVar9 + -4)))) {
        piVar1 = (int *)(iVar9 + *(uint *)(unaff_EBP + 0xc) * 8);
        iVar7 = *piVar1;
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        *(undefined4 *)(unaff_EBP + -0x1c) = 1;
        while( true ) {
          iVar9 = *(int *)(iVar6 + 0x3e3 + (iVar7 / 1000000) * 4);
          iVar10 = 0;
          if (iVar9 != 0) {
            iVar10 = *(int *)(iVar9 + -4);
          }
          if (iVar10 + -1 < *(int *)(unaff_EBP + -0x1c)) break;
          iVar6 = FUN_00458c4f(unaff_EBP + -0x40,iVar7 / 1000000,*(undefined4 *)(unaff_EBP + -0x1c))
          ;
          piVar4 = *(int **)(iVar6 + 4);
          FUN_0046575e();
          if ((piVar4 != (int *)0x0) && (iVar6 = FUN_0045e2eb(), iVar6 == *piVar1)) {
            iVar6 = (**(code **)(*piVar4 + 4))();
            if (iVar6 == 0) {
              iVar6 = (**(code **)(*piVar4 + 0x18))();
              *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + iVar6;
            }
            else {
              iVar6 = (**(code **)(*piVar4 + 0x18))();
              *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + iVar6;
            }
          }
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
          iVar6 = *(int *)(unaff_EBP + 0x10);
        }
        iVar7 = FUN_0054e7b3(*piVar1);
        if (iVar7 != 0) {
          FUN_0044da62(*piVar1,*(undefined1 *)(iVar6 + 0x11),unaff_EBP + -0x20,0);
          FUN_00458c4f(unaff_EBP + -0x38,1,-*(int *)(unaff_EBP + -0x20));
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if ((*(int *)(unaff_EBP + -0x34) != 0) && (iVar7 = FUN_0045e2eb(), *piVar1 == iVar7)) {
            iVar7 = (**(code **)(**(int **)(unaff_EBP + -0x34) + 4))();
            if (iVar7 == 0) {
              *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
            }
            else {
              *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          FUN_0046575e();
        }
        iVar7 = piVar1[1];
        iVar9 = *(int *)(unaff_EBP + -0x18);
        if ((0 < iVar7) && (iVar9 < iVar7)) {
          if (*(int *)(unaff_EBP + -0x14) + iVar9 < piVar1[1]) {
LAB_0062e1d7:
            *(undefined1 *)(unaff_EBP + -4) = 0;
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
            }
            uVar13 = 2;
          }
          else {
LAB_0062e1f3:
            *(undefined1 *)(unaff_EBP + -4) = 0;
            if (*(int *)(unaff_EBP + -0x10) != 0) {
              FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
            }
            uVar13 = 7;
          }
          goto LAB_0062e4e8;
        }
        if ((iVar7 < 0) && (0 < iVar7 + iVar9)) {
          if (0 < piVar1[1] + *(int *)(unaff_EBP + -0x14) + iVar9) goto LAB_0062e1d7;
          goto LAB_0062e1f3;
        }
        if (iVar7 == 0) {
          if (iVar9 != 0) goto LAB_0062e1d7;
          if (*(int *)(unaff_EBP + -0x14) != 0) goto LAB_0062e1f3;
        }
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
        iVar7 = *(int *)(unaff_EBP + -0x24);
      }
      uVar11 = 0;
      while( true ) {
        iVar6 = *(int *)(iVar7 + 0x4c);
        uVar12 = 0;
        if ((iVar6 == 0) || (*(uint *)(iVar6 + -4) <= uVar11)) break;
        puVar2 = (ushort *)(iVar6 + uVar11 * 8);
        if (*(int *)(iVar6 + 4 + uVar11 * 8) == 0) {
          *(uint *)(unaff_EBP + 0xc) = (uint)*puVar2;
          iVar6 = FUN_005ee726(unaff_EBP + 0xc);
          if ((iVar6 == 0) && (iVar6 = FUN_00627ca7(puVar2), iVar6 == 0)) {
            iVar7 = *(int *)(unaff_EBP + -0x24);
            goto LAB_0062e25f;
          }
LAB_0062e2a2:
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
          }
          uVar13 = 3;
          goto LAB_0062e4e8;
        }
LAB_0062e25f:
        if (*(int *)(puVar2 + 2) == 1) {
          *(uint *)(unaff_EBP + 0xc) = (uint)*puVar2;
          iVar6 = FUN_005ee726(unaff_EBP + 0xc);
          if (iVar6 == 0) goto LAB_0062e2a2;
          iVar7 = *(int *)(unaff_EBP + -0x24);
        }
        if (*(int *)(puVar2 + 2) == 2) {
          iVar6 = FUN_00627ca7(puVar2);
          if (iVar6 == 0) goto LAB_0062e2a2;
          iVar7 = *(int *)(unaff_EBP + -0x24);
        }
        uVar11 = uVar11 + 1;
      }
      if ((*(int *)(iVar7 + 0x40) == 0) || (*(int *)(*(int *)(iVar7 + 0x40) + -4) == 0)) {
LAB_0062e40c:
        if ((*(int *)(iVar7 + 0x54) == 0) || (*(int *)(*(int *)(iVar7 + 0x54) + -4) == 0)) {
LAB_0062e4fc:
          if (*(int *)(iVar7 + 0x68) == 0) {
LAB_0062e5cc:
            if ((*(int *)(iVar7 + 0x9c) == 0) && (*(int *)(iVar7 + 0x98) == 0)) {
              iVar6 = *(int *)(unaff_EBP + 0x10);
            }
            else {
              iVar6 = *(int *)(unaff_EBP + 0x10);
              iVar9 = FUN_00458d2b(0);
              if (iVar9 == 0) goto LAB_0062e517;
              iVar7 = *(int *)(unaff_EBP + -0x24);
              if (*(int *)(iVar7 + 0x98) != 0) {
                uVar11 = FUN_004b8d24(iVar9 + 0x51,*(undefined4 *)(iVar9 + 0x55));
                if ((uVar11 & 0x80) != 0) goto LAB_0062e55b;
                iVar7 = *(int *)(unaff_EBP + -0x24);
              }
              if (*(int *)(iVar7 + 0x9c) != 0) {
                uVar11 = FUN_004b8d24(iVar9 + 0x51,*(undefined4 *)(iVar9 + 0x55));
                if ((uVar11 & 0x100) != 0) goto LAB_0062e55b;
                iVar7 = *(int *)(unaff_EBP + -0x24);
              }
            }
            if ((*(int *)(iVar7 + 0x2c) == 0) ||
               (uVar11 = FUN_00413367(iVar6 + 0xa5,*(undefined4 *)(iVar6 + 0xad)),
               *(uint *)(iVar7 + 0x2c) <= uVar11)) {
              FUN_005e02ab(unaff_EBP + -0x30,iVar6);
              iVar6 = *(int *)(unaff_EBP + -0x24);
              iVar7 = *(int *)(iVar6 + 0x8c);
              iVar9 = *(int *)(unaff_EBP + -0x2c);
              *(undefined1 *)(unaff_EBP + -4) = 5;
              if (((iVar7 < 0) || ((iVar9 == 0 || (iVar7 <= *(int *)(iVar9 + 0x18))))) &&
                 ((*(int *)(iVar6 + 0x90) < 0 ||
                  ((iVar9 == 0 || (*(int *)(iVar9 + 0x18) <= *(int *)(iVar6 + 0x90))))))) {
                *(undefined4 *)(unaff_EBP + 0xc) = 0;
                iVar7 = 0;
                while ((iVar6 = *(int *)(iVar6 + 0x94), iVar6 != 0 &&
                       (*(uint *)(unaff_EBP + 0xc) < *(uint *)(iVar6 + -4)))) {
                  iVar10 = FUN_0062df7e(*(undefined4 *)(unaff_EBP + 0x10),
                                        *(undefined4 *)(iVar7 + iVar6));
                  iVar9 = *(int *)(iVar7 + iVar6 + 4);
                  if (((-1 < iVar9) && (iVar10 < iVar9)) ||
                     ((iVar6 = *(int *)(iVar7 + iVar6 + 8), -1 < iVar6 && (iVar6 < iVar10)))) {
                    *(undefined1 *)(unaff_EBP + -4) = 1;
                    if (*(int *)(unaff_EBP + -0x2c) != 0) goto LAB_0062e71f;
                    goto LAB_0062e72b;
                  }
                  *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
                  iVar6 = *(int *)(unaff_EBP + -0x24);
                  iVar9 = *(int *)(unaff_EBP + -0x2c);
                  iVar7 = iVar7 + 0xc;
                }
                *(undefined1 *)(unaff_EBP + -4) = 1;
                if (iVar9 != 0) {
                  FUN_005e06ab(0);
                  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
                }
                *(undefined1 *)(unaff_EBP + -4) = 0;
                FUN_00414ebb();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                if (*(int *)(unaff_EBP + -0x24) != 0) {
                  FUN_0062f18d(0);
                }
                uVar13 = 0;
              }
              else {
                *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_0062e71f:
                FUN_005e06ab(0);
                *(undefined4 *)(unaff_EBP + -0x2c) = 0;
LAB_0062e72b:
                *(undefined1 *)(unaff_EBP + -4) = 0;
                FUN_00414ebb();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                if (*(int *)(unaff_EBP + -0x24) != 0) {
                  FUN_0062f18d(0);
                }
                uVar13 = 2;
              }
            }
            else {
              *(undefined1 *)(unaff_EBP + -4) = 0;
              FUN_00414ebb();
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              if (*(int *)(unaff_EBP + -0x24) != 0) {
                FUN_0062f18d(0);
              }
              uVar13 = 10;
            }
          }
          else {
            iVar6 = FUN_00458d2b(0);
            if (iVar6 != 0) {
              uVar13 = FUN_0045e2eb();
              *(undefined4 *)(unaff_EBP + -0x20) = uVar13;
              iVar7 = FUN_0055a60a(unaff_EBP + -0x20,0);
              if (iVar7 == 0) {
LAB_0062e55b:
                *(undefined1 *)(unaff_EBP + -4) = 0;
                FUN_00414ebb();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                iVar6 = *(int *)(unaff_EBP + -0x24);
              }
              else {
                iVar7 = *(int *)(unaff_EBP + -0x24);
                sVar5 = FUN_0045f084(iVar6 + 0x3b,*(undefined4 *)(iVar6 + 0x3f));
                if ((*(int *)(iVar7 + 0x10) <= (int)sVar5) &&
                   (iVar7 = *(int *)(unaff_EBP + -0x24),
                   sVar5 = FUN_0045f084(iVar6 + 0x3b,*(undefined4 *)(iVar6 + 0x3f)),
                   (int)sVar5 <= *(int *)(iVar7 + 0x14))) {
                  iVar7 = *(int *)(unaff_EBP + -0x24);
                  goto LAB_0062e5cc;
                }
                *(undefined1 *)(unaff_EBP + -4) = 0;
                FUN_00414ebb();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                iVar6 = *(int *)(unaff_EBP + -0x24);
              }
              if (iVar6 != 0) {
                FUN_0062f18d(0);
              }
              uVar13 = 9;
              goto LAB_0062e782;
            }
LAB_0062e517:
            *(undefined1 *)(unaff_EBP + -4) = 0;
            FUN_00414ebb();
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int *)(unaff_EBP + -0x24) != 0) {
              FUN_0062f18d(0);
            }
            uVar13 = 8;
          }
          goto LAB_0062e782;
        }
        iVar6 = *(int *)(unaff_EBP + -0x10);
        if (iVar6 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(iVar6 + -4);
        }
        if (iVar9 % 3 == 0) {
          if (iVar6 == 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *(int *)(iVar6 + -4);
          }
          if (*(int *)(iVar7 + 0x54) == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = *(uint *)(*(int *)(iVar7 + 0x54) + -4);
          }
          if (uVar11 <= (uint)(iVar9 / 3)) {
            iVar6 = 0;
            for (uVar11 = 0;
                (*(int *)(iVar7 + 0x54) != 0 && (uVar11 < *(uint *)(*(int *)(iVar7 + 0x54) + -4)));
                uVar11 = uVar11 + 1) {
              puVar8 = (undefined4 *)FUN_0045e053(unaff_EBP + 0xc,iVar6,iVar6 + 3);
              iVar9 = FUN_0087b6ab(*puVar8);
              FUN_00414ebb();
              iVar7 = *(int *)(unaff_EBP + -0x24);
              if (iVar9 < *(int *)(*(int *)(iVar7 + 0x54) + 4 + uVar11 * 8)) {
                *(undefined1 *)(unaff_EBP + -4) = 0;
                FUN_00414ebb();
                *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
                if (*(int *)(unaff_EBP + -0x24) != 0) {
                  FUN_0062f18d(0);
                }
                uVar13 = 6;
                goto LAB_0062e782;
              }
              iVar6 = iVar6 + 3;
            }
            goto LAB_0062e4fc;
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (iVar6 != 0) {
          FUN_00434e38(iVar6 + -0xc);
        }
        uVar13 = 6;
      }
      else {
        if (*(int *)(iVar7 + 0x44) != 0) {
          *(undefined4 *)(unaff_EBP + 0xc) = 0;
          uVar3 = *(ushort *)(iVar7 + 0x44);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          *(uint *)(unaff_EBP + -0x20) = (uint)uVar3;
          iVar6 = FUN_004b95d3(unaff_EBP + -0x20,unaff_EBP + 0xc);
          if (iVar6 == 0) {
            *(undefined1 *)(unaff_EBP + -4) = 1;
            if (*(int *)(unaff_EBP + 0xc) != 0) {
              FUN_00434e38(*(int *)(unaff_EBP + 0xc) + -0xc);
            }
            iVar6 = *(int *)(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0;
          }
          else {
            for (; (iVar6 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0x40), iVar6 != 0 &&
                   (uVar12 < *(uint *)(iVar6 + -4))); uVar12 = uVar12 + 1) {
              iVar6 = *(int *)(iVar6 + uVar12 * 4);
              if (iVar6 == 0) {
                iVar6 = DAT_00980dfc;
              }
              iVar7 = DAT_00980dfc;
              if (*(int *)(unaff_EBP + 0xc) != 0) {
                iVar7 = *(int *)(unaff_EBP + 0xc);
              }
              iVar6 = FUN_008858f0(iVar7,iVar6);
              if (iVar6 == 0) {
                *(undefined1 *)(unaff_EBP + -4) = 1;
                if (*(int *)(unaff_EBP + 0xc) != 0) {
                  FUN_00434e38(*(int *)(unaff_EBP + 0xc) + -0xc);
                }
                goto LAB_0062e409;
              }
            }
            *(undefined1 *)(unaff_EBP + -4) = 1;
            if (*(int *)(unaff_EBP + 0xc) != 0) {
              FUN_00434e38(*(int *)(unaff_EBP + 0xc) + -0xc);
            }
            iVar6 = *(int *)(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0;
          }
          if (iVar6 != 0) {
            FUN_00434e38(iVar6 + -0xc);
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_0062f177();
          uVar13 = 5;
          goto LAB_0062e782;
        }
        *(undefined1 *)(unaff_EBP + -4) = 3;
        for (; (iVar6 = *(int *)(iVar7 + 0x40), iVar6 != 0 && (uVar12 < *(uint *)(iVar6 + -4)));
            uVar12 = uVar12 + 1) {
          iVar6 = *(int *)(iVar6 + uVar12 * 4);
          if (iVar6 == 0) {
            iVar6 = DAT_00980dfc;
          }
          iVar7 = DAT_00980dfc;
          if (*(int *)(unaff_EBP + -0x10) != 0) {
            iVar7 = *(int *)(unaff_EBP + -0x10);
          }
          iVar6 = FUN_008858f0(iVar7,iVar6);
          if (iVar6 == 0) {
            *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_0062e409:
            iVar7 = *(int *)(unaff_EBP + -0x24);
            goto LAB_0062e40c;
          }
          iVar7 = *(int *)(unaff_EBP + -0x24);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
        }
        uVar13 = 4;
      }
    }
    else {
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_00434e38(*(int *)(unaff_EBP + -0x10) + -0xc);
      }
      uVar13 = 1;
    }
  }
LAB_0062e4e8:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0062f177();
LAB_0062e782:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar13;
}


