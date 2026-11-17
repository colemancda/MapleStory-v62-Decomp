/* FUN_008279b8 - 0x008279b8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008279b8(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9(100);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_008288fa();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00828ab8(*(undefined4 *)(extraout_ECX + 4),30000,2,2,0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


