/* FUN_004933dc - 0x004933dc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004933dc(void)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_ECX;
  int iVar8;
  int unaff_EBP;
  undefined4 *puVar9;
  
  FUN_00879bb8();
  iVar8 = *(int *)(extraout_ECX + 0x164);
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  if (0 < iVar8) {
    puVar9 = (undefined4 *)(extraout_ECX + 0x1e8);
    *(undefined4 **)(unaff_EBP + -0x1c) = puVar9;
    *(int *)(unaff_EBP + -0x10) = extraout_ECX + 0x70;
    iVar8 = extraout_ECX;
    do {
      if (-1 < (int)puVar9[-0x1e]) {
        FUN_004903a3(unaff_EBP + -0x2c,puVar9[-0x1e]);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (*(int *)(unaff_EBP + -0x28) == 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_0045e46f();
        }
        else {
          iVar4 = FUN_0045e2eb();
          if ((iVar4 / 10000 == 0x38f) || (iVar4 / 10000 == 0x21f)) {
            piVar1 = *(int **)(unaff_EBP + -0x10);
            *puVar9 = 0;
            (**(code **)(*(int *)(*piVar1 + 4) + 0x1c))(1);
            iVar4 = FUN_00455c59(unaff_EBP + -0x34);
            iVar4 = *(int *)(iVar4 + 4);
            if (*(int *)(unaff_EBP + -0x30) != 0) {
              FUN_0045e7c2(0);
              *(undefined4 *)(unaff_EBP + -0x30) = 0;
            }
            iVar5 = FUN_0045e2eb();
            iVar5 = (iVar5 / 1000) % 10;
            if ((iVar5 < 0) || (5 < iVar5)) {
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              if (*(int *)(unaff_EBP + -0x28) != 0) {
                FUN_0045e794(0);
                *(undefined4 *)(unaff_EBP + -0x28) = 0;
              }
            }
            else {
              *(undefined4 *)(unaff_EBP + -0x14) = DAT_00973a94;
              uVar6 = FUN_0045e2eb();
              iVar7 = FUN_00552d7f(uVar6);
              *(int *)(unaff_EBP + -0x24) = iVar7;
              if (iVar5 == 0) {
                iVar8 = *(int *)(*(int *)(iVar8 + 0x210) + 0x48c);
              }
              else {
                iVar2 = *(int *)(iVar4 + 0x3e3 + iVar5 * 4);
                iVar8 = 0;
                if (iVar2 != 0) {
                  iVar8 = *(int *)(iVar2 + -4);
                }
                iVar8 = iVar8 + -1;
              }
              if ((iVar5 == 0) && (iVar8 < 0)) {
                iVar8 = 0x30;
              }
              *(undefined4 *)(unaff_EBP + -0x14) = 0;
              if (iVar5 == 0) {
                if (0x30 < iVar8 + iVar7) goto LAB_0049356b;
              }
              else {
                sVar3 = FUN_0045f084(iVar4 + 0x39,*(undefined4 *)(iVar4 + 0x3d));
                iVar4 = FUN_00458df2(iVar5,(int)sVar3);
                if (0x30 < iVar8 + iVar4 * -4 + *(int *)(unaff_EBP + -0x24)) {
LAB_0049356b:
                  *(undefined4 *)(unaff_EBP + -0x14) = 1;
                }
                if (*(int *)(unaff_EBP + -0x14) != 0) {
                  (**(code **)(*(int *)(**(int **)(unaff_EBP + -0x10) + 4) + 0x1c))(0);
                  **(undefined4 **)(unaff_EBP + -0x1c) = 1;
                }
              }
              *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
              if (*(int *)(unaff_EBP + -0x28) != 0) {
                FUN_0045e794(0);
                *(undefined4 *)(unaff_EBP + -0x28) = 0;
              }
              iVar8 = *(int *)(unaff_EBP + -0x18);
            }
          }
          else {
            *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
            if (*(int *)(unaff_EBP + -0x28) != 0) {
              FUN_0045e794(0);
              *(undefined4 *)(unaff_EBP + -0x28) = 0;
            }
          }
        }
      }
      *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x20) + 1;
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 0x18;
      puVar9 = (undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 4);
      iVar4 = *(int *)(iVar8 + 0x164);
      *(undefined4 **)(unaff_EBP + -0x1c) = puVar9;
    } while (*(int *)(unaff_EBP + -0x20) < iVar4);
  }
  FUN_008161f1(0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


