/* FUN_006a47f7 - 0x006a47f7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a47f7(void)

{
  byte bVar1;
  int iVar2;
  int *extraout_ECX;
  int *piVar3;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined1 *puStack_28;
  int *piStack_24;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  if (iVar2 == 0x3e9) {
    piStack_24 = (int *)(unaff_EBP + -0x10);
    puStack_28 = (undefined1 *)0x6a48f3;
    FUN_0045b90e();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    piStack_24 = extraout_ECX + 0x28;
    puStack_28 = (undefined1 *)0x6a4905;
    iVar2 = FUN_0045ec92();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_24 = (int *)0x6a4913;
    FUN_00414ebb();
    if (iVar2 != 0) goto LAB_006a4a0a;
    piStack_24 = (int *)0x6a4922;
    FUN_00414f29();
    if (*(int *)(DAT_00978368 + 0x2098) == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)(*(int *)(DAT_00978368 + 0x2098) + 4);
    }
    piStack_24 = (int *)(unaff_EBP + -0x14);
    puStack_28 = (undefined1 *)0x6a4947;
    FUN_0045b90e();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    puStack_28 = (undefined1 *)0x6a4955;
    piStack_24 = piVar3;
    iVar2 = FUN_004a3109();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_24 = (int *)0x6a4968;
    FUN_00414ebb();
    if (iVar2 == 0) {
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_34;
      uVar4 = 0x214;
    }
    else {
      piStack_24 = (int *)(unaff_EBP + -0x1c);
      puStack_28 = (undefined1 *)0x6a4997;
      uVar4 = FUN_0045b90e();
      *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
      *(undefined4 *)(unaff_EBP + -4) = 2;
      piStack_24 = (int *)0x6a49ac;
      bVar1 = FUN_0045e4b8();
      piStack_24 = (int *)((byte)~bVar1 & 1);
      puStack_28 = *(undefined1 **)(unaff_EBP + -0x18);
      iStack_2c = 0x6a49b9;
      iVar2 = FUN_007d1e11();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piStack_24 = (int *)0x6a49cf;
      FUN_00414ebb();
      if (iVar2 != 0) {
        puStack_28 = (undefined1 *)&piStack_24;
        *(int ***)(unaff_EBP + -0x20) = &piStack_24;
        iStack_2c = 0x6a49fb;
        FUN_0048b998();
        iStack_2c = 0x6a4a02;
        FUN_0045b90e();
        puStack_28 = (undefined1 *)0x6a4a0a;
        FUN_0045dc9d();
        goto LAB_006a4a0a;
      }
      *(undefined4 **)(unaff_EBP + -0x20) = &uStack_34;
      uVar4 = 0x211;
    }
  }
  else {
    if (iVar2 != 0x3ea) {
      if (iVar2 == 0x3eb) {
        piStack_24 = (int *)0x2;
        puStack_28 = (undefined1 *)0x6a4828;
        (**(code **)(*extraout_ECX + 0x34))();
      }
      goto LAB_006a4a0a;
    }
    piStack_24 = (int *)(unaff_EBP + 8);
    puStack_28 = (undefined1 *)0x6a483c;
    FUN_0045b90e();
    piStack_24 = extraout_ECX + 0x28;
    *(undefined4 *)(unaff_EBP + -4) = 3;
    puStack_28 = (undefined1 *)0x6a4851;
    iVar2 = FUN_0045ec92();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    piStack_24 = (int *)0x6a4864;
    FUN_00414ebb();
    if (iVar2 != 0) {
      puStack_28 = (undefined1 *)&piStack_24;
      *(int ***)(unaff_EBP + -0x18) = &piStack_24;
      iStack_2c = 0x6a48a3;
      FUN_0048b998();
      iStack_2c = 0x6a48aa;
      FUN_0045b90e();
      *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_28;
      iStack_2c = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -4) = 4;
      uStack_30 = 0x6a48be;
      FUN_004e21db();
      uStack_30 = 0x6a48c5;
      uStack_30 = FUN_00485c13();
      uStack_34 = 0x6a48cd;
      FUN_0045f0f3();
      iStack_2c = extraout_ECX[0x2a];
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uStack_30 = 0x6a48df;
      FUN_0045ddc9();
      goto LAB_006a4a0a;
    }
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_34;
    uVar4 = 0x215;
  }
  piStack_24 = (int *)0x0;
  puStack_28 = (undefined1 *)0x0;
  iStack_2c = 0;
  uStack_30 = 0;
  FUN_00679d22(&uStack_34,uVar4);
  FUN_007db3ad();
LAB_006a4a0a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


