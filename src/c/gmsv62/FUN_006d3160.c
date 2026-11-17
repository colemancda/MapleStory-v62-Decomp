/* FUN_006d3160 - 0x006d3160 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006d3160(void)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  uVar2 = FUN_0042452b();
  *(undefined ***)(unaff_EBP + -0x1c0) = &PTR_LAB_008e84a0;
  _memset((void *)(unaff_EBP + -0x1c0),0,0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined ***)(unaff_EBP + -0x1c0) = &PTR_FUN_008e8cd8;
  FUN_004b876a(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_0045cdbc(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar3 = FUN_0042452b();
  uVar4 = FUN_0042452b();
  FUN_006d3217(uVar2,unaff_EBP + -0x1c0,*(undefined4 *)(unaff_EBP + 8),uVar3,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


