/* FUN_004bc6a2 - 0x004bc6a2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004bc6a2(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_004bc6ea(extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_008264a7(extraout_ECX + 0x68);
  uVar1 = *(undefined4 *)(extraout_ECX + 100);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004bc71c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}


