/* FUN_00549ee3 - 0x00549ee3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00549ee3(void)

{
  int iVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008eba08;
  extraout_ECX[-1] = &PTR_FUN_008eb9bc;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008eb9b8;
  iVar1 = extraout_ECX[0x2b];
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if (iVar1 != 0) {
    FUN_0048ba7b(0);
    extraout_ECX[0x2b] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450463();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc54c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


