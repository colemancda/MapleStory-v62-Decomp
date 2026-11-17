/* FUN_006d289b - 0x006d289b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d289b(void)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  char *pcVar3;
  int unaff_EBP;
  int aiStack_34 [3];
  undefined1 *puStack_28;
  char *pcStack_24;
  
  FUN_00879bb8();
  iVar2 = *(int *)(extraout_ECX + 0xa8);
  uVar1 = *(uint *)(DAT_00978364 + 0x80);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(uint *)(unaff_EBP + -0x1c) = (uint)(uVar1 == (-(uint)(iVar2 != 0) & iVar2 + 4U));
  if ((*(byte *)(unaff_EBP + 0xf) & 0x80) != 0) goto LAB_006d2adb;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 == 0) {
    pcStack_24 = (char *)0xffffffff;
    puStack_28 = &DAT_00978474;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    aiStack_34[2] = 0x6d2917;
    FUN_00414edd();
    *(undefined4 *)(unaff_EBP + -0x14) = 2;
    pcStack_24 = (char *)(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -4) = 2;
  }
  else {
    pcStack_24 = (char *)(unaff_EBP + -0x20);
    puStack_28 = (undefined1 *)0x6d28f5;
    pcStack_24 = (char *)FUN_0045b90e();
    *(undefined4 *)(unaff_EBP + -0x14) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puStack_28 = (undefined1 *)0x6d292f;
  FUN_00414f8b();
  *(undefined4 *)(unaff_EBP + -4) = 5;
  pcStack_24 = (char *)extraout_ECX_00;
  if ((*(byte *)(unaff_EBP + -0x14) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x14) = *(uint *)(unaff_EBP + -0x14) & 0xfffffffd;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      pcStack_24 = (char *)(*(int *)(unaff_EBP + -0x18) + -0xc);
      puStack_28 = (undefined1 *)0x6d2950;
      FUN_00434e38();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 4;
  pcVar3 = pcStack_24;
  if (((*(byte *)(unaff_EBP + -0x14) & 1) != 0) && (*(int *)(unaff_EBP + -0x20) != 0)) {
    pcStack_24 = (char *)(*(int *)(unaff_EBP + -0x20) + -0xc);
    puStack_28 = (undefined1 *)0x6d296e;
    FUN_00434e38();
    pcVar3 = pcStack_24;
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  if (iVar2 == 0xd) {
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      if (*(int *)(extraout_ECX + 0x60) != 2) {
        pcStack_24 = *(char **)(extraout_ECX + 0xa8);
        puStack_28 = (undefined1 *)0x6d2a95;
        FUN_008164fd();
        pcStack_24 = (char *)(-(uint)(*(int *)(extraout_ECX + 0xa8) != 0) &
                             *(int *)(extraout_ECX + 0xa8) + 4U);
        puStack_28 = (undefined1 *)0x6d2ab2;
        FUN_00817f6e();
      }
    }
    else {
      pcStack_24 = (char *)0x6d2a80;
      FUN_006d5d39();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      pcStack_24 = (char *)(*(int *)(unaff_EBP + -0x10) + -0xc);
      puStack_28 = (undefined1 *)0x6d2ac5;
      FUN_00434e38();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + 0xc) != 0) {
      pcStack_24 = (char *)(*(int *)(unaff_EBP + 0xc) + -0xc);
      puStack_28 = (undefined1 *)0x6d2ada;
      FUN_00434e38();
    }
    goto LAB_006d2adb;
  }
  if (iVar2 == 0x1b) {
    pcStack_24 = (char *)0x0;
    puStack_28 = (undefined1 *)0x0;
    aiStack_34[2] = 0;
    aiStack_34[1] = 0;
    *(int **)(unaff_EBP + 8) = aiStack_34;
    aiStack_34[0] = (int)pcVar3;
    FUN_00679d22(aiStack_34,0xdb5);
    iVar2 = FUN_007db791();
    if (iVar2 == 6) {
      pcStack_24 = (char *)0x6d2a6e;
      FUN_006d1fd1();
      goto LAB_006d29e5;
    }
LAB_006d2a31:
    pcStack_24 = (char *)0x0;
    puStack_28 = (undefined1 *)0x6d2a3d;
    FUN_00817f6e();
  }
  else if (iVar2 == 0x25) {
LAB_006d2a26:
    if ((*(char **)(unaff_EBP + -0x10) == (char *)0x0) || (**(char **)(unaff_EBP + -0x10) == '\0'))
    goto LAB_006d2a31;
  }
  else if (iVar2 == 0x26) {
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      pcStack_24 = (char *)(unaff_EBP + -0x1c);
      puStack_28 = (undefined1 *)0x6d2a10;
      pcStack_24 = (char *)FUN_00471268();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puStack_28 = (undefined1 *)0x6d2a1d;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 4;
LAB_006d29c2:
      pcStack_24 = (char *)0x6d29c7;
      FUN_00414ebb();
      pcStack_24 = *(char **)(unaff_EBP + 0xc);
      if ((pcStack_24 != (char *)0x0) && (*pcStack_24 != '\0')) {
        puStack_28 = (undefined1 *)0x6d29de;
        FUN_004a2fef();
      }
    }
  }
  else {
    if (iVar2 == 0x27) goto LAB_006d2a26;
    if ((iVar2 == 0x28) && (*(int *)(unaff_EBP + -0x1c) != 0)) {
      pcStack_24 = (char *)(unaff_EBP + 8);
      puStack_28 = (undefined1 *)0x6d29ae;
      pcStack_24 = (char *)FUN_004712f1();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      puStack_28 = (undefined1 *)0x6d29bb;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      goto LAB_006d29c2;
    }
  }
LAB_006d29e5:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  pcStack_24 = (char *)0x6d29f0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  pcStack_24 = (char *)0x6d29fc;
  FUN_00414ebb();
LAB_006d2adb:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


