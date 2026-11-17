/* FUN_006bf096 - 0x006bf096 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006bf096(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008efa58;
  extraout_ECX[-1] = &PTR_FUN_008efa0c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008efa08;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_0045ebca();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0074d4c3();
  iVar1 = extraout_ECX[0x21];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar1 != 0) {
    FUN_00449913(0);
    extraout_ECX[0x21] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450463();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc9b1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


