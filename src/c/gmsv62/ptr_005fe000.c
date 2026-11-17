/* ptr_005fe000 - 0x005fe000 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_005fe000(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  FUN_0045ebca();
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x621);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_007d40d5(uVar1,100);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


