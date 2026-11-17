/* FUN_0070566b - 0x0070566b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0070566b(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  size_t sVar5;
  int *piVar6;
  int *extraout_ECX;
  undefined4 uVar7;
  int iVar8;
  int unaff_EBP;
  int *piVar9;
  
  FUN_00879bb8();
  iVar8 = *extraout_ECX;
  *(int **)(unaff_EBP + -0x28) = extraout_ECX;
  if (iVar8 == 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    piVar6 = extraout_ECX + 2;
    do {
      iVar8 = 0;
      piVar9 = piVar6;
      do {
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          iVar3 = (**(code **)(*(int *)*piVar9 + 4))();
          if (iVar3 != 0) goto LAB_007056ab;
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
        }
        else {
LAB_007056ab:
          *(undefined4 *)(unaff_EBP + -0x18) = 1;
        }
        iVar3 = (**(code **)(*(int *)*piVar9 + 0xc))();
        if (iVar3 == 0) goto LAB_007057c4;
        iVar8 = iVar8 + 1;
        piVar9 = piVar9 + 2;
      } while (iVar8 < 3);
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      piVar6 = piVar6 + 6;
    } while (*(int *)(unaff_EBP + -0x10) < 5);
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      *(undefined4 *)(unaff_EBP + -0x4c) = 0;
      *(undefined4 *)(unaff_EBP + -0x48) = 0;
      *(undefined4 *)(unaff_EBP + -0x44) = 0;
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
      *(undefined4 *)(unaff_EBP + -0x3c) = 0;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      *(undefined4 *)(unaff_EBP + -0x20) = 0;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      puVar4 = (undefined4 *)(unaff_EBP + -0x4c);
      iVar8 = *(int *)(unaff_EBP + -0x28) + 4;
      do {
        iVar3 = FUN_007055ef(iVar8,unaff_EBP + -0x2c,unaff_EBP + -0x30);
        if (iVar3 == 0) goto LAB_007057c4;
        iVar3 = *(int *)(unaff_EBP + -0x2c);
        iVar1 = *(int *)(unaff_EBP + -0x30);
        if ((-1 < iVar3) || (-1 < iVar1)) {
          if (*(int *)(unaff_EBP + -0x24) == 0) {
            *(int *)(unaff_EBP + -0x18) = iVar3;
            *(int *)(unaff_EBP + -0x20) = iVar1;
            *puVar4 = 1;
            *(undefined4 *)(unaff_EBP + -0x24) = 1;
          }
          else {
            if ((*(int *)(unaff_EBP + -0x18) != iVar3) || (*(int *)(unaff_EBP + -0x20) != iVar1))
            goto LAB_007057c4;
            *puVar4 = 1;
          }
        }
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
        iVar8 = iVar8 + 0x18;
        puVar4 = puVar4 + 1;
      } while (*(int *)(unaff_EBP + -0x10) < 5);
      uVar7 = *(undefined4 *)(unaff_EBP + 8);
      FUN_00414f29();
      iVar8 = *(int *)(unaff_EBP + -0x20);
      if (iVar8 == *(int *)(unaff_EBP + -0x18)) {
        if (iVar8 == -1) {
          puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0xc5e);
          uVar2 = *puVar4;
          *(undefined4 *)(unaff_EBP + -4) = 0;
          FUN_00434e21(uVar7,uVar2);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else if (iVar8 == 0) {
          puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0xc5f);
          uVar2 = *puVar4;
          *(undefined4 *)(unaff_EBP + -4) = 1;
          FUN_00434e21(uVar7,uVar2);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else if (iVar8 == 1) {
          puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x24,0xc60);
          uVar2 = *puVar4;
          *(undefined4 *)(unaff_EBP + -4) = 2;
          FUN_00434e21(uVar7,uVar2);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else {
          if (iVar8 != 2) goto LAB_00705917;
          puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0xc61);
          uVar2 = *puVar4;
          *(undefined4 *)(unaff_EBP + -4) = 3;
          FUN_00434e21(uVar7,uVar2);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
LAB_00705912:
        FUN_00414ebb();
      }
      else if (iVar8 < *(int *)(unaff_EBP + -0x18)) {
        if (iVar8 == -1) {
          puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x18,0xc63);
          uVar2 = *puVar4;
          *(undefined4 *)(unaff_EBP + -4) = 4;
          FUN_00434e21(uVar7,uVar2);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else if (iVar8 == 0) {
          puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0xc64);
          uVar2 = *puVar4;
          *(undefined4 *)(unaff_EBP + -4) = 5;
          FUN_00434e21(uVar7,uVar2);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else if (iVar8 == 1) {
          puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x24,0xc65);
          uVar2 = *puVar4;
          *(undefined4 *)(unaff_EBP + -4) = 6;
          FUN_00434e21(uVar7,uVar2);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        else {
          if (iVar8 != 2) goto LAB_00705917;
          puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0xc66);
          uVar2 = *puVar4;
          *(undefined4 *)(unaff_EBP + -4) = 7;
          FUN_00434e21(uVar7,uVar2);
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        }
        goto LAB_00705912;
      }
LAB_00705917:
      sVar5 = _strlen(&DAT_00964364);
      FUN_0045efbb(&DAT_00964364,sVar5);
      iVar8 = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 8;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      do {
        if (*(int *)(unaff_EBP + -0x4c + iVar8) == 0) {
          if ((*(char **)(unaff_EBP + -0x1c) == (char *)0x0) ||
             (**(char **)(unaff_EBP + -0x1c) == '\0')) {
            FUN_00414f8b((int)&DAT_00978564 + iVar8);
          }
        }
        else {
          if ((*(char **)(unaff_EBP + -0x14) != (char *)0x0) &&
             (**(char **)(unaff_EBP + -0x14) != '\0')) {
            sVar5 = _strlen(&DAT_00965738);
            FUN_0045efbb(&DAT_00965738,sVar5);
          }
          iVar3 = *(int *)((int)&DAT_00978564 + iVar8);
          if (iVar3 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = *(undefined4 *)(iVar3 + -4);
          }
          FUN_0045efbb(iVar3,uVar7);
          *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
        }
        iVar8 = iVar8 + 4;
      } while (iVar8 < 0x14);
      if (*(int *)(unaff_EBP + -0x18) == 5) {
        piVar6 = (int *)FUN_00679d22(unaff_EBP + -0x28,0xc5a);
        iVar8 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        if (iVar8 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar8 + -4);
        }
        FUN_0045efbb(iVar8,uVar7);
        *(undefined1 *)(unaff_EBP + -4) = 9;
      }
      else if (*(int *)(unaff_EBP + -0x18) == 4) {
        puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0xc5c);
        uVar7 = *puVar4;
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        piVar6 = (int *)FUN_00434e21(unaff_EBP + -0x24,uVar7,*(undefined4 *)(unaff_EBP + -0x1c));
        iVar8 = *piVar6;
        if (iVar8 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar8 + -4);
        }
        FUN_0045efbb(iVar8,uVar7);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 9;
      }
      else {
        FUN_00679d22(unaff_EBP + -0x38,0x1b);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_004653c5(unaff_EBP + -0x34,&DAT_00964364);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        piVar6 = (int *)FUN_0045e02d(unaff_EBP + -0x10,unaff_EBP + -0x14);
        iVar8 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        if (iVar8 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar8 + -4);
        }
        FUN_0045efbb(iVar8,uVar7);
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 9;
      }
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_00414ebb();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      uVar7 = 1;
      goto LAB_00705ad4;
    }
  }
LAB_007057c4:
  uVar7 = 0;
LAB_00705ad4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar7;
}


