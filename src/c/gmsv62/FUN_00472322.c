/* FUN_00472322 - 0x00472322 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00472322(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int extraout_ECX;
  char *pcVar5;
  int unaff_EBP;
  undefined4 uVar6;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar2 = *(int *)(extraout_ECX + 4);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + -4);
  }
  iVar2 = iVar2 + -1;
  *(int *)(unaff_EBP + -0x18) = iVar2;
  while (-1 < iVar2) {
    uVar3 = FUN_004726fc();
    *(undefined1 **)(unaff_EBP + -0x34) = &stack0xffffffc8;
    FUN_00414f8b(uVar3);
    FUN_0047252b(unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_00434e38();
    }
    pcVar5 = *(char **)(unaff_EBP + 0xc);
    if (*(char **)(unaff_EBP + 0xc) == (char *)0x0) {
      pcVar5 = DAT_00980dfc;
    }
    pcVar4 = DAT_00980dfc;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      pcVar4 = *(char **)(unaff_EBP + -0x10);
    }
    iVar2 = _strcmp(pcVar4,pcVar5);
    if (iVar2 == 0) {
LAB_004723fb:
      iVar2 = *(int *)(*(int *)(unaff_EBP + -0x18) * 4 + *(int *)(extraout_ECX + 4));
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + -4);
      }
      iVar2 = *(int *)(unaff_EBP + -0x1c) + 1 + iVar2;
      *(int *)(unaff_EBP + -0x1c) = iVar2;
      if (0x640 < iVar2) break;
      pcVar5 = *(char **)(unaff_EBP + 0x10);
      if (*(char **)(unaff_EBP + 0x10) == (char *)0x0) {
        pcVar5 = DAT_00980dfc;
      }
      pcVar4 = DAT_00980dfc;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        pcVar4 = *(char **)(unaff_EBP + -0x10);
      }
      iVar2 = _strcmp(pcVar4,pcVar5);
      if (iVar2 == 0) {
        uVar6 = 0;
        uVar3 = FUN_00415015(0x400,1);
        FUN_00471777(uVar3,uVar6);
        FUN_004150c0();
      }
      FUN_004653c5(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_0045e02d(unaff_EBP + -0x28);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
    }
    else {
      pcVar5 = *(char **)(unaff_EBP + 0x10);
      if (*(char **)(unaff_EBP + 0x10) == (char *)0x0) {
        pcVar5 = DAT_00980dfc;
      }
      pcVar4 = DAT_00980dfc;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        pcVar4 = *(char **)(unaff_EBP + -0x10);
      }
      iVar2 = _strcmp(pcVar4,pcVar5);
      if (iVar2 == 0) goto LAB_004723fb;
    }
    piVar1 = (int *)(unaff_EBP + -0x18);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
  }
  FUN_0045e070(*(undefined4 *)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


