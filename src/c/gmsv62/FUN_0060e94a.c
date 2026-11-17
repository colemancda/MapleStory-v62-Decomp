/* FUN_0060e94a - 0x0060e94a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060e94a(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int local_44;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    local_44 = 0x60e979;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    local_44 = unaff_EBP + -0x2c;
    uStack_48 = 0x60e988;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      local_44 = 0x60e994;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_44 = 0x60e9a4;
    uStack_48 = FUN_00449713();
    *(int **)(unaff_EBP + -0x18) = &local_44;
    uStack_4c = 0x60e9b0;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_48 = 0x60e9c1;
    FUN_0044974c();
    uStack_48 = 0x60e9c8;
    iVar1 = FUN_00448ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(int *)(unaff_EBP + -0x14) = iVar1 + 5;
    local_44 = 0x60e9db;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      local_44 = 0x60e9e6;
      FUN_00878dfb();
    }
    local_44 = 0x60e9ec;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    local_44 = unaff_EBP + -0x3c;
    uStack_48 = 0x60e9f6;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      local_44 = 0x60ea02;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    local_44 = 0x60ea0c;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    local_44 = unaff_EBP + -0x2c;
    uStack_48 = 0x60ea16;
    iVar1 = FUN_00402e32();
    if (iVar1 < 0) {
      local_44 = 0x60ea22;
      FUN_00878dfb();
    }
    local_44 = unaff_EBP + -0x2c;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_48 = 0x60ea35;
    uStack_48 = FUN_00449749();
    uStack_4c = 0x60ea3e;
    uVar2 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_4c;
    FUN_00448a17(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00448dc6(unaff_EBP + -0x18);
    uVar2 = 0x87;
    iVar1 = (*(int *)(unaff_EBP + 8) + 2) * 0x5f - *(int *)(unaff_EBP + -0x14) / 2;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_004115d9(iVar1,0x87);
    FUN_00448e3a(iVar1,uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      local_44 = 0x60ea96;
      (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    local_44 = 0x60eaa3;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      local_44 = 0x60eaae;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    local_44 = 0x60eabb;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      local_44 = 0x60eac6;
      FUN_00878dfb();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


