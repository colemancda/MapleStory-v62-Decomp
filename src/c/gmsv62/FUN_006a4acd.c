/* FUN_006a4acd - 0x006a4acd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a4acd(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ef3a4;
  extraout_ECX[-1] = &PTR_LAB_008ef358;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ef354;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00450514();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004505d7();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e60b();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450463();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


