/* FUN_006a3a8c - 0x006a3a8c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a3a8c(void)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  char *extraout_ECX_00;
  char *extraout_ECX_01;
  int unaff_EBP;
  char *pcStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_20;
  
  FUN_00879bb8();
  if (*(int *)(unaff_EBP + 8) != 1) {
LAB_006a3c86:
    if (*(int *)(extraout_ECX + 0x68) == 0) {
      *(undefined4 *)(extraout_ECX + 100) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(extraout_ECX + 0x68) = 1;
      if (*(int *)(extraout_ECX + 0x14) != 0) {
        iStack_20 = 0x6a3ca4;
        FUN_00815de9();
      }
    }
    goto LAB_006a3ca4;
  }
  iStack_20 = unaff_EBP + -0x18;
  uStack_24 = 0x6a3ab9;
  FUN_00605efb();
  iStack_20 = 0;
  uStack_24 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_28 = 0x6a3ac5;
  FUN_0045ed72();
  uStack_24 = 0x6a3acc;
  iStack_20 = FUN_0045ee27();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uStack_24 = 0x6a3ad8;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_20 = 0x6a3ae4;
  FUN_00414ebb();
  iStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 1;
  uStack_2c = 0x400;
  pcStack_30 = (char *)0x6a3af6;
  uStack_28 = FUN_00415015();
  uStack_2c = 0x6a3afc;
  uVar2 = FUN_00471777();
  iStack_20 = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x1c) = uVar2;
  uStack_24 = 0x6a3b0c;
  FUN_004150c0();
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    *(char ***)(unaff_EBP + 8) = &pcStack_30;
    uVar2 = 0x11d;
    pcStack_30 = extraout_ECX_00;
LAB_006a3b20:
    iStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    FUN_00679d22(&pcStack_30,uVar2);
    FUN_007db3ad();
  }
  else {
    iStack_20 = unaff_EBP + -0x10;
    uStack_24 = 0x6a3b47;
    FUN_00414f8b();
    pcVar1 = *(char **)(extraout_ECX + 0x94);
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      *(char ***)(unaff_EBP + 8) = &pcStack_30;
      uVar2 = 0x1116;
      pcStack_30 = pcVar1;
      goto LAB_006a3b20;
    }
    if (*(int *)(extraout_ECX + 0x94) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(extraout_ECX + 0x94) + -4);
    }
    if (0x12d < iVar3) {
      *(char ***)(unaff_EBP + 8) = &pcStack_30;
      uVar2 = 0x1115;
      pcStack_30 = pcVar1;
      goto LAB_006a3b20;
    }
    iStack_20 = unaff_EBP + -0x1c;
    uStack_24 = 0x6a3b9d;
    FUN_0045b90e();
    iStack_20 = 0;
    uStack_24 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_28 = 0x6a3baa;
    FUN_0045ed72();
    uStack_24 = 0x6a3bb1;
    iStack_20 = FUN_0045ee27();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    uStack_24 = 0x6a3bbd;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_20 = 0x6a3bc9;
    FUN_00414ebb();
    iStack_20 = 1;
    uStack_24 = 0;
    uStack_28 = 1;
    uStack_2c = 0x400;
    pcStack_30 = (char *)0x6a3bd7;
    uStack_28 = FUN_00415015();
    uStack_2c = 0x6a3bdd;
    iVar3 = FUN_00471777();
    iStack_20 = 0xffffffff;
    uStack_24 = 0x6a3bec;
    FUN_004150c0();
    if (iVar3 == 0) {
      *(char ***)(unaff_EBP + 8) = &pcStack_30;
      uVar2 = 0x11d;
    }
    else {
      pcVar1 = *(char **)(unaff_EBP + -0x14);
      if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
        *(char ***)(unaff_EBP + 8) = &pcStack_30;
        uVar2 = 0xe3f;
      }
      else {
        if (*(int *)(pcVar1 + -4) < 0x24) {
          iStack_20 = unaff_EBP + -0x14;
          uStack_24 = 0x6a3c6e;
          FUN_00414f8b();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_20 = 0x6a3c7a;
          FUN_00414ebb();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          iStack_20 = 0x6a3c86;
          FUN_00414ebb();
          goto LAB_006a3c86;
        }
        *(char ***)(unaff_EBP + 8) = &pcStack_30;
        uVar2 = 0x1118;
      }
    }
    iStack_20 = 0;
    uStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    pcStack_30 = extraout_ECX_01;
    FUN_00679d22(&pcStack_30,uVar2);
    FUN_007db3ad();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_20 = 0x6a3c51;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_20 = 0x6a3c5d;
  FUN_00414ebb();
LAB_006a3ca4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


