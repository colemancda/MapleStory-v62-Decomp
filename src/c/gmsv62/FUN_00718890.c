/* FUN_00718890 - 0x00718890 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00718890(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f0c20;
  extraout_ECX[-1] = &PTR_LAB_008f0bd4;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f0bd0;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0087a0b8(extraout_ECX + 0x19,4,5,thunk_FUN_0045f10c);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  DAT_0097bde8 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


