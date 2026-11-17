/* FUN_0084bfb1 - 0x0084bfb1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084bfb1(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int unaff_EBP;
  undefined4 uVar6;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  int *piStack_30;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  piStack_30 = (int *)0x84bfcf;
  iVar2 = FUN_007b3c5d();
  if (iVar2 != 0) goto LAB_0084c1ba;
  if ((*(int *)(DAT_00978358 + 0x4e0) == 0) && (*(int *)(DAT_00978358 + 0x4f4) == 0)) {
    piStack_30 = (int *)0x84bffb;
    iVar2 = FUN_00429303();
    if (*(int *)(iVar2 + 0x124) == 0) {
      *(undefined4 **)(unaff_EBP + 8) = &uStack_40;
      uVar6 = 0x1c1;
      uStack_40 = extraout_ECX_00;
    }
    else {
      piStack_30 = (int *)(unaff_EBP + -0x10);
      iStack_34 = 0x84c026;
      piVar3 = (int *)FUN_00486ada();
      iVar2 = *(int *)((-(uint)(*piVar3 != 0) & *piVar3 - 0xcU) + 0x110);
      piStack_30 = *(int **)(unaff_EBP + -0x10);
      if (piStack_30 != (int *)0x0) {
        iStack_34 = 0x84c049;
        (**(code **)(*piStack_30 + 8))();
      }
      if (iVar2 == 0) {
        piStack_30 = (int *)0x107f;
        iStack_34 = unaff_EBP + 8;
        uStack_38 = 8700000;
        iStack_34 = FUN_00679d22();
        piStack_30 = (int *)0xc;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        uStack_38 = 0x84c06f;
        FUN_00471102();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        goto LAB_0084c1b5;
      }
      if (*(int *)(DAT_00978140 + 8) == 0) goto LAB_0084c1ba;
      piVar3 = (int *)(*(int *)(DAT_00978140 + 8) + 4);
      piStack_30 = (int *)0x78;
      iStack_34 = 0x84c09f;
      iVar2 = (**(code **)(*piVar3 + 0x10))();
      iStack_34 = *(undefined4 *)(iVar2 + 4);
      uStack_38 = 0x84c0a9;
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x10))();
      uStack_38 = *puVar4;
      uStack_3c = 0x84c0b2;
      iVar2 = FUN_0062182d();
      if (iVar2 == 0) {
        iVar2 = *(int *)(unaff_EBP + -0x14);
        piStack_30 = (int *)(unaff_EBP + -0x1c);
        iStack_34 = 0x84c0d5;
        iVar5 = FUN_00455c59();
        piStack_30 = *(int **)(*(int *)(iVar5 + 4) + 0x35);
        iStack_34 = *(int *)(iVar5 + 4) + 0x33;
        *(undefined4 *)(unaff_EBP + -4) = 2;
        uStack_38 = 0x84c0eb;
        bVar1 = FUN_0045f03e();
        uStack_40 = CONCAT31((int3)((uint)piStack_30 >> 8),0xf);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          piStack_30 = (int *)0x0;
          iStack_34 = 0x84c107;
          FUN_0045e7c2();
          *(undefined4 *)(unaff_EBP + -0x18) = 0;
          uStack_40 = extraout_ECX_02;
        }
        if (0xf < bVar1) {
          piStack_30 = (int *)0x0;
          *(undefined4 *)(iVar2 + 0x329c) = *(undefined4 *)(unaff_EBP + 8);
          iStack_34 = 0;
          uStack_38 = 0x3b;
          *(undefined4 *)(iVar2 + 0x32a0) = *(undefined4 *)(unaff_EBP + 0xc);
          uStack_3c = 0x84c153;
          FUN_0060142b();
          piStack_30 = (int *)0x0;
          *(undefined4 *)(unaff_EBP + -4) = 3;
          iStack_34 = 0x84c163;
          FUN_00457cda();
          piStack_30 = (int *)0x8;
          iStack_34 = unaff_EBP + 0x10;
          uStack_38 = 0x84c171;
          FUN_00457fa0();
          piStack_30 = (int *)(unaff_EBP + -0x2c);
          iStack_34 = 0x84c180;
          FUN_004751b2();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          piStack_30 = (int *)0x84c18c;
          FUN_0045ebca();
          goto LAB_0084c1ba;
        }
        *(undefined4 **)(unaff_EBP + 8) = &uStack_40;
        uVar6 = 0xe59;
      }
      else {
        *(undefined4 **)(unaff_EBP + 8) = &uStack_40;
        uVar6 = 0xd4d;
        uStack_40 = extraout_ECX_01;
      }
    }
    piStack_30 = (int *)0x0;
    iStack_34 = 0;
    uStack_38 = 0;
    uStack_3c = 0;
    FUN_00679d22(&uStack_40,uVar6);
    FUN_007db3ad();
  }
  else {
    piStack_30 = (int *)0xd8b;
    iStack_34 = unaff_EBP + 8;
    uStack_38 = 0x84c1a1;
    iStack_34 = FUN_00679d22();
    piStack_30 = (int *)0xc;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_38 = 0x84c1ac;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_0084c1b5:
    piStack_30 = (int *)0x84c1ba;
    FUN_00414ebb();
  }
LAB_0084c1ba:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


