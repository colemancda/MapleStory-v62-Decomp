/* FUN_005bdf23 - 0x005bdf23 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005bdf23(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_005be716();
  FUN_005be455(unaff_EBP + 8);
  **(undefined4 **)(unaff_EBP + 0xc) = uVar1;
  FUN_005be56d(*(int *)(unaff_EBP + 0xc) + 0x10,unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + 0xc) != 0) {
    FUN_005be4ea(0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


