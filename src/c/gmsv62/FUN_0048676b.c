/* FUN_0048676b - 0x0048676b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0048676b(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 local_14;
  
  FUN_00879bb8();
  local_14 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iStack_18 = 0x48678c;
  FUN_004a2fef();
  local_14 = 1;
  iStack_18 = 0;
  uStack_1c = 1;
  uStack_20 = 0x400;
  uStack_24 = 0x48679e;
  uStack_1c = FUN_00415015();
  uStack_20 = 0x4867a4;
  iVar1 = FUN_00471777();
  local_14 = 0xffffffff;
  iStack_18 = 0x4867b3;
  FUN_004150c0();
  if (iVar1 == 0) {
    local_14 = 0;
    iStack_18 = 0;
    uStack_1c = 0;
    uStack_20 = 0;
    *(undefined4 **)(unaff_EBP + -0x10) = &uStack_24;
    uStack_24 = extraout_ECX;
    FUN_00679d22(&uStack_24,0x11d);
    FUN_007db3ad();
  }
  else {
    iStack_18 = unaff_EBP + 8;
    *(undefined4 **)(unaff_EBP + -0x10) = &local_14;
    local_14 = 0;
    uStack_1c = 0x4867ec;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_18 = 0x4867fa;
    FUN_0048b9e5();
    iStack_18 = 0x486801;
    FUN_007c560b();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_14 = 0x48680d;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


