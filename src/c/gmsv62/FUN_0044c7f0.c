/* FUN_0044c7f0 - 0x0044c7f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0044c7f0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  uVar3 = extraout_ECX;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x40b);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00402e8e(uVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676(uVar3);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


