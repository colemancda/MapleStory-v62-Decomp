/* FUN_005dd3fe - 0x005dd3fe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005dd3fe(void)

{
  int iVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  
  FUN_00879bb8();
  uVar2 = extraout_ECX;
  iVar1 = FUN_004029b9(0xa0);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_005ddf98(uVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


