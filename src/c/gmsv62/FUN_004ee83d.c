/* FUN_004ee83d - 0x004ee83d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ee83d(void)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_18;
  int iStack_14;
  
  FUN_00879bb8();
  iStack_14 = 0x4ee855;
  uVar1 = FUN_0042452b();
  *(uint *)(extraout_ECX + 0x1f0) = uVar1 & 0xff;
  iStack_14 = 0x4ee866;
  iVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar2 != 0) {
    iStack_14 = unaff_EBP + 8;
    uStack_18 = 0x4ee880;
    iStack_14 = FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_18 = 0x4ee88d;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iStack_14 = 0x4ee899;
    FUN_00414ebb();
  }
  iStack_14 = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_18;
  FUN_00450368(unaff_EBP + -0x10);
  FUN_004ee3ab(iVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_14 = 0x4ee8be;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


