/* FUN_006bce3f - 0x006bce3f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bce3f(void)

{
  int iVar1;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int unaff_EBP;
  undefined4 uVar2;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int local_2c;
  
  FUN_00879bb8();
  local_2c = unaff_EBP + -0x14;
  iStack_30 = 0x6bce60;
  FUN_0045b90e();
  local_2c = unaff_EBP + -0x10;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_30 = 0x6bce74;
  FUN_00605efb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_3c = extraout_ECX_00;
  if ((*(char **)(unaff_EBP + -0x14) == (char *)0x0) || (**(char **)(unaff_EBP + -0x14) == '\0')) {
    *(undefined4 **)(unaff_EBP + 8) = &uStack_3c;
    uVar2 = 0xe3f;
  }
  else if ((*(char **)(unaff_EBP + -0x10) == (char *)0x0) ||
          (**(char **)(unaff_EBP + -0x10) == '\0')) {
    *(undefined4 **)(unaff_EBP + 8) = &uStack_3c;
    uVar2 = 0xe40;
  }
  else {
    local_2c = 1;
    iStack_30 = 0;
    uStack_34 = 1;
    uStack_38 = 0x400;
    uStack_3c = 0x6bcec6;
    uStack_34 = FUN_00415015();
    uStack_38 = 0x6bcecc;
    uVar2 = FUN_00471777();
    local_2c = -1;
    *(undefined4 *)(unaff_EBP + -0x18) = uVar2;
    iStack_30 = 0x6bcedc;
    FUN_004150c0();
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      *(undefined4 **)(unaff_EBP + 8) = &uStack_3c;
      uStack_3c = extraout_ECX_01;
    }
    else {
      local_2c = 1;
      iStack_30 = 0;
      uStack_34 = 1;
      uStack_38 = 0x400;
      uStack_3c = 0x6bcefb;
      uStack_34 = FUN_00415015();
      uStack_38 = 0x6bcf01;
      iVar1 = FUN_00471777();
      local_2c = -1;
      iStack_30 = 0x6bcf10;
      FUN_004150c0();
      local_2c = 0;
      iStack_30 = 0;
      if (iVar1 != 0) {
        uStack_34 = 0x86;
        uStack_38 = 0x6bcf48;
        FUN_0060142b();
        local_2c = 0;
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_30 = 0x6bcf55;
        FUN_00457cda();
        local_2c = *(int *)(unaff_EBP + 8);
        iStack_30 = 0x6bcf60;
        FUN_00457cda();
        if (*(int *)(unaff_EBP + 8) != 0) {
          local_2c = *(int *)(*(int *)(extraout_ECX + 0x584) + 0xc);
          iStack_30 = 0x6bcf76;
          FUN_00457d37();
        }
        local_2c = *(int *)(unaff_EBP + 0xc);
        iStack_30 = 0x6bcf81;
        FUN_00457cda();
        iStack_30 = unaff_EBP + -0x14;
        *(int **)(unaff_EBP + 8) = &local_2c;
        local_2c = 0;
        uStack_34 = 0x6bcf92;
        FUN_00414f8b();
        iStack_30 = 0x6bcf9a;
        FUN_00459cb5();
        iStack_30 = unaff_EBP + -0x10;
        *(int **)(unaff_EBP + 8) = &local_2c;
        local_2c = 0;
        uStack_34 = 0x6bcfab;
        FUN_00414f8b();
        iStack_30 = 0x6bcfb3;
        FUN_00459cb5();
        local_2c = *(int *)(extraout_ECX + 0x5a0);
        iStack_30 = 0x6bcfc1;
        FUN_00457d37();
        local_2c = unaff_EBP + -0x28;
        iStack_30 = 0x6bcfd0;
        FUN_004751b2();
        *(undefined4 *)(extraout_ECX + 0x588) = 0;
        local_2c = 0x6bcfdd;
        FUN_006bd2ae();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        local_2c = 0x6bcfe9;
        FUN_0045ebca();
        goto LAB_006bcfe9;
      }
      *(undefined4 **)(unaff_EBP + 8) = &uStack_3c;
      uStack_3c = extraout_ECX_02;
    }
    uVar2 = 0x11d;
  }
  local_2c = 0;
  iStack_30 = 0;
  uStack_34 = 0;
  uStack_38 = 0;
  FUN_00679d22(&uStack_3c,uVar2);
  FUN_007db3ad();
LAB_006bcfe9:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  local_2c = 0x6bcff4;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_2c = 0x6bd000;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


