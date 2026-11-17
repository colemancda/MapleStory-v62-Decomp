/* ptr_0045a1e8 - 0x0045a1e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_0045a1e8(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x64b);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00550bc4(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),uVar1);
  *(undefined4 *)(unaff_EBP + -0x10) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


