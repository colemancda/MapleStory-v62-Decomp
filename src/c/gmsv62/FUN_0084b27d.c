/* FUN_0084b27d - 0x0084b27d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084b27d(void)

{
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00879bb8();
  uVar2 = extraout_ECX;
  FUN_0045b90e(unaff_EBP + -0x10);
  uVar1 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045ed72(0);
  uVar1 = FUN_0045ee27(uVar1);
  FUN_00414f8b(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb(uVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


