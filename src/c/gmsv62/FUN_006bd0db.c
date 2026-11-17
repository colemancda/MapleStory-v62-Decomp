/* FUN_006bd0db - 0x006bd0db in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bd0db(void)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int unaff_EBP;
  undefined4 uVar2;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  int local_28;
  
  FUN_00879bb8();
  local_28 = unaff_EBP + -0x10;
  iStack_2c = 0x6bd0fc;
  FUN_0045b90e();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(char **)(unaff_EBP + -0x10) == (char *)0x0) || (**(char **)(unaff_EBP + -0x10) == '\0')) {
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_38;
    uVar2 = 0xe40;
    uStack_38 = extraout_ECX_00;
  }
  else {
    local_28 = 1;
    iStack_2c = 0;
    uStack_30 = 1;
    uStack_34 = 0x400;
    uStack_38 = 0x6bd12f;
    uStack_30 = FUN_00415015();
    uStack_34 = 0x6bd135;
    iVar1 = FUN_00471777();
    local_28 = -1;
    iStack_2c = 0x6bd144;
    FUN_004150c0();
    local_28 = 0;
    iStack_2c = 0;
    if (iVar1 != 0) {
      uStack_30 = 0x86;
      uStack_34 = 0x6bd179;
      FUN_0060142b();
      local_28 = 4;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_2c = 0x6bd187;
      FUN_00457cda();
      local_28 = *(int *)(*(int *)(extraout_ECX + 0x584) + 0xc);
      iStack_2c = 0x6bd198;
      FUN_00457d37();
      iStack_2c = unaff_EBP + -0x10;
      *(int **)(unaff_EBP + -0x14) = &local_28;
      local_28 = 0;
      uStack_30 = 0x6bd1a9;
      FUN_00414f8b();
      iStack_2c = 0x6bd1b1;
      FUN_00459cb5();
      local_28 = unaff_EBP + -0x24;
      iStack_2c = 0x6bd1c0;
      FUN_004751b2();
      local_28 = 0x6bd1c7;
      FUN_006bd2ae();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      local_28 = 0x6bd1d2;
      FUN_0045ebca();
      goto LAB_006bd1d2;
    }
    *(undefined4 **)(unaff_EBP + -0x14) = &uStack_38;
    uVar2 = 0x11d;
    uStack_38 = extraout_ECX_01;
  }
  local_28 = 0;
  iStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  FUN_00679d22(&uStack_38,uVar2);
  FUN_007db3ad();
LAB_006bd1d2:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_28 = 0x6bd1de;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


