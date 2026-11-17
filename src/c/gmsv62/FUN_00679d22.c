/* FUN_00679d22 - 0x00679d22 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_00679d22(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  FUN_00679eac();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  FUN_00679ee7(*(undefined4 *)(unaff_EBP + 0xc),unaff_EBP + -0x10);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  FUN_00414edd(*(undefined4 *)(unaff_EBP + -0x10),0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0067a091();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


