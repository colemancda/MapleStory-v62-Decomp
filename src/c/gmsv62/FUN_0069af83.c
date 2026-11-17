/* FUN_0069af83 - 0x0069af83 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069af83(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_0045b90e(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00414f8b(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  **(undefined4 **)(unaff_EBP + 0xc) = *(undefined4 *)(*(int *)(extraout_ECX + 0x78) + 0x48);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


