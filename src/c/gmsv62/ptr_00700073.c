/* ptr_00700073 - 0x00700073 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00700073(void)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  undefined4 *puVar5;
  int in_EAX;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *extraout_ECX;
  int iVar9;
  short sVar10;
  int *unaff_EBX;
  int iVar11;
  int unaff_EBP;
  uint unaff_ESI;
  uint uVar12;
  int *piStack_10;
  
  do {
    FUN_00705dac();
    FUN_00705dc9();
    *(undefined4 *)(in_EAX + 4) = *(undefined4 *)(unaff_EBP + -0x20);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    if (*(int **)(unaff_EBP + -0x20) != unaff_EBX) {
      FUN_00705e5b();
      *(int **)(unaff_EBP + -0x20) = unaff_EBX;
    }
LAB_0070009c:
    do {
      do {
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_005ee767();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0045f10c();
        if (*(int **)(unaff_EBP + -0x80) == unaff_EBX) {
          *(int **)(unaff_EBP + -0x6c) = unaff_EBX;
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          piVar7 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x5cc);
          *(undefined4 *)(unaff_EBP + -0x34) = 3;
          do {
            *(int **)(unaff_EBP + -0x10) = unaff_EBX;
            while( true ) {
              if ((int *)*piVar7 == unaff_EBX) {
                iVar6 = 0;
              }
              else {
                iVar6 = ((int *)*piVar7)[-1];
              }
              if (iVar6 + -1 <= *(int *)(unaff_EBP + -0x10)) break;
              iVar6 = *(int *)(unaff_EBP + -0x10) + 1;
              *(int *)(unaff_EBP + -0x30) = iVar6;
              iVar11 = iVar6;
              while( true ) {
                iVar3 = *piVar7;
                if (iVar3 == 0) {
                  iVar9 = 0;
                }
                else {
                  iVar9 = *(int *)(iVar3 + -4);
                }
                if (iVar9 <= iVar11) break;
                if (*(int *)(*(int *)(iVar3 + 4 + iVar11 * 8) + 8) <
                    *(int *)(*(int *)(iVar3 + 4 + *(int *)(unaff_EBP + -0x10) * 8) + 8)) {
                  FUN_00705b42();
                  FUN_00705b42();
                  FUN_00705b42();
                }
                iVar6 = *(int *)(unaff_EBP + -0x30);
                iVar11 = iVar11 + 1;
              }
              *(int *)(unaff_EBP + -0x10) = iVar6;
              unaff_EBX = (int *)0x0;
            }
            piVar7 = piVar7 + 1;
            piVar1 = (int *)(unaff_EBP + -0x34);
            *piVar1 = *piVar1 + -1;
          } while (*piVar1 != 0);
          puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x5cc);
          *(undefined4 *)(unaff_EBP + -0x34) = 3;
          do {
            *(int **)(unaff_EBP + -0x10) = unaff_EBX;
            while( true ) {
              if ((int *)*puVar5 == unaff_EBX) {
                iVar6 = 0;
              }
              else {
                iVar6 = ((int *)*puVar5)[-1];
              }
              if (iVar6 + -1 <= *(int *)(unaff_EBP + -0x10)) break;
              iVar6 = *(int *)(unaff_EBP + -0x10) + 1;
              *(int *)(unaff_EBP + -0x30) = iVar6;
              *(int *)(unaff_EBP + -0x14) = iVar6;
              while( true ) {
                piVar7 = (int *)*puVar5;
                if (piVar7 == unaff_EBX) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = piVar7[-1];
                }
                if (iVar6 <= *(int *)(unaff_EBP + -0x14)) break;
                if (*(int *)(piVar7[*(int *)(unaff_EBP + -0x10) * 2 + 1] + 8) ==
                    *(int *)(piVar7[*(int *)(unaff_EBP + -0x14) * 2 + 1] + 8)) {
                  iVar6 = FUN_006fc790();
                  *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(iVar6 + 0x1c);
                  iVar6 = FUN_006fc790();
                  if (*(uint *)(iVar6 + 0x1c) < *(uint *)(unaff_EBP + -0x58)) {
                    FUN_00705b42();
                    FUN_00705b42();
                    FUN_00705b42();
                  }
                }
                *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
                unaff_EBX = (int *)0x0;
              }
              *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x30);
            }
            puVar5 = puVar5 + 1;
            piVar7 = (int *)(unaff_EBP + -0x34);
            *piVar7 = *piVar7 + -1;
          } while (*piVar7 != 0);
          *(int *)(unaff_EBP + -0x30) = unaff_EBP + -0x98;
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x1c) + 0x5cc;
          *(undefined4 *)(unaff_EBP + -0x34) = 3;
          do {
            iVar6 = 0;
            while( true ) {
              if (*(int **)(DAT_0097926c + 0x80) == unaff_EBX) {
                iVar11 = 0;
              }
              else {
                iVar11 = (*(int **)(DAT_0097926c + 0x80))[-1];
              }
              if (iVar11 <= iVar6) break;
              if (*(int **)(**(int **)(unaff_EBP + -0x30) + iVar6 * 4) != unaff_EBX) {
                uVar12 = 0;
                while (((piVar7 = (int *)**(undefined4 **)(unaff_EBP + -0x14), piVar7 != unaff_EBX
                        && (uVar12 < (uint)piVar7[-1])) &&
                       (*(int *)(piVar7[uVar12 * 2 + 1] + 8) < iVar6))) {
                  uVar12 = uVar12 + 1;
                }
                *(int **)(unaff_EBP + -0x20) = unaff_EBX;
                FUN_00705d79();
                **(undefined2 **)(unaff_EBP + -0x20) = (short)iVar6;
                *(undefined1 *)(unaff_EBP + -4) = 0x1d;
                *(int *)(*(int *)(unaff_EBP + -0x20) + 8) = iVar6;
                iVar11 = FUN_00706002();
                FUN_00705dac();
                FUN_00705dc9();
                *(undefined4 *)(iVar11 + 4) = *(undefined4 *)(unaff_EBP + -0x20);
                *(undefined1 *)(unaff_EBP + -4) = 0x1c;
                if (*(int **)(unaff_EBP + -0x20) != unaff_EBX) {
                  FUN_00705e5b();
                  *(int **)(unaff_EBP + -0x20) = unaff_EBX;
                }
              }
              iVar6 = iVar6 + 1;
            }
            *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 4;
            *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
            piVar7 = (int *)(unaff_EBP + -0x34);
            *piVar7 = *piVar7 + -1;
          } while (*piVar7 != 0);
          piVar7 = (int *)FUN_004029b9();
          if (piVar7 == unaff_EBX) {
            piVar7 = (int *)0x0;
          }
          else {
            *piVar7 = (int)&PTR_LAB_008e84a0;
            piStack_10 = (int *)0x700345;
            _memset(piVar7,(int)unaff_EBX,0xc);
            *piVar7 = (int)&PTR_FUN_008e8ea8;
            piVar7[4] = 0x109;
            piVar7[3] = 1;
          }
          *(int **)(unaff_EBP + -0x84) = piVar7;
          if (piVar7 != unaff_EBX) {
            InterlockedIncrement(piVar7 + 1);
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          *(int **)(unaff_EBP + -0x18) = unaff_EBX;
          do {
            piVar7 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x5cc + *(int *)(unaff_EBP + -0x18) * 4);
            *(int **)(unaff_EBP + -0x10) = unaff_EBX;
            *(int **)(unaff_EBP + -0x58) = piVar7;
            while( true ) {
              if ((int *)*piVar7 == unaff_EBX) {
                iVar6 = 0;
              }
              else {
                iVar6 = ((int *)*piVar7)[-1];
              }
              if (iVar6 <= *(int *)(unaff_EBP + -0x10)) break;
              *(undefined4 *)(unaff_EBP + -0x20) =
                   *(undefined4 *)(*piVar7 + *(int *)(unaff_EBP + -0x10) * 8 + 4);
              FUN_00705dac();
              piVar7 = *(int **)(*(int *)(unaff_EBP + -0x20) + 0x18);
              *(undefined1 *)(unaff_EBP + -4) = 0x1f;
              if (piVar7 == unaff_EBX) {
                iVar6 = 0;
              }
              else {
                iVar6 = piVar7[-1];
              }
              FUN_00705f75();
              FUN_0056a92f();
              piVar7 = (int *)0x0;
              piVar1 = unaff_EBX;
              while ((int)piVar1 < iVar6) {
                FUN_00701d8e();
                if (*(int *)(unaff_EBP + -0x18) == 1) {
                  FUN_00701d8e();
                }
                piStack_10 = (int *)0x70041d;
                FUN_00705b3e();
                piStack_10 = (int *)0x700427;
                FUN_007063cf();
                piStack_10 = piVar7;
                FUN_00705b3e();
                uVar8 = FUN_004726fc();
                *(int ***)(unaff_EBP + -0x78) = &piStack_10;
                piStack_10 = extraout_ECX;
                FUN_00450368(uVar8);
                *(undefined1 *)(unaff_EBP + -4) = 0x1f;
                FUN_004503f5();
                uVar8 = FUN_007e3c88();
                *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x20) + 0x1c) + (int)piVar7 * 4) =
                     uVar8;
                piVar7 = (int *)((int)piVar7 + 1);
                piVar1 = piVar7;
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x1e;
              if (*(int **)(unaff_EBP + -0x20) != unaff_EBX) {
                FUN_00705e5b();
                *(int **)(unaff_EBP + -0x20) = unaff_EBX;
              }
              *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
              piVar7 = *(int **)(unaff_EBP + -0x58);
            }
            *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
          } while (*(int *)(unaff_EBP + -0x18) < 3);
          puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x5cc);
          piVar7 = (int *)*puVar5;
          if (((piVar7 != unaff_EBX) && ((int *)piVar7[-1] != unaff_EBX)) &&
             (DAT_0097bdb0 == unaff_EBX)) {
            for (uVar12 = 0;
                (piVar7 = (int *)*puVar5, piVar7 != unaff_EBX && (uVar12 < (uint)piVar7[-1]));
                uVar12 = uVar12 + 1) {
              FUN_006fbf25();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          if (*(int **)(unaff_EBP + -0x84) != unaff_EBX) {
            FUN_004504e6();
            *(int **)(unaff_EBP + -0x84) = unaff_EBX;
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int **)(unaff_EBP + -0x6c) != unaff_EBX) {
            FUN_00705e5b();
            *(int **)(unaff_EBP + -0x6c) = unaff_EBX;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          piStack_10 = (int *)(unaff_EBP + -0x98);
          FUN_0087a0b8();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_005ee767();
          ExceptionList = *(void **)(unaff_EBP + -0xc);
          return;
        }
        *(undefined4 *)(unaff_EBP + -0x40) = 0xffffffff;
        *(int **)(unaff_EBP + -0x2c) = unaff_EBX;
        *(int **)(unaff_EBP + -0x4c) = unaff_EBX;
        *(int **)(unaff_EBP + -0x50) = unaff_EBX;
        *(int **)(unaff_EBP + -100) = unaff_EBX;
        *(int **)(unaff_EBP + -0x30) = unaff_EBX;
        *(int **)(unaff_EBP + -0x14) = unaff_EBX;
        *(int **)(unaff_EBP + -0x48) = unaff_EBX;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_0062f645();
        *(int **)(unaff_EBP + -0x38) = unaff_EBX;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        *(int **)(unaff_EBP + -0x18) = unaff_EBX;
LAB_006ffb2e:
        piVar7 = *(int **)(unaff_EBP + -0x48);
        if ((piVar7 == unaff_EBX) || ((uint)piVar7[-1] <= *(uint *)(unaff_EBP + -0x18)))
        goto LAB_006ffea4;
        uVar2 = *(ushort *)((int)piVar7 + *(uint *)(unaff_EBP + -0x18) * 2);
        *(uint *)(unaff_EBP + -0x44) = CONCAT22((short)((uint)in_EAX >> 0x10),uVar2);
        FUN_0087a1b0();
        piStack_10 = (int *)(uint)uVar2;
        piStack_10 = (int *)FUN_00412335();
        *(undefined1 **)(unaff_EBP + -0x60) = &stack0xfffffff4;
        FUN_004033a1();
        piStack_10 = (int *)(unaff_EBP - 0xc0);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        piVar7 = (int *)FUN_004032b4();
        *(int **)(unaff_EBP + -0x8c) = piVar7;
        *(int **)(unaff_EBP + -0x10) = unaff_EBX;
        if ((piVar7 != unaff_EBX) &&
           ((iVar6 = FUN_00404b30(), iVar6 < (int)unaff_EBX && (iVar6 != -0x7fffbffe)))) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        iVar6 = FUN_00402bc3();
        if (iVar6 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        if (*(int **)(unaff_EBP + -0x18) != unaff_EBX) {
LAB_006ffca0:
          in_EAX = *(int *)(unaff_EBP + -0x54);
          *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + -0x44);
          iVar6 = FUN_005ee726();
          if (iVar6 == 0) {
            iVar6 = FUN_005ee6cd();
            if (iVar6 != 0) {
              *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x44);
              *(undefined1 **)(unaff_EBP + -0x60) = &stack0xfffffffc;
              if (*(int **)(unaff_EBP + -0x10) != unaff_EBX) {
                (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
              }
              piStack_10 = (int *)0x6ffd59;
              FUN_006ff570();
              *(undefined1 *)(unaff_EBP + -4) = 0x19;
              FUN_004725b8();
              *(undefined1 *)(unaff_EBP + -4) = 0x14;
              FUN_0045f10c();
              if (*(int **)(unaff_EBP + -0x48) == unaff_EBX) {
                iVar6 = 0;
              }
              else {
                iVar6 = (*(int **)(unaff_EBP + -0x48))[-1];
              }
              if (*(int *)(unaff_EBP + -0x18) == iVar6 + -1) {
                FileTimeToSystemTime
                          ((FILETIME *)(unaff_EBP + -200),(LPSYSTEMTIME)(unaff_EBP + -0xb0));
                puVar5 = (undefined4 *)FUN_00679d22();
                uVar8 = *puVar5;
                piStack_10 = (int *)(uint)*(ushort *)(unaff_EBP + -0xb0);
                *(undefined1 *)(unaff_EBP + -4) = 0x1a;
                FUN_00434e21(unaff_EBP + -0x4c,uVar8);
                *(undefined1 *)(unaff_EBP + -4) = 0x14;
                FUN_00414ebb();
                FUN_00414f29();
              }
              *(int *)(unaff_EBP + -100) = *(int *)(unaff_EBP + -100) + 1;
            }
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x44);
            *(undefined1 **)(unaff_EBP + -0x60) = &stack0xfffffffc;
            if (*(int **)(unaff_EBP + -0x10) != unaff_EBX) {
              (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
            }
            piStack_10 = (int *)0x6ffceb;
            FUN_006ff570();
            *(undefined1 *)(unaff_EBP + -4) = 0x18;
            FUN_004725b8();
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            FUN_0045f10c();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          if (*(int **)(unaff_EBP + -0x10) != unaff_EBX) {
            (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
          }
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
          goto LAB_006ffb2e;
        }
        piStack_10 = (int *)0x6ffbfc;
        FUN_006fe99b();
        piStack_10 = (int *)&stack0xfffffff8;
        *(undefined1 **)(unaff_EBP + -0x60) = &stack0xfffffff8;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_10 = (int *)0x6ffc29;
        FUN_0040263d();
        piStack_10 = (int *)0x6ffc30;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        uVar8 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x3c) = uVar8;
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        piStack_10 = (int *)0x6ffc4d;
        iVar6 = FUN_00402bc3();
        if (iVar6 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        in_EAX = *(int *)(DAT_00978368 + 0x3308);
        (**(code **)(*DAT_00978358 + 4))();
        FUN_004bf0d4();
        piStack_10 = *(int **)(unaff_EBP + -0x54);
        iVar6 = FUN_006fc790(*(undefined4 *)(unaff_EBP + -0x44));
        iVar6 = FUN_0062d669(*(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(iVar6 + 0x18));
        if (iVar6 == 0) goto LAB_006ffca0;
        *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x44);
        *(int **)(unaff_EBP + -0x40) = unaff_EBX;
        *(undefined1 **)(unaff_EBP + -0x60) = &stack0xfffffffc;
        if (*(int **)(unaff_EBP + -0x10) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
        }
        piStack_10 = (int *)0x6ffe41;
        FUN_006ff570();
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        FUN_004725b8();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        FUN_0045f10c();
        (**(code **)(*DAT_00978358 + 4))();
        FUN_004bf0d4();
        piStack_10 = *(int **)(unaff_EBP + -0x54);
        iVar6 = FUN_0062d669(*(undefined4 *)(unaff_EBP + -0x44),unaff_EBX);
        unaff_ESI = (uint)(iVar6 != 0);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (*(int **)(unaff_EBP + -0x10) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
        }
LAB_006ffea4:
        sVar10 = (short)unaff_EBX;
        if ((int)unaff_EBX < *(int *)(unaff_EBP + -100)) {
          if (*(int **)(unaff_EBP + -0x48) == unaff_EBX) {
            iVar6 = 0;
          }
          else {
            iVar6 = (*(int **)(unaff_EBP + -0x48))[-1];
          }
          if (*(int *)(unaff_EBP + -100) == iVar6) {
            *(undefined4 *)(unaff_EBP + -0x40) = 2;
            unaff_ESI = 4;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x40) = 1;
            if ((short)*(undefined4 *)(unaff_EBP + -0x14) != sVar10) {
              iVar6 = FUN_0062d62d();
              if (iVar6 != 0) goto LAB_006fff23;
              FUN_006fcb31();
              piStack_10 = (int *)0x6ffefb;
              iVar6 = FUN_0062dfd9();
              if (iVar6 == 0) {
                unaff_ESI = 3;
                goto LAB_006fff54;
              }
            }
            unaff_ESI = 2;
          }
        }
        else {
          in_EAX = *(int *)(unaff_EBP + -0x14);
          if ((short)in_EAX == sVar10) {
            if (*(int *)(unaff_EBP + -0x40) < (int)unaff_EBX) goto LAB_0070009c;
          }
          else {
            *(undefined4 *)(unaff_EBP + -0x40) = 1;
            iVar6 = FUN_0062d62d();
            if (iVar6 == 0) {
              FUN_006fcb31();
              piStack_10 = (int *)0x6fff40;
              iVar6 = FUN_0062dfd9();
              unaff_ESI = 3 - (iVar6 != 0);
            }
            else {
LAB_006fff23:
              unaff_ESI = 5;
            }
          }
        }
LAB_006fff54:
      } while (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x588) != *(int *)(unaff_EBP + -0x40));
      iVar6 = *(int *)(unaff_EBP + -0x98 + *(int *)(unaff_EBP + -0x40) * 4);
      if (*(int **)(iVar6 + *(int *)(unaff_EBP + -0x3c) * 4) == unaff_EBX) {
        *(undefined4 *)(iVar6 + *(int *)(unaff_EBP + -0x3c) * 4) = 1;
      }
      in_EAX = *(int *)(unaff_EBP + -0x1c) + 0x5f8;
      iVar6 = FUN_004b8f25();
      if (iVar6 == 0) {
        iVar6 = FUN_004b8f75();
        *(undefined4 *)(iVar6 + 0xc) = 1;
      }
      else {
        iVar6 = FUN_004b8f75();
        *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 1;
      }
      iVar6 = FUN_00701f1e();
    } while (iVar6 != 0);
    *(int **)(unaff_EBP + -0x20) = unaff_EBX;
    FUN_00705d79();
    sVar4 = (short)*(undefined4 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    if (sVar4 == sVar10) {
      sVar4 = (short)*(undefined4 *)(unaff_EBP + -0x30);
    }
    **(short **)(unaff_EBP + -0x20) = sVar4;
    *(uint *)(*(int *)(unaff_EBP + -0x20) + 4) = unaff_ESI;
    *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 8) = *(undefined4 *)(unaff_EBP + -0x3c);
    FUN_00414f8b();
    FUN_00414f8b();
    FUN_00414f8b();
    FUN_004725b8();
    iVar6 = FUN_0062d62d();
    if ((iVar6 == 0) || (uVar8 = 1, *(int *)(unaff_EBP + -0x40) != 1)) {
      uVar8 = 0;
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x24) = uVar8;
    in_EAX = FUN_00706002();
  } while( true );
}


