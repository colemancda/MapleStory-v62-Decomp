/* FUN_008010db - 0x008010db in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_008010db(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = (undefined4 *)FUN_004029b9(0x270);
  *(undefined4 **)(unaff_EBP + -0x10) = puVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_007f0e57();
    *puVar1 = &PTR_FUN_008f2698;
    puVar1[3] = &PTR_FUN_008f25e8;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_008795da(0x8007000e,0);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


