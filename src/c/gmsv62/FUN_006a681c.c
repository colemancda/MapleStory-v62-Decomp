/* FUN_006a681c - 0x006a681c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a681c(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ef53c;
  extraout_ECX[-1] = &PTR_LAB_008ef4f0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ef4ec;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_00609ca4();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e5c9();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0045e637();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x1e,4,2,FUN_004115cc);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045e637();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


