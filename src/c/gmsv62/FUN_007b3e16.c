/* FUN_007b3e16 - 0x007b3e16 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b3e16(void)

{
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00879bb8();
  uVar1 = extraout_ECX;
  uVar2 = extraout_ECX;
  FUN_00455c59(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_007b3e66(*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 8),
               *(undefined4 *)(unaff_EBP + 0xc),uVar1,uVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_0045e7c2(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


