/* FUN_007f6512 - 0x007f6512 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_007f6512(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = FUN_004029b9(0x240);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_007f64c0();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (iVar1 == 0) {
    FUN_008795da(0x8007000e,0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


