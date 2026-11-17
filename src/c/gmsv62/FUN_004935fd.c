/* FUN_004935fd - 0x004935fd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004935fd(void)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_ECX;
  int unaff_EBP;
  int iVar8;
  bool bVar9;
  int iStack_8c;
  int iStack_88;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(extraout_ECX + 0x164) = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x68) = 0;
  *(undefined4 *)(unaff_EBP + -0x74) = 1;
  *(undefined4 *)(unaff_EBP + -0x70) = 0;
  *(undefined4 *)(unaff_EBP + -0x6c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar4 = (int *)(extraout_ECX + 0x70);
  *(undefined4 *)(unaff_EBP + -0x1c) = 10;
  do {
    *(undefined4 *)(unaff_EBP + 8) = 3;
    do {
      if ((int *)*piVar4 != (int *)0x0) {
        iStack_88 = 0x493651;
        (**(code **)(*(int *)*piVar4 + 0xc))();
        iStack_88 = 0x493659;
        FUN_00450463();
      }
      piVar4 = piVar4 + 2;
      piVar1 = (int *)(unaff_EBP + 8);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
    piVar1 = (int *)(unaff_EBP + -0x1c);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  iVar8 = 0;
  if (0 < *(int *)(extraout_ECX + 0x164)) {
    do {
      iStack_8c = unaff_EBP + -0x84;
      iStack_88 = iVar8;
      FUN_004927e9();
      iStack_88 = 0x4cb;
      iStack_8c = unaff_EBP + -0x20;
      iStack_88 = FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_8c = 0x4936a5;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        iStack_88 = *(int *)(unaff_EBP + -0x20) + -0xc;
        iStack_8c = 0x4936b8;
        FUN_00403384();
      }
      iStack_88 = 0x578;
      iStack_8c = 0x4936c8;
      iVar5 = FUN_004029b9();
      *(int *)(unaff_EBP + 8) = iVar5;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar5 == 0) {
        iStack_88 = 0;
      }
      else {
        iStack_88 = 0x4936da;
        iStack_88 = FUN_0044f3fa();
      }
      iVar5 = *(int *)(unaff_EBP + -0x10) + iVar8 * 0x18;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_8c = 0x4936f3;
      FUN_00450382();
      iStack_88 = unaff_EBP + -0x74;
      iStack_8c = 0;
      (**(code **)(**(int **)(iVar5 + 0x70) + 0x20))
                (*(undefined4 *)(unaff_EBP + -0x10),iVar8 * 3 + 2000,
                 *(int *)(unaff_EBP + -0x84) + 0x50,*(int *)(unaff_EBP + -0x80) + 0x35);
      uVar6 = FUN_00679d86(unaff_EBP + -0x24,0x4cc);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00419192(uVar6);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        FUN_00403384(*(int *)(unaff_EBP + -0x24) + -0xc);
      }
      iVar7 = FUN_004029b9(0x578);
      *(int *)(unaff_EBP + 8) = iVar7;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (iVar7 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00450382(uVar6);
      puVar2 = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + (iVar8 * 3 + 0xf) * 8);
      piVar4 = (int *)*puVar2;
      *(undefined4 **)(unaff_EBP + -0x1c) = puVar2;
      (**(code **)(*piVar4 + 0x20))
                (*(undefined4 *)(unaff_EBP + -0x10),iVar8 * 3 + 0x7d1,
                 *(int *)(unaff_EBP + -0x84) + 0x77,*(int *)(unaff_EBP + -0x80) + 0x35,0,
                 unaff_EBP + -0x74);
      if (*(int *)(*(int *)(*(int *)(unaff_EBP + -0x10) + 0x210) + 0x500) == 9) {
        uVar6 = FUN_00679d86(unaff_EBP + -0x28,0x4ce);
        *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 2;
        *(undefined4 *)(unaff_EBP + -4) = 6;
      }
      else {
        uVar6 = FUN_00679d86(unaff_EBP + -0x2c,0x4cd);
        *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) | 1;
        *(undefined1 *)(unaff_EBP + -4) = 5;
      }
      FUN_00419192(uVar6);
      *(undefined4 *)(unaff_EBP + -4) = 5;
      if ((*(byte *)(unaff_EBP + -0x18) & 2) != 0) {
        *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffd;
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          FUN_00403384(*(int *)(unaff_EBP + -0x28) + -0xc);
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((*(byte *)(unaff_EBP + -0x18) & 1) != 0) {
        *(uint *)(unaff_EBP + -0x18) = *(uint *)(unaff_EBP + -0x18) & 0xfffffffe;
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          FUN_00403384(*(int *)(unaff_EBP + -0x2c) + -0xc);
        }
      }
      iVar7 = FUN_004029b9(0x578);
      *(int *)(unaff_EBP + 8) = iVar7;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (iVar7 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00450382(uVar6);
      (**(code **)(**(int **)(iVar5 + 0x80) + 0x20))
                (*(undefined4 *)(unaff_EBP + -0x10),iVar8 * 3 + 0x7d2,
                 *(int *)(unaff_EBP + -0x84) + 0x9e,*(int *)(unaff_EBP + -0x80) + 0x35,0,
                 unaff_EBP + -0x74);
      iStack_88 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x170 + iVar8 * 4);
      if (-1 < iStack_88) {
        iStack_8c = unaff_EBP + -0x34;
        FUN_004903a3();
        iStack_88 = *(int *)(unaff_EBP + -0x30);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (iStack_88 == 0) {
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iStack_88 = 0x4938e4;
          FUN_0045e46f();
        }
        else {
          *(undefined4 *)(unaff_EBP + -0x14) = DAT_00978368;
          *(int **)(unaff_EBP + 8) = &iStack_8c;
          iStack_8c = iStack_88;
          if (*(int *)(unaff_EBP + -0x30) != 0) {
            InterlockedIncrement((LONG *)(*(int *)(unaff_EBP + -0x30) + 4));
          }
          iVar7 = FUN_004945b5();
          if (iVar7 == 0) {
            bVar9 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x202c) == 1;
LAB_00493930:
            if (bVar9) {
              iStack_88 = 0;
              iStack_8c = 0x49393e;
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x70) + 4) + 0x1c))();
              iStack_8c = 0;
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x80) + 4) + 0x1c))();
            }
          }
          else if (iVar7 == 1) {
            bVar9 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x202c) == 0;
            goto LAB_00493930;
          }
          iStack_88 = 0x493958;
          iVar7 = FUN_0045e2eb();
          *(int *)(unaff_EBP + 8) = iVar7;
          if ((iVar7 / 100 == 0x2b70) && (*(int *)(unaff_EBP + 8) != 0x10f7c0)) {
LAB_0049399a:
            iStack_88 = 0;
            iStack_8c = 0x4939a8;
            (**(code **)(*(int *)(**(int **)(unaff_EBP + -0x1c) + 4) + 0x1c))();
          }
          else {
            iStack_88 = 0x49397c;
            iVar7 = FUN_0045e2eb();
            *(int *)(unaff_EBP + 8) = iVar7;
            if ((iVar7 / 100 == 0x2b78) && (*(int *)(unaff_EBP + 8) % 10 < 3)) goto LAB_0049399a;
          }
          iStack_88 = 0x4939b3;
          iVar7 = FUN_0045e2eb();
          if (iVar7 == 5400000) {
LAB_004939cc:
            iStack_88 = 0;
            iStack_8c = 0x4939da;
            (**(code **)(*(int *)(**(int **)(unaff_EBP + -0x1c) + 4) + 0x1c))();
          }
          else {
            iStack_88 = 0x4939c5;
            iVar7 = FUN_0045e2eb();
            if (iVar7 == 0x5269a8) goto LAB_004939cc;
          }
          iVar7 = *(int *)(*(int *)(unaff_EBP + -0x30) + 0xc);
          if (((79999999 < iVar7) && (iVar7 < 90000000)) ||
             (*(int *)(*(int *)(unaff_EBP + -0x30) + 0x20) == 0)) {
            iStack_88 = 0;
            iStack_8c = 0x493a03;
            (**(code **)(*(int *)(**(int **)(unaff_EBP + -0x1c) + 4) + 0x1c))();
            iStack_8c = 0;
            (**(code **)(*(int *)(*(int *)(iVar5 + 0x80) + 4) + 0x1c))();
          }
          iStack_88 = 0x493a1d;
          iVar7 = FUN_0045e2eb();
          if (iVar7 / 10000 == 0x1fb) {
            iStack_88 = unaff_EBP + -0x3c;
            iStack_8c = 0x493a38;
            iVar7 = FUN_00455c59();
            iStack_88 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x35);
            iStack_8c = *(int *)(iVar7 + 4) + 0x33;
            *(undefined1 *)(unaff_EBP + -4) = 9;
            bVar3 = FUN_0045f03e();
            *(char *)(unaff_EBP + 0xb) = '\x01' - (10 < bVar3);
            *(undefined1 *)(unaff_EBP + -4) = 8;
            if (*(int *)(unaff_EBP + -0x38) != 0) {
              iStack_88 = 0;
              iStack_8c = 0x493a6a;
              FUN_0045e7c2();
              *(undefined4 *)(unaff_EBP + -0x38) = 0;
            }
            if (*(char *)(unaff_EBP + 0xb) != '\0') {
              iStack_88 = 0;
              iStack_8c = 0x493a7e;
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x70) + 4) + 0x1c))();
              iStack_8c = 0;
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x80) + 4) + 0x1c))();
            }
          }
          iStack_88 = 0x493a98;
          iVar7 = FUN_0045e2eb();
          if ((iVar7 / 10000 == 0x202) || (iVar7 / 10000 == 0x1f7)) {
            iStack_88 = unaff_EBP + -0x44;
            iStack_8c = 0x493aba;
            iVar7 = FUN_00455c59();
            iStack_88 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x35);
            iStack_8c = *(int *)(iVar7 + 4) + 0x33;
            *(undefined1 *)(unaff_EBP + -4) = 10;
            bVar3 = FUN_0045f03e();
            if (bVar3 < 0x10) {
LAB_00493ae2:
              *(undefined1 *)(unaff_EBP + 0xb) = 1;
            }
            else {
              iStack_88 = 0x493adb;
              iVar7 = FUN_00455bfd();
              *(undefined1 *)(unaff_EBP + 0xb) = 0;
              if (iVar7 != 0) goto LAB_00493ae2;
            }
            *(undefined1 *)(unaff_EBP + -4) = 8;
            if (*(int *)(unaff_EBP + -0x40) != 0) {
              iStack_88 = 0;
              iStack_8c = 0x493af8;
              FUN_0045e7c2();
              *(undefined4 *)(unaff_EBP + -0x40) = 0;
            }
            if (*(char *)(unaff_EBP + 0xb) != '\0') {
              iStack_88 = 0;
              iStack_8c = 0x493b0c;
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x70) + 4) + 0x1c))();
              iStack_8c = 0;
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x80) + 4) + 0x1c))();
            }
          }
          iStack_88 = 0x493b26;
          iVar7 = FUN_0045e2eb();
          if (iVar7 / 10000 == 0x1f8) {
            iStack_88 = unaff_EBP + -0x4c;
            iStack_8c = 0x493b41;
            iVar7 = FUN_00455c59();
            iStack_88 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x35);
            iStack_8c = *(int *)(iVar7 + 4) + 0x33;
            *(undefined1 *)(unaff_EBP + -4) = 0xb;
            bVar3 = FUN_0045f03e();
            *(bool *)(unaff_EBP + 0xb) = bVar3 < 7;
            *(undefined1 *)(unaff_EBP + -4) = 8;
            if (*(int *)(unaff_EBP + -0x48) != 0) {
              iStack_88 = 0;
              iStack_8c = 0x493b6e;
              FUN_0045e7c2();
              *(undefined4 *)(unaff_EBP + -0x48) = 0;
            }
            if (*(char *)(unaff_EBP + 0xb) != '\0') {
              iStack_88 = 0;
              iStack_8c = 0x493b82;
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x70) + 4) + 0x1c))();
              iStack_8c = 0;
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x80) + 4) + 0x1c))();
            }
          }
          iStack_88 = 0x493b9c;
          iVar7 = FUN_0045e2eb();
          if (iVar7 / 10000 == 0x21b) {
            iStack_88 = unaff_EBP + -0x54;
            iStack_8c = 0x493bb7;
            iVar7 = FUN_00455c59();
            iStack_88 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x35);
            iStack_8c = *(int *)(iVar7 + 4) + 0x33;
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            bVar3 = FUN_0045f03e();
            if (bVar3 < 0xb) {
LAB_00493bdf:
              *(undefined1 *)(unaff_EBP + 0xb) = 1;
            }
            else {
              iStack_88 = 0x493bd8;
              iVar7 = FUN_00455bfd();
              *(undefined1 *)(unaff_EBP + 0xb) = 0;
              if (iVar7 != 0) goto LAB_00493bdf;
            }
            *(undefined1 *)(unaff_EBP + -4) = 8;
            if (*(int *)(unaff_EBP + -0x50) != 0) {
              iStack_88 = 0;
              iStack_8c = 0x493bf5;
              FUN_0045e7c2();
              *(undefined4 *)(unaff_EBP + -0x50) = 0;
            }
            if (*(char *)(unaff_EBP + 0xb) != '\0') {
              iStack_88 = 0;
              iStack_8c = 0x493c09;
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x70) + 4) + 0x1c))();
              iStack_8c = 0;
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x80) + 4) + 0x1c))();
            }
          }
          iStack_88 = 0x493c23;
          iVar7 = FUN_0045e2eb();
          if (iVar7 / 10000 == 0x208) {
            iStack_88 = unaff_EBP + -0x5c;
            iStack_8c = 0x493c3e;
            iVar7 = FUN_00455c59();
            iStack_88 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x35);
            iStack_8c = *(int *)(iVar7 + 4) + 0x33;
            *(undefined1 *)(unaff_EBP + -4) = 0xd;
            bVar3 = FUN_0045f03e();
            *(char *)(unaff_EBP + 0xb) = '\x01' - (0xf < bVar3);
            *(undefined1 *)(unaff_EBP + -4) = 8;
            if (*(int *)(unaff_EBP + -0x58) != 0) {
              iStack_88 = 0;
              iStack_8c = 0x493c70;
              FUN_0045e7c2();
              *(undefined4 *)(unaff_EBP + -0x58) = 0;
            }
            if (*(char *)(unaff_EBP + 0xb) != '\0') {
              iStack_88 = 0;
              iStack_8c = 0x493c84;
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x70) + 4) + 0x1c))();
              iStack_8c = 0;
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x80) + 4) + 0x1c))();
            }
          }
          iStack_88 = 0x493c9e;
          iVar7 = FUN_0045e2eb();
          if (iVar7 == 0x53c550) {
            iStack_88 = unaff_EBP + -100;
            iStack_8c = 0x493cb1;
            iVar7 = FUN_00455c59();
            iStack_88 = *(undefined4 *)(*(int *)(iVar7 + 4) + 0x35);
            iStack_8c = *(int *)(iVar7 + 4) + 0x33;
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            bVar3 = FUN_0045f03e();
            *(bool *)(unaff_EBP + 0xb) = bVar3 < 0x1e;
            *(undefined1 *)(unaff_EBP + -4) = 8;
            if (*(int *)(unaff_EBP + -0x60) != 0) {
              iStack_88 = 0;
              iStack_8c = 0x493cde;
              FUN_0045e7c2();
              *(undefined4 *)(unaff_EBP + -0x60) = 0;
            }
            if (*(char *)(unaff_EBP + 0xb) != '\0') {
              iStack_88 = 0;
              iStack_8c = 0x493cf2;
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x70) + 4) + 0x1c))();
              iStack_8c = 0;
              (**(code **)(*(int *)(*(int *)(iVar5 + 0x80) + 4) + 0x1c))();
            }
          }
          if ((*(int *)(*(int *)(unaff_EBP + -0x14) + 0x2050) == 0) &&
             (*(int *)(*(int *)(unaff_EBP + -0x30) + 0x34) != 0)) {
            iStack_88 = 0;
            iStack_8c = 0x493d20;
            (**(code **)(*(int *)(*(int *)(iVar5 + 0x70) + 4) + 0x1c))();
            iStack_8c = 0;
            (**(code **)(*(int *)(**(int **)(unaff_EBP + -0x1c) + 4) + 0x1c))();
          }
          iVar7 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x198 + iVar8 * 4);
          if ((iVar7 == 1) || (iVar7 == 2)) {
            iStack_88 = 0;
            iStack_8c = 0x493d4e;
            (**(code **)(*(int *)(*(int *)(iVar5 + 0x70) + 4) + 0x1c))();
            iStack_8c = 0;
            (**(code **)(*(int *)(**(int **)(unaff_EBP + -0x1c) + 4) + 0x1c))();
          }
          iVar7 = *(int *)(*(int *)(unaff_EBP + -0x10) + 0x1c0 + iVar8 * 4);
          if ((iVar7 == 1) || (iVar7 == 2)) {
            iStack_88 = 0;
            iStack_8c = 0x493d7c;
            (**(code **)(*(int *)(*(int *)(iVar5 + 0x70) + 4) + 0x1c))();
            iStack_8c = 0;
            (**(code **)(*(int *)(**(int **)(unaff_EBP + -0x1c) + 4) + 0x1c))();
          }
          iStack_88 = 0x493d95;
          iVar7 = FUN_0045e2eb();
          if ((iVar7 / 10000 == 0x38f) || (iVar7 / 10000 == 0x21f)) {
            iStack_88 = 0;
            iStack_8c = 0x493db9;
            (**(code **)(*(int *)(**(int **)(unaff_EBP + -0x1c) + 4) + 0x1c))();
          }
          iVar7 = *(int *)(unaff_EBP + -0x30);
          if (*(int *)(iVar7 + 0x40) == 0) {
            iStack_88 = 0;
            iStack_8c = 0x493dce;
            (**(code **)(*(int *)(*(int *)(iVar5 + 0x70) + 4) + 0x1c))();
            iStack_8c = 0;
            (**(code **)(*(int *)(**(int **)(unaff_EBP + -0x1c) + 4) + 0x1c))();
            iVar7 = *(int *)(unaff_EBP + -0x30);
            *(undefined1 *)(unaff_EBP + -4) = 0;
          }
          else {
            *(undefined1 *)(unaff_EBP + -4) = 0;
          }
          if (iVar7 != 0) {
            iStack_88 = 0;
            iStack_8c = 0x493df4;
            FUN_0045e794();
            *(undefined4 *)(unaff_EBP + -0x30) = 0;
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(*(int *)(unaff_EBP + -0x10) + 0x164));
  }
  iStack_88 = 0x493e10;
  FUN_004933dc();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_88 = 0x493e1c;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


