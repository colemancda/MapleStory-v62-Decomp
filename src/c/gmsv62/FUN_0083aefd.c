/* FUN_0083aefd - 0x0083aefd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0083aefd(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (DAT_0097846c == 0) {
    FUN_0083d8b4(extraout_ECX);
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x8e3);
    uVar1 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007d3cdd(uVar1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
  }
  FUN_0044fc0f(*(undefined4 *)(unaff_EBP + 8));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


