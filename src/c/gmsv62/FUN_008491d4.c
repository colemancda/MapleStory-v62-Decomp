/* FUN_008491d4 - 0x008491d4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008491d4(void)

{
  int *piVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int iVar3;
  int unaff_EBP;
  undefined4 uVar4;
  int aiStack_5c [4];
  undefined *puStack_4c;
  
  FUN_00879bb8();
  puStack_4c = (undefined *)0x0;
  aiStack_5c[3] = 200;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  aiStack_5c[2] = 0x8491f6;
  iVar2 = FUN_004becbc();
  if (iVar2 == 0) goto LAB_0084941d;
  puStack_4c = (undefined *)0x849209;
  iVar2 = FUN_004865cc();
  if (iVar2 != 0) goto LAB_0084941d;
  if (0 < *(int *)(DAT_00978358 + 0x528)) {
    *(int **)(unaff_EBP + 8) = aiStack_5c;
    uVar4 = 0x117;
    aiStack_5c[0] = extraout_ECX_00;
    goto LAB_00849368;
  }
  puStack_4c = (undefined *)(unaff_EBP + -0x28);
  aiStack_5c[3] = 0x84923d;
  FUN_00455c59();
  puStack_4c = *(undefined **)(unaff_EBP + 8);
  aiStack_5c[3] = 5;
  aiStack_5c[2] = unaff_EBP + -0x20;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  aiStack_5c[1] = 0x849253;
  iVar2 = FUN_00458c4f();
  piVar1 = *(int **)(iVar2 + 4);
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    puStack_4c = (undefined *)0x0;
    aiStack_5c[3] = 0x849264;
    FUN_00449913();
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    puStack_4c = (undefined *)0x0;
    aiStack_5c[3] = 0x849279;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
  }
  if (piVar1 == (int *)0x0) goto LAB_0084941d;
  puStack_4c = (undefined *)0x84928b;
  iVar2 = (**(code **)(*piVar1 + 0x10))();
  if (iVar2 != 3) goto LAB_0084941d;
  puStack_4c = &DAT_008f3400;
  aiStack_5c[3] = (int)piVar1 + 0x59;
  aiStack_5c[2] = 0x8492a3;
  iVar2 = (*DAT_0097b4ac)();
  if (iVar2 < 0) {
    puStack_4c = (undefined *)(unaff_EBP + -0x38);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    aiStack_5c[3] = 0x8492c9;
    iVar2 = FUN_00455c59();
    aiStack_5c[2] = *(undefined4 *)(iVar2 + 4);
    puStack_4c = (undefined *)0x0;
    aiStack_5c[3] = 8;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    aiStack_5c[1] = 0x8492e2;
    uVar4 = FUN_00650dae();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x10) = uVar4;
    if (*(int *)(unaff_EBP + -0x34) != 0) {
      puStack_4c = (undefined *)0x0;
      aiStack_5c[3] = 0x8492f7;
      FUN_0045e7c2();
    }
    iVar2 = extraout_ECX;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      do {
        puStack_4c = *(undefined **)(unaff_EBP + -0x10);
        aiStack_5c[3] = unaff_EBP + -0x30;
        aiStack_5c[2] = 0x849315;
        iVar2 = FUN_0078c04f();
        iVar2 = *(int *)(iVar2 + 4);
        iVar3 = extraout_ECX_02;
        if (*(int *)(unaff_EBP + -0x2c) != 0) {
          puStack_4c = (undefined *)0x0;
          aiStack_5c[3] = 0x849326;
          FUN_004c26f7();
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          iVar3 = extraout_ECX_03;
        }
        if (iVar2 == 0) break;
        iVar3 = *(int *)(iVar2 + 0x18);
        if ((iVar3 == piVar1[6]) && (*(int *)(iVar2 + 0x1c) == piVar1[7])) goto LAB_008493b3;
        *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      } while (*(int *)(unaff_EBP + -0x10) < 3);
      if (*(int *)(*(int *)(DAT_00978358 + 0x1744) + 0x14) != 0) {
        *(int **)(unaff_EBP + 8) = aiStack_5c;
        uVar4 = 399;
        aiStack_5c[0] = iVar3;
        goto LAB_00849368;
      }
      if (*(int *)(*(int *)(DAT_00978358 + 0x1744) + 4) != 0) {
        puStack_4c = (undefined *)0x0;
        aiStack_5c[3] = 0;
        aiStack_5c[2] = 0;
        aiStack_5c[1] = 0;
        *(int **)(unaff_EBP + -0x10) = aiStack_5c;
        aiStack_5c[0] = iVar3;
        FUN_00679d22(aiStack_5c,400);
        iVar2 = FUN_007db791();
        if (iVar2 == 6) {
          *(undefined4 *)(unaff_EBP + -0x18) = 1;
        }
      }
LAB_008493b3:
      iVar2 = *(int *)(unaff_EBP + -0x14);
    }
    puStack_4c = (undefined *)0x0;
    aiStack_5c[3] = 0;
    aiStack_5c[2] = 0x5a;
    aiStack_5c[1] = 0x8493c2;
    FUN_0060142b();
    *(undefined4 *)(unaff_EBP + -4) = 2;
    puStack_4c = (undefined *)0x8493ce;
    puStack_4c = (undefined *)FUN_007d1e08();
    aiStack_5c[3] = 0x8493d7;
    FUN_00457d37();
    puStack_4c = *(undefined **)(unaff_EBP + 8);
    aiStack_5c[3] = 0x8493e2;
    FUN_0045d247();
    puStack_4c = *(undefined **)(unaff_EBP + -0x18);
    aiStack_5c[3] = 0x8493ed;
    FUN_00457cda();
    puStack_4c = (undefined *)(unaff_EBP + -0x48);
    aiStack_5c[3] = 0x8493fc;
    FUN_004751b2();
    *(undefined4 *)(iVar2 + 0x208c) = 1;
    puStack_4c = (undefined *)0x84940b;
    uVar4 = FUN_007d1e08();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x2090) = uVar4;
    puStack_4c = (undefined *)0x84941d;
    FUN_0045ebca();
  }
  else {
    *(int **)(unaff_EBP + 8) = aiStack_5c;
    uVar4 = 0x18a;
    aiStack_5c[0] = extraout_ECX_01;
LAB_00849368:
    puStack_4c = (undefined *)0x0;
    aiStack_5c[3] = 0;
    aiStack_5c[2] = 0;
    aiStack_5c[1] = 0;
    FUN_00679d22(aiStack_5c,uVar4);
    FUN_007db3ad();
  }
LAB_0084941d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


