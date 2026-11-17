/* FUN_0068e4ef - 0x0068e4ef in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0068e4ef(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x1ac);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar1 == 0) && (uVar4 = 1, 1 < *(int *)(extraout_ECX + 200))) {
    iStack_2c = *(undefined4 *)(unaff_EBP + 0x1c);
    uStack_30 = *(undefined4 *)(unaff_EBP + 0x18);
    uStack_34 = 0x68e52e;
    iVar2 = FUN_0068e99d();
    *(int *)(unaff_EBP + -0x10) = iVar2;
    iVar1 = DAT_00978368;
    if ((iVar2 < 1) ||
       ((-1 < *(int *)(*(int *)(extraout_ECX + 0x1b4) + -4 + iVar2 * 0x10) ||
        (*(int *)(unaff_EBP + 0xc) == 0)))) goto LAB_0068e6fb;
    iStack_2c = 0;
    uStack_30 = 500;
    uStack_34 = 0x68e568;
    iVar2 = FUN_004becbc();
    if (iVar2 == 0) goto LAB_0068e6fb;
    iStack_2c = *(undefined4 *)(unaff_EBP + 0xc);
    *(undefined4 *)(unaff_EBP + 0x18) = 1;
    uStack_30 = 0x68e57b;
    iVar2 = FUN_004c24cb();
    if (iVar2 != 0) {
LAB_0068e674:
      iStack_2c = 0;
      uStack_30 = 0;
      uStack_34 = 0x6f;
      FUN_0060142b();
      iStack_2c = 0xe;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uStack_30 = 0x68e68e;
      FUN_00457cda();
      iStack_2c = *(undefined4 *)(unaff_EBP + 0x10);
      uStack_30 = 0x68e699;
      FUN_00457cda();
      iStack_2c = *(undefined4 *)(unaff_EBP + 0x14);
      uStack_30 = 0x68e6a4;
      FUN_0045d247();
      iStack_2c = *(undefined4 *)(unaff_EBP + 0x18);
      uStack_30 = 0x68e6af;
      FUN_0045d247();
      iStack_2c = *(undefined4 *)(unaff_EBP + -0x10);
      uStack_30 = 0x68e6ba;
      FUN_00457cda();
      iStack_2c = unaff_EBP + -0x28;
      uStack_30 = 0x68e6c9;
      FUN_004751b2();
      *(undefined4 *)(iVar1 + 0x208c) = 1;
      iStack_2c = 0x68e6d4;
      uVar5 = FUN_007d1e08();
      *(undefined4 *)(iVar1 + 0x2090) = uVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_2c = 0x68e6e5;
      FUN_0045ebca();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        iStack_2c = 0;
        uStack_30 = 0x68e6f7;
        FUN_00449913();
      }
      goto LAB_0068e709;
    }
    iStack_2c = 0x68e58c;
    iVar2 = (**(code **)(**(int **)(unaff_EBP + 0xc) + 0x18))();
    *(int *)(unaff_EBP + 0x1c) = iVar2;
    if (iVar2 < 2) goto LAB_0068e674;
    iStack_2c = 0x69c;
    uStack_30 = 0x68e5a6;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 0x18) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iStack_2c = 0x68e5b8;
      iVar2 = FUN_007e62e9();
    }
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar3 != 0) & uVar3 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_2c = 0x68e5de;
    FUN_004c26c4();
    iStack_2c = 0;
    uStack_30 = 1;
    *(undefined4 **)(unaff_EBP + 0x18) = &uStack_34;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00679d22(&uStack_34,0x366);
    uVar6 = 0;
    uVar5 = 2;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004c2677(2,0);
    FUN_007eddac(uVar5,uVar6);
    iStack_2c = 0;
    uStack_30 = 10;
    uStack_34 = 0;
    FUN_007edf4a(*(undefined4 *)(unaff_EBP + 0x1c),1,*(undefined4 *)(unaff_EBP + 0x1c));
    iStack_2c = 0x68e62b;
    FUN_007e6e3c();
    iStack_2c = 0x68e633;
    iVar2 = FUN_004bc6a2();
    if (iVar2 == 1) {
      *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xbc);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_2c = 0x68e674;
      FUN_004c26e1();
      goto LAB_0068e674;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_2c = 0x68e642;
    FUN_004c26e1();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      iStack_2c = 0;
      uStack_30 = 0x68e658;
      FUN_00449913();
    }
  }
  else {
LAB_0068e6fb:
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_2c = 0x68e707;
    FUN_0046575e();
  }
  uVar4 = 0;
LAB_0068e709:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


