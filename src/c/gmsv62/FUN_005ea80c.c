/* FUN_005ea80c - 0x005ea80c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005ea80c(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_68;
  char *pcStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_00879bb8();
  uStack_18 = 0x5ea825;
  FUN_004497c2();
  uStack_18 = 0;
  uStack_1c = 100;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = &uStack_2c;
  uStack_30 = 0;
  iStack_34 = 0x5ea839;
  FUN_00424e0a();
  iVar1 = extraout_ECX + 0x80;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_30;
  uStack_38 = 0x5ea84b;
  iStack_34 = iVar1;
  FUN_00433bdf();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_34 = 1;
  uStack_38 = 2;
  iStack_3c = 0x5ea858;
  iStack_34 = FUN_0044972c();
  uStack_38 = *(undefined4 *)(unaff_EBP + 8);
  iStack_3c = 0x5ea866;
  FUN_00449780();
  iStack_3c = 0x5ea86d;
  FUN_0043f082();
  uStack_18 = 0x5ea874;
  FUN_005ea930();
  iVar2 = *(int *)(extraout_ECX + 0x98);
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iStack_34 = 0x3e9;
  *(undefined4 **)(unaff_EBP + 8) = &uStack_38;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  iStack_40 = 0x5ea895;
  iStack_3c = iVar1;
  FUN_00433bdf();
  iStack_40 = extraout_ECX + 0xd4;
  *(int **)(unaff_EBP + -0x14) = &iStack_3c;
  uStack_44 = 0x5ea8a7;
  FUN_0041160e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_40 = 0x5ea8b9;
  iStack_40 = FUN_00449713();
  uStack_44 = 0x5ea8c1;
  uVar4 = FUN_00560272();
  pcVar3 = *(char **)(*(int *)(extraout_ECX + 0x98) + 8);
  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
    uStack_44 = 0;
    uStack_4c = 0;
    uStack_50 = 0;
    uStack_54 = 0;
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_60 = 0x3ea;
    *(char ***)(unaff_EBP + 8) = &pcStack_64;
    iStack_68 = iVar1;
    pcStack_64 = pcVar3;
    uStack_48 = uVar4;
    FUN_00433bdf();
    *(int **)(unaff_EBP + -0x14) = &iStack_68;
    FUN_0041160e(extraout_ECX + 0xd4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar4 = FUN_00449713();
    FUN_00560272(uVar4);
  }
  uStack_44 = 0x5ea91f;
  FUN_005eacbe();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


