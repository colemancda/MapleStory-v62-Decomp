/* FUN_004b81f8 - 0x004b81f8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b81f8(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004653ef(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 8) = *(undefined4 *)(unaff_EBP + 0x10);
  if (iVar1 != 0) {
    FUN_00449913(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


