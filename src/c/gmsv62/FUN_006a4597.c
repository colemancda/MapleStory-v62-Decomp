/* FUN_006a4597 - 0x006a4597 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a4597(void)

{
  undefined1 *puVar1;
  int iVar2;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  int unaff_EBP;
  undefined4 uVar3;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) != 1) {
LAB_006a4760:
    if (*(int *)(extraout_ECX + 0x68) == 0) {
      *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x68) = 1;
      if (*(int *)(extraout_ECX + 0x14) != 0) {
        puStack_20 = (undefined1 *)0x6a477e;
        FUN_00815de9();
      }
    }
    goto LAB_006a477e;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_20 = (undefined1 *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_24 = (undefined1 *)0x6a45ca;
  puStack_20 = (undefined1 *)FUN_0045b90e();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_24 = (undefined1 *)0x6a45d7;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_20 = (undefined1 *)0x6a45e2;
  FUN_00414ebb();
  puStack_20 = (undefined1 *)0x0;
  puStack_24 = (undefined1 *)0x0;
  uStack_28 = 0x6a45ec;
  FUN_0045ed72();
  puStack_24 = (undefined1 *)0x6a45f3;
  FUN_0045ee27();
  puVar1 = *(undefined1 **)(unaff_EBP + -0x10);
  if (puVar1 == (undefined1 *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(puVar1 + -4);
  }
  if (iVar2 < 4) {
LAB_006a478f:
    *(undefined1 ***)(unaff_EBP + 8) = &puStack_30;
    puStack_30 = extraout_ECX_00;
LAB_006a46e4:
    uVar3 = 0x215;
  }
  else {
    if (puVar1 == (undefined1 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(puVar1 + -4);
    }
    if (0xc < iVar2) goto LAB_006a478f;
    if (*(int *)(DAT_00978368 + 0x2098) == 0) {
      puStack_20 = (undefined1 *)0x0;
    }
    else {
      puStack_20 = (undefined1 *)(*(int *)(DAT_00978368 + 0x2098) + 4);
    }
    if (puStack_20 == (undefined1 *)0x0) {
      puStack_20 = DAT_00980dfc;
    }
    puStack_24 = DAT_00980dfc;
    if (puVar1 != (undefined1 *)0x0) {
      puStack_24 = puVar1;
    }
    uStack_28 = 0x6a464d;
    iVar2 = FUN_008858f0();
    if (iVar2 != 0) {
      puStack_20 = (undefined1 *)0x1;
      puStack_24 = (undefined1 *)0x0;
      uStack_28 = 1;
      uStack_2c = 0x400;
      puStack_30 = (undefined1 *)0x6a4679;
      uStack_28 = FUN_00415015();
      uStack_2c = 0x6a467f;
      iVar2 = FUN_00471777();
      puStack_20 = (undefined1 *)0xffffffff;
      puStack_24 = (undefined1 *)0x6a468e;
      FUN_004150c0();
      if (iVar2 == 0) {
        *(undefined1 ***)(unaff_EBP + 8) = &puStack_30;
        uVar3 = 0x11d;
        puStack_30 = extraout_ECX_01;
        goto LAB_006a46e9;
      }
      puStack_20 = (undefined1 *)(unaff_EBP + -0x14);
      puStack_24 = (undefined1 *)0x6a46b2;
      FUN_0045b90e();
      puStack_20 = (undefined1 *)(extraout_ECX + 0xa0);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      puStack_24 = (undefined1 *)0x6a46c4;
      iVar2 = FUN_0045ec92();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      puStack_20 = (undefined1 *)0x6a46d6;
      FUN_00414ebb();
      if (iVar2 != 0) {
        puStack_24 = (undefined1 *)&puStack_20;
        *(undefined1 ***)(unaff_EBP + -0x18) = &puStack_20;
        uStack_28 = 0x6a471c;
        FUN_0048b998();
        uStack_28 = 0x6a4723;
        FUN_0045b90e();
        *(undefined1 ***)(unaff_EBP + -0x1c) = &puStack_24;
        uStack_28 = 0xffffffff;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uStack_2c = 0x6a4734;
        FUN_004e21db();
        uStack_2c = 0x6a473b;
        uStack_2c = FUN_00485c13();
        puStack_30 = (undefined1 *)0x6a4743;
        FUN_0045f0f3();
        uStack_28 = *(undefined4 *)(extraout_ECX + 0xa8);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        uStack_2c = 0x6a4754;
        FUN_0045ddc9();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        puStack_20 = (undefined1 *)0x6a4760;
        FUN_00414ebb();
        goto LAB_006a4760;
      }
      *(undefined1 ***)(unaff_EBP + 8) = &puStack_30;
      puStack_30 = extraout_ECX_02;
      goto LAB_006a46e4;
    }
    puStack_30 = puStack_20;
    *(undefined1 ***)(unaff_EBP + 8) = &puStack_30;
    uVar3 = 0x214;
  }
LAB_006a46e9:
  puStack_20 = (undefined1 *)0x0;
  puStack_24 = (undefined1 *)0x0;
  uStack_28 = 0;
  uStack_2c = 0;
  FUN_00679d22(&puStack_30,uVar3);
  FUN_007db3ad();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_20 = (undefined1 *)0x6a4708;
  FUN_00414ebb();
LAB_006a477e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


