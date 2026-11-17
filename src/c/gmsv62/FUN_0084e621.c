/* FUN_0084e621 - 0x0084e621 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084e621(void)

{
  byte bVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_3c;
  char *pcStack_38;
  undefined *puStack_34;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x332c) = 1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_34 = (undefined *)0xffffffff;
  pcStack_38 = s_GMMapleStory_0096ca34;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  uStack_3c = 0x84e655;
  FUN_00414edd();
  puStack_34 = (undefined *)0xffffffff;
  pcStack_38 = s_GMMapleStory_0096ca34;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  uStack_3c = 0x84e667;
  FUN_00414edd();
  puStack_34 = (undefined *)0xffffffff;
  pcStack_38 = s_GMMapleStory_0096ca34;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  uStack_3c = 0x84e679;
  FUN_00414edd();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_34 = (undefined *)0x84e685;
  bVar1 = FUN_0042452b();
  if (0x14 < bVar1) {
    if (bVar1 < 0x1a) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      pcStack_38 = (char *)(unaff_EBP + -0x1c);
      puStack_34 = &DAT_0096ca2c;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uStack_3c = 0x84e70d;
      puStack_34 = (undefined *)FUN_00434e21();
      pcStack_38 = (char *)0x84e718;
      FUN_00414f8b();
      iVar5 = *(int *)(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      goto LAB_0084e748;
    }
    if (bVar1 == 0x1a) {
      *(undefined4 *)(unaff_EBP + -0x18) = 0;
      pcStack_38 = (char *)(unaff_EBP + -0x18);
      puStack_34 = &DAT_0096ca2c;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_3c = 0x84e6e4;
      puStack_34 = (undefined *)FUN_00434e21();
      pcStack_38 = (char *)0x84e6ef;
      FUN_00414f8b();
      iVar5 = *(int *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      goto LAB_0084e748;
    }
    if ((0x1a < bVar1) && (bVar1 < 0x1d)) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      pcStack_38 = (char *)(unaff_EBP + 8);
      puStack_34 = &DAT_0096ca2c;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      uStack_3c = 0x84e6bb;
      puStack_34 = (undefined *)FUN_00434e21();
      pcStack_38 = (char *)0x84e6c6;
      FUN_00414f8b();
      iVar5 = *(int *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      goto LAB_0084e748;
    }
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  pcStack_38 = (char *)(unaff_EBP + -0x20);
  puStack_34 = &DAT_0096ca2c;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_3c = 0x84e736;
  puStack_34 = (undefined *)FUN_00434e21();
  pcStack_38 = (char *)0x84e741;
  FUN_00414f8b();
  iVar5 = *(int *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 3;
LAB_0084e748:
  if (iVar5 != 0) {
    puStack_34 = (undefined *)(iVar5 + -0xc);
    pcStack_38 = (char *)0x84e755;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_34 = (undefined *)0x84e767;
  uVar2 = FUN_004133f0();
  puStack_34 = (undefined *)0x11d6;
  pcStack_38 = (char *)(unaff_EBP + -0x20);
  uStack_3c = 0x84e783;
  puVar3 = (undefined4 *)FUN_00679d22();
  uStack_3c = *puVar3;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  puStack_34 = *(undefined **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  pcStack_38 = *(char **)(unaff_EBP + -0x34 + (uVar2 % 3) * 4);
  piVar4 = (int *)FUN_00434e21(unaff_EBP + 8);
  pcStack_38 = (char *)*piVar4;
  if (pcStack_38 == (char *)0x0) {
    puStack_34 = (undefined *)0x0;
  }
  else {
    puStack_34 = *(undefined **)((int)pcStack_38 + -4);
  }
  uStack_3c = 0x84e7b7;
  FUN_0045efbb();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_34 = (undefined *)0x84e7c3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_34 = (undefined *)0x84e7cf;
  FUN_00414ebb();
  puStack_34 = (undefined *)0x69c;
  pcStack_38 = (char *)0x84e7de;
  iVar5 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x1c) = iVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    puStack_34 = (undefined *)0x84e7f0;
    iVar5 = FUN_007e62e9();
  }
  uVar2 = -(uint)(iVar5 != 0) & iVar5 + 8U;
  *(uint *)(unaff_EBP + -0x24) = -(uint)(uVar2 != 0) & uVar2 - 8;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_34 = (undefined *)0x84e817;
  FUN_004c26c4();
  puStack_34 = (undefined *)0x0;
  pcStack_38 = (char *)0x0;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_3c;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00450368(unaff_EBP + -0x14);
  uVar7 = 0x897b50;
  uVar6 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_004c2677(0,0x897b50);
  FUN_007eddac(uVar6,uVar7);
  puStack_34 = (undefined *)0x0;
  pcStack_38 = (char *)0x0;
  uStack_3c = 0x84e84f;
  FUN_007edf11();
  puStack_34 = (undefined *)0x84e857;
  FUN_007e6e3c();
  puStack_34 = (undefined *)0x84e85f;
  FUN_004bc6a2();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_34 = (undefined *)0x84e86b;
  FUN_004c26e1();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_34 = (undefined *)0x84e877;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_34 = (undefined *)0x84e883;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_34 = (undefined *)0x84e88f;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_34 = (undefined *)0x84e89a;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_34 = (undefined *)0x84e8a6;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


