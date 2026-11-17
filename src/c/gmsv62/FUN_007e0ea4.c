/* FUN_007e0ea4 - 0x007e0ea4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e0ea4(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = (undefined4 *)FUN_0045b90e(unaff_EBP + -0x10);
  uVar2 = FUN_0087b6ab(*puVar1);
  *(undefined4 *)(extraout_ECX + 0x7c) = uVar2;
  FUN_00414ebb();
  *(undefined4 *)(extraout_ECX + 0x80) = *(undefined4 *)(*(int *)(extraout_ECX + 0xb4) + 0x60);
  uVar2 = FUN_0045b90e(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00414f8b(uVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


