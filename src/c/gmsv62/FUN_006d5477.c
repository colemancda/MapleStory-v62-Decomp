/* FUN_006d5477 - 0x006d5477 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d5477(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_34;
  int iStack_30;
  int local_2c;
  
  FUN_00879bb8();
  local_2c = unaff_EBP + 8;
  iStack_30 = 0x6d549b;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  local_2c = 0x6d54a7;
  uVar2 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x14) = uVar2 & 0xff;
  local_2c = 0x6d54b4;
  uVar3 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
  local_2c = 0x6d54be;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    if (*(int *)(DAT_00978134 + 0x28) != 0) {
      iStack_30 = unaff_EBP + 8;
      *(int **)(unaff_EBP + -0x18) = &local_2c;
      local_2c = 0;
      uStack_34 = 0x6d54e4;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iStack_30 = 0x6d54ec;
      FUN_004f14ee();
      iStack_30 = 0x6d54f3;
      iVar4 = FUN_0047c5bf();
      if (iVar4 == 0) goto LAB_006d556f;
    }
    local_2c = 0;
    iStack_30 = 0;
    uStack_34 = 0x6e;
    FUN_0060142b();
    local_2c = 5;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_30 = 0x6d5511;
    FUN_00457cda();
    iStack_30 = unaff_EBP + 8;
    *(int **)(unaff_EBP + -0x18) = &local_2c;
    local_2c = 0;
    uStack_34 = 0x6d5522;
    FUN_00414f8b();
    iStack_30 = 0x6d552a;
    FUN_00459cb5();
    local_2c = 0x6d5531;
    uStack_34 = FUN_00485c13();
    *(int **)(unaff_EBP + -0x18) = &local_2c;
    iStack_30 = 0xffffffff;
    local_2c = 0;
    FUN_00414edd();
    iStack_30 = 0x6d5549;
    FUN_00459cb5();
    local_2c = 1;
    iStack_30 = 0x6d5553;
    FUN_00457cda();
    local_2c = unaff_EBP + -0x28;
    iStack_30 = 0x6d5562;
    FUN_004751b2();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    local_2c = 0x6d556d;
    FUN_0045ebca();
  }
  else {
LAB_006d556f:
    local_2c = 0x110;
    iStack_30 = 0x6d557e;
    iVar4 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x18) = iVar4;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar4 == 0) {
      iVar4 = 0;
      uStack_34 = 0;
    }
    else {
      local_2c = 0x6d5590;
      iVar4 = FUN_004defeb();
      uStack_34 = extraout_ECX;
    }
    local_2c = *(int *)(unaff_EBP + -0x10);
    iStack_30 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    *(undefined4 **)(unaff_EBP + -0x18) = &uStack_34;
    FUN_00450368(unaff_EBP + 8);
    FUN_004e0db4();
    iStack_30 = 0x6d55bd;
    local_2c = iVar4;
    FUN_008497ad();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_2c = 0x6d55c9;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


