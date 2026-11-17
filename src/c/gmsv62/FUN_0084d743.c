/* FUN_0084d743 - 0x0084d743 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084d743(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  uint local_28;
  
  FUN_00879bb8();
  local_28 = 0x84d75a;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    local_28 = unaff_EBP - 0x14;
    iStack_2c = 0x84d7b1;
    FUN_0045cdbc();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    local_28 = 0x84d7bc;
    uVar3 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    local_28 = 0x103a;
    iStack_2c = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_30 = 0x84d7d8;
    puVar4 = (undefined4 *)FUN_00679d22();
    local_28 = *(uint *)(unaff_EBP + -0x14);
    iStack_2c = *puVar4;
    iStack_30 = unaff_EBP + -0x10;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    uStack_34 = 0x84d7eb;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_28 = 0x84d7fa;
    FUN_00414ebb();
    local_28 = 0;
    iStack_2c = 0;
    iStack_30 = 0x7d;
    uStack_34 = 0x84d806;
    FUN_0060142b();
    local_28 = 2;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iStack_2c = 0x84d814;
    FUN_00457cda();
    local_28 = 0;
    iStack_2c = 0;
    iStack_30 = 0;
    uStack_34 = 0;
    *(undefined1 **)(unaff_EBP + 8) = auStack_38;
    FUN_00450368(unaff_EBP + -0x10);
    iVar2 = FUN_007db791();
    local_28 = (uint)(iVar2 == 6);
    iStack_2c = 0x84d841;
    FUN_00457cda();
    iStack_2c = unaff_EBP + -0x14;
    *(uint **)(unaff_EBP + 8) = &local_28;
    local_28 = 0;
    iStack_30 = 0x84d852;
    FUN_00414f8b();
    iStack_2c = 0x84d85a;
    FUN_00459cb5();
    iStack_2c = 0x84d863;
    local_28 = uVar3;
    FUN_00457d37();
    local_28 = unaff_EBP - 0x28;
    iStack_2c = 0x84d872;
    FUN_004751b2();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    local_28 = 0x84d87e;
    FUN_0045ebca();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    local_28 = 0x84d889;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    local_28 = 0x84d895;
    FUN_00414ebb();
  }
  else if ((cVar1 == '\t') && (DAT_00979178 == 0)) {
    local_28 = 0xe0;
    iStack_2c = 0x84d787;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 4;
    if (iVar2 != 0) {
      local_28 = 0x84d7a0;
      FUN_0080dd99();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


