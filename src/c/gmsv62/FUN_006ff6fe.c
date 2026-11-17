/* FUN_006ff6fe - 0x006ff6fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006ff6fe(void)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  int iVar9;
  int unaff_EBP;
  int iVar10;
  undefined1 *puVar11;
  undefined1 *puStack_f0;
  uint uVar12;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0x5cc;
  do {
    FUN_00705fc6();
    iVar10 = 0;
    while( true ) {
      if (*(int *)(DAT_0097926c + 0x80) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(DAT_0097926c + 0x80) + -4);
      }
      if (iVar4 <= iVar10) break;
      FUN_00701f6d();
      iVar10 = iVar10 + 1;
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
  } while (*(int *)(unaff_EBP + -0x18) < 3);
  FUN_005d10de();
  *(int *)(unaff_EBP + -0x28) = DAT_0097926c;
  iVar10 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(iVar10 + 4);
  FUN_0045e4a2();
  uVar5 = FUN_0083cbf6();
  *(undefined4 *)(unaff_EBP + -0x34) = uVar5;
  FUN_00700545();
  puStack_f0 = (undefined1 *)0x4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0087b2f0(unaff_EBP + -0x98);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar10 = unaff_EBP + -0x98;
  *(undefined4 *)(unaff_EBP + -0x30) = 3;
  do {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    while( true ) {
      if (*(int *)(DAT_0097926c + 0x80) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(DAT_0097926c + 0x80) + -4);
      }
      if (iVar4 <= *(int *)(unaff_EBP + -0x14)) break;
      puVar6 = (undefined4 *)FUN_00524ee9();
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      *puVar6 = 0;
    }
    iVar10 = iVar10 + 4;
    piVar8 = (int *)(unaff_EBP + -0x30);
    *piVar8 = *piVar8 + -1;
  } while (*piVar8 != 0);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar4 = extraout_ECX;
  while ((iVar7 = *(int *)(unaff_EBP + -0x7c), iVar7 != 0 &&
         (*(uint *)(unaff_EBP + -0x18) < *(uint *)(iVar7 + -4)))) {
    uVar2 = *(ushort *)(iVar7 + *(uint *)(unaff_EBP + -0x18) * 2);
    iVar10 = CONCAT22((short)((uint)iVar10 >> 0x10),uVar2);
    *(int *)(unaff_EBP + -0x38) = iVar10;
    FUN_0087a1b0();
    puStack_f0 = (undefined1 *)(uint)uVar2;
    puStack_f0 = (undefined1 *)FUN_00412335();
    *(undefined1 **)(unaff_EBP + -0x58) = &stack0xffffff14;
    FUN_004033a1();
    puStack_f0 = (undefined1 *)(unaff_EBP + -0xb0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar7 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x30) = iVar7;
    *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    if (((iVar7 != 0) && (iVar7 = FUN_00404b30(), iVar7 < 0)) && (iVar7 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      FUN_00878dfb();
    }
    puStack_f0 = &stack0xffffff18;
    *(undefined1 **)(unaff_EBP + -0x58) = &stack0xffffff18;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_f0 = (undefined1 *)0x6ff8f1;
    FUN_0040263d();
    puStack_f0 = (undefined1 *)0x6ff8f8;
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_004343c5();
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar7 = FUN_00402bc3();
    if (iVar7 < 0) {
      FUN_00878dfb();
    }
    if ((*(char **)(unaff_EBP + -0x3c) == (char *)0x0) || (**(char **)(unaff_EBP + -0x3c) == '\0'))
    {
      iVar10 = *(int *)(unaff_EBP + -0x54);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x38);
      iVar7 = FUN_005ee726();
      if (iVar7 == 0) {
        iVar7 = FUN_005ee6cd();
        if (iVar7 != 0) {
          iVar4 = 2;
          goto LAB_006ff9d0;
        }
        iVar10 = *(int *)(DAT_00978368 + 0x3308);
        (**(code **)(*DAT_00978358 + 4))();
        FUN_004bf0d4();
        puStack_f0 = *(undefined1 **)(unaff_EBP + -0x54);
        iVar7 = FUN_006fc790(*(undefined4 *)(unaff_EBP + -0x38));
        iVar7 = FUN_0062d669(*(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(iVar7 + 0x18));
        if (iVar7 != 0) {
          iVar4 = 0;
          goto LAB_006ff9d0;
        }
LAB_006ffa97:
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00414ebb();
        goto LAB_006ffaa3;
      }
      iVar4 = 1;
LAB_006ff9d0:
      if (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x588) == iVar4) {
        puStack_f0 = &stack0xffffff18;
        *(undefined1 **)(unaff_EBP + -0x58) = &stack0xffffff18;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        puStack_f0 = (undefined1 *)0x6ffa2e;
        FUN_0040263d();
        puStack_f0 = (undefined1 *)0x6ffa35;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iVar10 = FUN_00412550();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        puStack_f0 = (undefined1 *)0x6ffa51;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          FUN_00878dfb();
        }
        iVar7 = *(int *)(unaff_EBP + -0x98 + iVar4 * 4);
        if (*(int *)(iVar7 + iVar10 * 4) == 0) {
          *(undefined4 *)(iVar7 + iVar10 * 4) = 1;
        }
        puStack_f0 = (undefined1 *)(unaff_EBP + -0x2c);
        *(undefined1 **)(unaff_EBP + -0x58) = &stack0xffffff14;
        FUN_00424dbc();
        puStack_f0 = *(undefined1 **)(unaff_EBP + -0x38);
        FUN_006ff152(iVar4);
        iVar4 = *(int *)(unaff_EBP + -0x1c);
        goto LAB_006ffa97;
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x3c) != 0) {
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004027eb();
      iVar4 = *(int *)(unaff_EBP + -0x1c);
    }
    else {
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00434e38();
LAB_006ffaa3:
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004027eb();
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  }
  piVar8 = *(int **)(*(int *)(unaff_EBP + -0x28) + 8);
  if (piVar8 != (int *)0x0) {
    piVar1 = piVar8 + *(int *)(*(int *)(unaff_EBP + -0x28) + 0xc);
    for (; piVar8 < piVar1; piVar8 = piVar8 + 1) {
      if (*piVar8 != 0) {
        iVar10 = *piVar8;
        goto LAB_006ffadd;
      }
    }
  }
  iVar10 = 0;
LAB_006ffadd:
  *(int *)(unaff_EBP + -0x80) = iVar10;
  if (iVar10 != 0) {
    uVar12 = *(uint *)(unaff_EBP + -0x58);
    do {
      *(undefined4 *)(unaff_EBP + -0x40) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      *(undefined4 *)(unaff_EBP + -0x4c) = 0;
      *(undefined4 *)(unaff_EBP + -0x50) = 0;
      *(undefined4 *)(unaff_EBP + -100) = 0;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_0062f645();
      *(undefined4 *)(unaff_EBP + -0x38) = 0;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
LAB_006ffb2e:
      iVar10 = *(int *)(unaff_EBP + -0x48);
      if ((iVar10 == 0) || (*(uint *)(iVar10 + -4) <= *(uint *)(unaff_EBP + -0x18)))
      goto LAB_006ffea4;
      uVar2 = *(ushort *)(iVar10 + *(uint *)(unaff_EBP + -0x18) * 2);
      *(uint *)(unaff_EBP + -0x44) = CONCAT22((short)((uint)iVar4 >> 0x10),uVar2);
      FUN_0087a1b0();
      puStack_f0 = (undefined1 *)(uint)uVar2;
      puStack_f0 = (undefined1 *)FUN_00412335();
      *(undefined1 **)(unaff_EBP + -0x60) = &stack0xffffff14;
      FUN_004033a1();
      puStack_f0 = (undefined1 *)(unaff_EBP - 0xc0);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      iVar10 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x8c) = iVar10;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if ((iVar10 != 0) && ((iVar10 = FUN_00404b30(), iVar10 < 0 && (iVar10 != -0x7fffbffe)))) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      iVar10 = FUN_00402bc3();
      if (iVar10 < 0) {
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x18) != 0) {
LAB_006ffca0:
        iVar4 = *(int *)(unaff_EBP + -0x54);
        *(undefined4 *)(unaff_EBP + -0x60) = *(undefined4 *)(unaff_EBP + -0x44);
        iVar10 = FUN_005ee726();
        if (iVar10 == 0) {
          iVar10 = FUN_005ee6cd();
          if (iVar10 != 0) {
            *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x44);
            *(undefined1 **)(unaff_EBP + -0x60) = &stack0xffffff1c;
            if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
              (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
            }
            puStack_f0 = (undefined1 *)0x6ffd59;
            FUN_006ff570();
            *(undefined1 *)(unaff_EBP + -4) = 0x19;
            FUN_004725b8();
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            FUN_0045f10c();
            if (*(int *)(unaff_EBP + -0x48) == 0) {
              iVar10 = 0;
            }
            else {
              iVar10 = *(int *)(*(int *)(unaff_EBP + -0x48) + -4);
            }
            if (*(int *)(unaff_EBP + -0x18) == iVar10 + -1) {
              FileTimeToSystemTime((FILETIME *)(unaff_EBP + -200),(LPSYSTEMTIME)(unaff_EBP + -0xb0))
              ;
              puVar6 = (undefined4 *)FUN_00679d22();
              uVar5 = *puVar6;
              puStack_f0 = (undefined1 *)(uint)*(ushort *)(unaff_EBP + -0xb0);
              *(undefined1 *)(unaff_EBP + -4) = 0x1a;
              FUN_00434e21(unaff_EBP + -0x4c,uVar5);
              *(undefined1 *)(unaff_EBP + -4) = 0x14;
              FUN_00414ebb();
              FUN_00414f29();
            }
            *(int *)(unaff_EBP + -100) = *(int *)(unaff_EBP + -100) + 1;
          }
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x44);
          *(undefined1 **)(unaff_EBP + -0x60) = &stack0xffffff1c;
          if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
            (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
          }
          puStack_f0 = (undefined1 *)0x6ffceb;
          FUN_006ff570();
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          FUN_004725b8();
          *(undefined1 *)(unaff_EBP + -4) = 0x14;
          FUN_0045f10c();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
        }
        *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        goto LAB_006ffb2e;
      }
      puStack_f0 = (undefined1 *)0x6ffbfc;
      FUN_006fe99b();
      puStack_f0 = &stack0xffffff18;
      *(undefined1 **)(unaff_EBP + -0x60) = &stack0xffffff18;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_f0 = (undefined1 *)0x6ffc29;
      FUN_0040263d();
      puStack_f0 = (undefined1 *)0x6ffc30;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      uVar5 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x3c) = uVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_f0 = (undefined1 *)0x6ffc4d;
      iVar10 = FUN_00402bc3();
      if (iVar10 < 0) {
        FUN_00878dfb();
      }
      iVar4 = *(int *)(DAT_00978368 + 0x3308);
      (**(code **)(*DAT_00978358 + 4))();
      FUN_004bf0d4();
      puStack_f0 = *(undefined1 **)(unaff_EBP + -0x54);
      iVar10 = FUN_006fc790(*(undefined4 *)(unaff_EBP + -0x44));
      iVar10 = FUN_0062d669(*(undefined4 *)(unaff_EBP + -0x44),*(undefined4 *)(iVar10 + 0x18));
      if (iVar10 == 0) goto LAB_006ffca0;
      *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(unaff_EBP + -0x44);
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
      *(undefined1 **)(unaff_EBP + -0x60) = &stack0xffffff1c;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
      }
      puStack_f0 = (undefined1 *)0x6ffe41;
      FUN_006ff570();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      FUN_004725b8();
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      FUN_0045f10c();
      (**(code **)(*DAT_00978358 + 4))();
      FUN_004bf0d4();
      puStack_f0 = *(undefined1 **)(unaff_EBP + -0x54);
      iVar10 = FUN_0062d669(*(undefined4 *)(unaff_EBP + -0x44),0);
      uVar12 = (uint)(iVar10 != 0);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
LAB_006ffea4:
      if (*(int *)(unaff_EBP + -100) < 1) {
        iVar4 = *(int *)(unaff_EBP + -0x14);
        if ((short)iVar4 != 0) {
          *(undefined4 *)(unaff_EBP + -0x40) = 1;
          iVar10 = FUN_0062d62d();
          if (iVar10 == 0) {
            FUN_006fcb31();
            puStack_f0 = (undefined1 *)0x6fff40;
            iVar10 = FUN_0062dfd9();
            uVar12 = 3 - (iVar10 != 0);
          }
          else {
LAB_006fff23:
            uVar12 = 5;
          }
          goto LAB_006fff54;
        }
        if (-1 < *(int *)(unaff_EBP + -0x40)) goto LAB_006fff54;
      }
      else {
        if (*(int *)(unaff_EBP + -0x48) == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(*(int *)(unaff_EBP + -0x48) + -4);
        }
        if (*(int *)(unaff_EBP + -100) == iVar10) {
          *(undefined4 *)(unaff_EBP + -0x40) = 2;
          uVar12 = 4;
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x40) = 1;
          if ((short)*(undefined4 *)(unaff_EBP + -0x14) != 0) {
            iVar10 = FUN_0062d62d();
            if (iVar10 != 0) goto LAB_006fff23;
            FUN_006fcb31();
            puStack_f0 = (undefined1 *)0x6ffefb;
            iVar10 = FUN_0062dfd9();
            if (iVar10 == 0) {
              uVar12 = 3;
              goto LAB_006fff54;
            }
          }
          uVar12 = 2;
        }
LAB_006fff54:
        if (*(int *)(*(int *)(unaff_EBP + -0x1c) + 0x588) == *(int *)(unaff_EBP + -0x40)) {
          iVar10 = *(int *)(unaff_EBP + -0x98 + *(int *)(unaff_EBP + -0x40) * 4);
          if (*(int *)(iVar10 + *(int *)(unaff_EBP + -0x3c) * 4) == 0) {
            *(undefined4 *)(iVar10 + *(int *)(unaff_EBP + -0x3c) * 4) = 1;
          }
          iVar4 = *(int *)(unaff_EBP + -0x1c) + 0x5f8;
          iVar10 = FUN_004b8f25();
          if (iVar10 == 0) {
            iVar10 = FUN_004b8f75();
            *(undefined4 *)(iVar10 + 0xc) = 1;
          }
          else {
            iVar10 = FUN_004b8f75();
            *(int *)(iVar10 + 0xc) = *(int *)(iVar10 + 0xc) + 1;
          }
          iVar10 = FUN_00701f1e();
          if (iVar10 == 0) {
            *(undefined4 *)(unaff_EBP + -0x20) = 0;
            FUN_00705d79();
            sVar3 = (short)*(undefined4 *)(unaff_EBP + -0x14);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            if (sVar3 == 0) {
              sVar3 = (short)*(undefined4 *)(unaff_EBP + -0x30);
            }
            **(short **)(unaff_EBP + -0x20) = sVar3;
            *(uint *)(*(int *)(unaff_EBP + -0x20) + 4) = uVar12;
            *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 8) = *(undefined4 *)(unaff_EBP + -0x3c);
            FUN_00414f8b();
            FUN_00414f8b();
            FUN_00414f8b();
            FUN_004725b8();
            iVar10 = FUN_0062d62d();
            if ((iVar10 == 0) || (uVar5 = 1, *(int *)(unaff_EBP + -0x40) != 1)) {
              uVar5 = 0;
            }
            *(undefined4 *)(*(int *)(unaff_EBP + -0x20) + 0x24) = uVar5;
            iVar4 = FUN_00706002();
            FUN_00705dac();
            FUN_00705dc9();
            *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(unaff_EBP + -0x20);
            *(undefined1 *)(unaff_EBP + -4) = 0x10;
            if (*(int *)(unaff_EBP + -0x20) != 0) {
              FUN_00705e5b();
              *(undefined4 *)(unaff_EBP + -0x20) = 0;
            }
          }
        }
      }
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
    } while (*(int *)(unaff_EBP + -0x80) != 0);
  }
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  piVar8 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x5cc);
  *(undefined4 *)(unaff_EBP + -0x34) = 3;
  do {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    while( true ) {
      if (*piVar8 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(*piVar8 + -4);
      }
      if (iVar10 + -1 <= *(int *)(unaff_EBP + -0x10)) break;
      iVar10 = *(int *)(unaff_EBP + -0x10) + 1;
      *(int *)(unaff_EBP + -0x30) = iVar10;
      iVar4 = iVar10;
      while( true ) {
        iVar7 = *piVar8;
        if (iVar7 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *(int *)(iVar7 + -4);
        }
        if (iVar9 <= iVar4) break;
        if (*(int *)(*(int *)(iVar7 + 4 + iVar4 * 8) + 8) <
            *(int *)(*(int *)(iVar7 + 4 + *(int *)(unaff_EBP + -0x10) * 8) + 8)) {
          FUN_00705b42();
          FUN_00705b42();
          FUN_00705b42();
        }
        iVar10 = *(int *)(unaff_EBP + -0x30);
        iVar4 = iVar4 + 1;
      }
      *(int *)(unaff_EBP + -0x10) = iVar10;
    }
    piVar8 = piVar8 + 1;
    piVar1 = (int *)(unaff_EBP + -0x34);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  piVar8 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x5cc);
  *(undefined4 *)(unaff_EBP + -0x34) = 3;
  do {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    while( true ) {
      if (*piVar8 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(*piVar8 + -4);
      }
      if (iVar10 + -1 <= *(int *)(unaff_EBP + -0x10)) break;
      iVar10 = *(int *)(unaff_EBP + -0x10) + 1;
      *(int *)(unaff_EBP + -0x30) = iVar10;
      *(int *)(unaff_EBP + -0x14) = iVar10;
      while( true ) {
        iVar10 = *piVar8;
        if (iVar10 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(iVar10 + -4);
        }
        if (iVar4 <= *(int *)(unaff_EBP + -0x14)) break;
        if (*(int *)(*(int *)(iVar10 + 4 + *(int *)(unaff_EBP + -0x10) * 8) + 8) ==
            *(int *)(*(int *)(iVar10 + 4 + *(int *)(unaff_EBP + -0x14) * 8) + 8)) {
          iVar10 = FUN_006fc790();
          *(undefined4 *)(unaff_EBP + -0x58) = *(undefined4 *)(iVar10 + 0x1c);
          iVar10 = FUN_006fc790();
          if (*(uint *)(iVar10 + 0x1c) < *(uint *)(unaff_EBP + -0x58)) {
            FUN_00705b42();
            FUN_00705b42();
            FUN_00705b42();
          }
        }
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      }
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + -0x30);
    }
    piVar8 = piVar8 + 1;
    piVar1 = (int *)(unaff_EBP + -0x34);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  *(int *)(unaff_EBP + -0x30) = unaff_EBP + -0x98;
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x1c) + 0x5cc;
  *(undefined4 *)(unaff_EBP + -0x34) = 3;
  do {
    iVar10 = 0;
    while( true ) {
      if (*(int *)(DAT_0097926c + 0x80) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(DAT_0097926c + 0x80) + -4);
      }
      if (iVar4 <= iVar10) break;
      if (*(int *)(**(int **)(unaff_EBP + -0x30) + iVar10 * 4) != 0) {
        uVar12 = 0;
        while (((iVar4 = **(int **)(unaff_EBP + -0x14), iVar4 != 0 &&
                (uVar12 < *(uint *)(iVar4 + -4))) &&
               (*(int *)(*(int *)(iVar4 + 4 + uVar12 * 8) + 8) < iVar10))) {
          uVar12 = uVar12 + 1;
        }
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        FUN_00705d79();
        **(undefined2 **)(unaff_EBP + -0x20) = (short)iVar10;
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        *(int *)(*(int *)(unaff_EBP + -0x20) + 8) = iVar10;
        iVar4 = FUN_00706002();
        FUN_00705dac();
        FUN_00705dc9();
        *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        if (*(int *)(unaff_EBP + -0x20) != 0) {
          FUN_00705e5b();
          *(undefined4 *)(unaff_EBP + -0x20) = 0;
        }
      }
      iVar10 = iVar10 + 1;
    }
    *(int *)(unaff_EBP + -0x30) = *(int *)(unaff_EBP + -0x30) + 4;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
    piVar8 = (int *)(unaff_EBP + -0x34);
    *piVar8 = *piVar8 + -1;
  } while (*piVar8 != 0);
  puVar6 = (undefined4 *)FUN_004029b9();
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    *puVar6 = &PTR_LAB_008e84a0;
    puStack_f0 = (undefined1 *)0x700345;
    _memset(puVar6,0,0xc);
    *puVar6 = &PTR_FUN_008e8ea8;
    puVar6[4] = 0x109;
    puVar6[3] = 1;
  }
  *(undefined4 **)(unaff_EBP + -0x84) = puVar6;
  if (puVar6 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar6 + 1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  do {
    piVar8 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x5cc + *(int *)(unaff_EBP + -0x18) * 4);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(int **)(unaff_EBP + -0x58) = piVar8;
    while( true ) {
      if (*piVar8 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(*piVar8 + -4);
      }
      if (iVar10 <= *(int *)(unaff_EBP + -0x10)) break;
      *(undefined4 *)(unaff_EBP + -0x20) =
           *(undefined4 *)(*piVar8 + *(int *)(unaff_EBP + -0x10) * 8 + 4);
      FUN_00705dac();
      iVar10 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (iVar10 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(iVar10 + -4);
      }
      FUN_00705f75();
      FUN_0056a92f();
      puVar11 = (undefined1 *)0x0;
      if (0 < iVar10) {
        do {
          FUN_00701d8e();
          if (*(int *)(unaff_EBP + -0x18) == 1) {
            FUN_00701d8e();
          }
          puStack_f0 = (undefined1 *)0x70041d;
          FUN_00705b3e();
          puStack_f0 = (undefined1 *)0x700427;
          FUN_007063cf();
          puStack_f0 = puVar11;
          FUN_00705b3e();
          uVar5 = FUN_004726fc();
          *(undefined1 ***)(unaff_EBP + -0x78) = &puStack_f0;
          puStack_f0 = extraout_ECX_00;
          FUN_00450368(uVar5);
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          FUN_004503f5();
          uVar5 = FUN_007e3c88();
          *(undefined4 *)(*(int *)(*(int *)(unaff_EBP + -0x20) + 0x1c) + (int)puVar11 * 4) = uVar5;
          puVar11 = puVar11 + 1;
        } while ((int)puVar11 < iVar10);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1e;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        FUN_00705e5b();
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
      }
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      piVar8 = *(int **)(unaff_EBP + -0x58);
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
  } while (*(int *)(unaff_EBP + -0x18) < 3);
  piVar8 = (int *)(*(int *)(unaff_EBP + -0x1c) + 0x5cc);
  iVar10 = *piVar8;
  if (((iVar10 != 0) && (*(int *)(iVar10 + -4) != 0)) && (DAT_0097bdb0 == 0)) {
    for (uVar12 = 0; (iVar10 = *piVar8, iVar10 != 0 && (uVar12 < *(uint *)(iVar10 + -4)));
        uVar12 = uVar12 + 1) {
      FUN_006fbf25();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (*(int *)(unaff_EBP + -0x84) != 0) {
    FUN_004504e6();
    *(undefined4 *)(unaff_EBP + -0x84) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x6c) != 0) {
    FUN_00705e5b();
    *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_f0 = (undefined1 *)(unaff_EBP + -0x98);
  FUN_0087a0b8();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_005ee767();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


