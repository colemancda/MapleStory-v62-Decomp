/* FUN_0075ecf0 - 0x0075ecf0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0075ecf0(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_LAB_008f1154;
  extraout_ECX[-1] = &PTR_LAB_008f1108;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f1104;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_00766b93();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  DAT_0097bea4 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00789fbd();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


