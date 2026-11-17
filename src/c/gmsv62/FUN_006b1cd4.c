/* FUN_006b1cd4 - 0x006b1cd4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006b1cd4(void)

{
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ef894;
  extraout_ECX[-1] = &PTR_FUN_008ef848;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ef844;
  *(undefined4 *)(unaff_EBP + -4) = 0xe;
  FUN_0045e637();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_0045e637();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0045e64d();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_006b416c();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_006b416c();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_006b416c();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_0045e64d();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_0045e637();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0045e637();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_006b416c();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045e637();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_006b416c();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_006b416c();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


