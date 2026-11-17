/* FUN_005070f0 - 0x005070f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005070f0(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-3] = &PTR_FUN_008eaab8;
  extraout_ECX[-2] = &PTR_FUN_008eaa6c;
  extraout_ECX[-1] = &PTR_FUN_008eaa68;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eaa64;
  iVar1 = DAT_00978358;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_007b02be();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004e5db7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


