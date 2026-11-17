/* FUN_006cc787 - 0x006cc787 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006cc787(void)

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
  if (*(int *)(extraout_ECX + 0xa8) < 0) {
    **(undefined4 **)(unaff_EBP + 0xc) = 999999999;
  }
  else {
    **(undefined4 **)(unaff_EBP + 0xc) =
         *(undefined4 *)(extraout_ECX + 0xb0 + *(int *)(extraout_ECX + 0xa8) * 4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


