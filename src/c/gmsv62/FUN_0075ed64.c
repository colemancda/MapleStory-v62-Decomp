/* FUN_0075ed64 - 0x0075ed64 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0075ed64(void)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 auStack_94 [2];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  
  FUN_00879bb8();
  iStack_60 = 0;
  iStack_64 = 0;
  puStack_70 = (undefined1 *)&uStack_68;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_68;
  uStack_6c = 0x7f7;
  uStack_74 = 0x75ed92;
  FUN_00679e4e();
  uStack_6c = 0x75ed99;
  FUN_008163ca();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_60 = 0x7f8;
  iStack_64 = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  uStack_68 = 0x75edb8;
  iStack_60 = FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_64 = 0x75edc5;
  FUN_00419192();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_60 = 0x75edd0;
  FUN_00402676();
  iStack_60 = 0x578;
  iStack_64 = 0x75eddf;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 == 0) {
    iStack_60 = 0;
  }
  else {
    iStack_60 = 0x75edf1;
    iStack_60 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iStack_64 = 0x75ee04;
  iVar1 = FUN_00450382();
  iStack_60 = unaff_EBP + -0x24;
  iStack_64 = 1;
  uStack_68 = 0x4c;
  uStack_6c = 0x8c;
  puStack_70 = (undefined1 *)0x1;
  iStack_78 = 0x75ee1e;
  (**(code **)(**(int **)(iVar1 + 4) + 0x20))();
  iStack_78 = 0x75ee26;
  FUN_0049f842();
  *(undefined4 *)(unaff_EBP + -0x38) = 0xffffffff;
  iStack_78 = 10;
  iStack_7c = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  *(undefined4 *)(unaff_EBP + -0x40) = 0xff000000;
  uStack_80 = 0x75ee42;
  puVar2 = (undefined4 *)FUN_00679e4e();
  iStack_78 = 0x75ee4b;
  FUN_00408b49();
  iStack_78 = 0x75ee53;
  FUN_00402fa6();
  *(undefined4 *)(unaff_EBP + -0x48) = *puVar2;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    iStack_78 = 0x75ee64;
    FUN_004030b1();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  iStack_78 = 0xb8;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0x100;
  iStack_7c = 0x75ee7d;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar1 == 0) {
    iStack_78 = 0;
  }
  else {
    iStack_78 = 0x75ee8f;
    iStack_78 = FUN_004a0726();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_7c = 0x75eea3;
  FUN_0045e196();
  iStack_78 = unaff_EBP + -0x5c;
  iStack_7c = 0xd;
  uStack_80 = 0x73;
  uStack_84 = 0x4e;
  uStack_88 = 0xf;
  uStack_8c = 2;
  auStack_94[0] = 0x75eebd;
  (**(code **)(**(int **)(extraout_ECX + 0x584) + 8))();
  *(undefined4 **)(unaff_EBP + -0x14) = auStack_94;
  auStack_94[0] = 0;
  FUN_004184ca(&DAT_0097812c,0xffffffff);
  FUN_0078a024(*(undefined4 *)(unaff_EBP + 8));
  auStack_94[0] = *(undefined4 *)(extraout_ECX + 0x584);
  FUN_008164fd();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  auStack_94[0] = 0x75eef3;
  FUN_0045c14e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  auStack_94[0] = 0x75eeff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


