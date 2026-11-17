/* FUN_00579219 - 0x00579219 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00579219(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_54;
  int iStack_50;
  int local_4c;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x20) = extraout_ECX;
  local_4c = 0x579236;
  FUN_0081622a();
  if (*(int *)(extraout_ECX + 0xd0) < 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    local_4c = *(int *)(*(int *)(DAT_00978368 + 0x326c) + *(int *)(DAT_00978368 + 0x204c) * 4);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_50 = 0x579273;
    FUN_00414edd();
    local_4c = unaff_EBP + 8;
    iStack_50 = unaff_EBP + -0x10;
    *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_54;
    FUN_00450368(unaff_EBP + -0x18);
    FUN_007d3411();
    local_4c = 0x5792a2;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    local_4c = 0x5792b2;
    iStack_50 = FUN_00449713();
    *(int **)(unaff_EBP + -0x1c) = &local_4c;
    uStack_54 = 0x5792be;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_50 = 0x5792cf;
    FUN_0044974c();
    iStack_50 = 0x5792d6;
    uVar1 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    local_4c = 0x5792e6;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      local_4c = 0x5792f1;
      FUN_00878dfb();
    }
    local_4c = 0x5792fa;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    local_4c = 0x579307;
    FUN_00403191();
    local_4c = unaff_EBP + -0x44;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iStack_50 = 0x57931a;
    iStack_50 = FUN_00449749();
    uStack_54 = 0x579323;
    uVar1 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_54;
    FUN_00448a17(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00448dc6(unaff_EBP + -0x1c);
    uVar1 = 0xe;
    iVar2 = 100 - *(int *)(unaff_EBP + -0x14) / 2;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_004115d9(iVar2,0xe);
    FUN_00448e3a(iVar2,uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      local_4c = 0x579371;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    local_4c = 0x57937e;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      local_4c = 0x579389;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    local_4c = 0x579396;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      local_4c = 0x5793a1;
      FUN_00878dfb();
    }
    local_4c = 0x5793ad;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    local_4c = unaff_EBP + -0x34;
    iStack_50 = 0x5793b7;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      local_4c = 0x5793c3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    local_4c = 0x5793d3;
    iStack_50 = FUN_00449713();
    *(int **)(unaff_EBP + -0x24) = &local_4c;
    uStack_54 = 0x5793df;
    FUN_00448a17();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iStack_50 = 0x5793ea;
    FUN_0044974c();
    iStack_50 = 0x5793f1;
    uVar1 = FUN_00448ebb();
    *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    local_4c = 0x579401;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      local_4c = 0x57940c;
      FUN_00878dfb();
    }
    local_4c = 0x579412;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x44));
    local_4c = unaff_EBP + -0x44;
    iStack_50 = 0x57941c;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      local_4c = 0x579428;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    local_4c = 0x579432;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x34));
    local_4c = unaff_EBP + -0x34;
    iStack_50 = 0x57943c;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      local_4c = 0x579448;
      FUN_00878dfb();
    }
    local_4c = unaff_EBP + -0x34;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_50 = 0x57945b;
    iStack_50 = FUN_00449749();
    uStack_54 = 0x579464;
    uVar1 = FUN_00449713();
    *(undefined4 **)(unaff_EBP + -0x24) = &uStack_54;
    FUN_00448a17(uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_00448dc6(unaff_EBP + -0x1c);
    uVar1 = 0x1d;
    iVar2 = 100 - *(int *)(unaff_EBP + -0x14) / 2;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_004115d9(iVar2,0x1d);
    FUN_00448e3a(iVar2,uVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      local_4c = 0x5794b3;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    local_4c = 0x5794c0;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      local_4c = 0x5794cb;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    local_4c = 0x5794d8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      local_4c = 0x5794e3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


