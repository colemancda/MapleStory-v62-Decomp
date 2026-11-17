/* FUN_00592fe6 - 0x00592fe6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00592fe6(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00592d42(*(undefined4 *)(unaff_EBP + 8));
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + 8,0x54e);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_007d3cdd(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


