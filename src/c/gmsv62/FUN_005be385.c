/* FUN_005be385 - 0x005be385 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005be385(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = **(undefined4 **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_005be754(uVar1);
  FUN_005be657(*(int *)(unaff_EBP + 0xc) + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_005be4ea(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


