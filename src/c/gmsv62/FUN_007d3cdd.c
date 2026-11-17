/* FUN_007d3cdd - 0x007d3cdd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d3cdd(void)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = extraout_ECX;
  FUN_00679d86(unaff_EBP + -0x10,0x873);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_0087a007(*(undefined4 *)(unaff_EBP + 8),uVar1);
  FUN_0046febf(*(undefined4 *)(unaff_EBP + 8),uVar1);
  FUN_00433c19(*(undefined4 *)(unaff_EBP + -0x10),100,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


