/* FUN_00810fe6 - 0x00810fe6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00810fe6(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f2b74;
  extraout_ECX[-1] = &PTR_FUN_008f2b28;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f2b24;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0045f10c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450463();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00810dfe();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


