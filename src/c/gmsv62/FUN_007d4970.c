/* FUN_007d4970 - 0x007d4970 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d4970(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = extraout_ECX;
  uVar4 = extraout_ECX;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x14,0x9cf);
  uVar1 = *puVar2;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0041354c(unaff_EBP + -0x10,uVar1,*(undefined4 *)(unaff_EBP + 8),uVar3,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  FUN_00433c19(*(undefined4 *)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 0xc),0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


