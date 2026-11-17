/* ptr_0085646b - 0x0085646b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0085646b(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  uVar1 = FUN_00679d22(unaff_EBP + -0xc0,0xd91);
  *(undefined1 *)(unaff_EBP + -4) = 0x4e;
  FUN_00471102(uVar1,0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0xc0) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + -0xc0) + -0xc);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) != 0) {
    FUN_00434e38(*(int *)(unaff_EBP + 8) + -0xc);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


