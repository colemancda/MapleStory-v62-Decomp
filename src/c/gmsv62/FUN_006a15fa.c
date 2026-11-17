/* FUN_006a15fa - 0x006a15fa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a15fa(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  uint extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar5;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  int iStack_28;
  undefined1 *puStack_24;
  uint uStack_20;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) == 2) goto LAB_006a1846;
  bVar1 = true;
  if (*(int *)(unaff_EBP + 8) == 1) {
    uStack_20 = unaff_EBP - 0x18;
    puStack_24 = (undefined1 *)0x6a162c;
    FUN_0045b90e();
    uStack_20 = 0;
    puStack_24 = (undefined1 *)0x0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_28 = 0x6a1638;
    FUN_0045ed72();
    puStack_24 = (undefined1 *)0x6a163f;
    puVar2 = (undefined4 *)FUN_0045ee27();
    if (((char *)*puVar2 != (char *)0x0) && (*(char *)*puVar2 != '\0')) {
      bVar1 = false;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      uStack_20 = *(int *)(unaff_EBP + -0x18) - 0xc;
      puStack_24 = (undefined1 *)0x6a165f;
      FUN_00434e38();
    }
    if (bVar1) goto LAB_006a1846;
  }
  uStack_20 = unaff_EBP - 0x10;
  puStack_24 = (undefined1 *)0x6a1677;
  FUN_0045b90e();
  iVar4 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar4 == 0) {
    uStack_20 = 0;
  }
  else {
    uStack_20 = *(uint *)(iVar4 + -4);
  }
  if ((int)uStack_20 < *(int *)(extraout_ECX + 0x9c)) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    uStack_20 = 0xf0b;
    puStack_24 = (undefined1 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_28 = 0x6a16ae;
    puVar2 = (undefined4 *)FUN_00679d22();
    uStack_20 = *(uint *)(extraout_ECX + 0x9c);
    puStack_24 = (undefined1 *)*puVar2;
    iStack_28 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_2c = 0x6a16c4;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_20 = 0x6a16d3;
    FUN_00414ebb();
    uStack_20 = 0;
    puStack_24 = (undefined1 *)0x0;
    iStack_28 = extraout_ECX + 0x88;
    uStack_2c = 0;
    *(undefined1 **)(unaff_EBP + -0x18) = auStack_30;
    uVar5 = 0xffffffff;
    uVar3 = FUN_00449713(0xffffffff);
    FUN_0045f0f3(uVar3,uVar5);
    FUN_007db3ad();
    uStack_20 = -(uint)(*(int *)(extraout_ECX + 0x7c) != 0) & *(int *)(extraout_ECX + 0x7c) + 4U;
    puStack_24 = (undefined1 *)0x6a1717;
    FUN_00817f6e();
    *(undefined1 *)(unaff_EBP + -4) = 1;
LAB_006a17c4:
    uStack_20 = 0x6a17c9;
    FUN_00414ebb();
  }
  else {
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + -4);
    }
    if (*(int *)(extraout_ECX + 0xa0) < iVar4) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      uStack_20 = 0xf0c;
      puStack_24 = (undefined1 *)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_28 = 0x6a1754;
      puVar2 = (undefined4 *)FUN_00679d22();
      uStack_20 = *(uint *)(extraout_ECX + 0xa0);
      puStack_24 = (undefined1 *)*puVar2;
      iStack_28 = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_2c = 0x6a176a;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uStack_20 = 0x6a1779;
      FUN_00414ebb();
      uStack_20 = 0;
      puStack_24 = (undefined1 *)0x0;
      iStack_28 = extraout_ECX + 0x88;
      uStack_2c = 0;
      *(undefined1 **)(unaff_EBP + 8) = auStack_30;
      uVar5 = 0xffffffff;
      uVar3 = FUN_00449713(0xffffffff);
      FUN_0045f0f3(uVar3,uVar5);
      FUN_007db3ad();
      uStack_20 = -(uint)(*(int *)(extraout_ECX + 0x7c) != 0) & *(int *)(extraout_ECX + 0x7c) + 4U;
      puStack_24 = (undefined1 *)0x6a17bd;
      FUN_00817f6e();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      goto LAB_006a17c4;
    }
    if (*(int *)(extraout_ECX + 0x68) == 0) {
      *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x68) = 1;
      if (*(int *)(extraout_ECX + 0x14) != 0) {
        uStack_20 = 0x6a17e5;
        FUN_00815de9();
        uStack_20 = extraout_ECX_00;
      }
    }
    if ((*(int *)(unaff_EBP + 8) == 1) && (0 < *(int *)(extraout_ECX + 0xa8))) {
      puStack_24 = (undefined1 *)&uStack_20;
      *(uint **)(unaff_EBP + 8) = &uStack_20;
      iStack_28 = 0x6a1801;
      FUN_0048b998();
      iStack_28 = 0x6a1808;
      FUN_0045b90e();
      puStack_24 = (undefined1 *)0x6a180f;
      FUN_006a19f8();
      if (DAT_0097bcec != 0) {
        uStack_20 = 0x6a181e;
        FUN_00815de9();
        if (DAT_0097bcec != 0) {
          uStack_20 = 1;
          puStack_24 = (undefined1 *)0x6a182f;
          (*(code *)**(undefined4 **)(DAT_0097bcec + 8))();
        }
      }
      *(undefined4 *)(DAT_00978368 + 0x3298) = 0;
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_20 = 0x6a1846;
  FUN_00414ebb();
LAB_006a1846:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


