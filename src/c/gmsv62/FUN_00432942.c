/* FUN_00432942 - 0x00432942 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00432942(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_00435711(unaff_EBP + 8,unaff_EBP + -0x14);
  if (iVar1 != 0) {
    FUN_00435970(*(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 4));
    FUN_0043584f(*(undefined4 *)(unaff_EBP + -0x10));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_00434da2(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


