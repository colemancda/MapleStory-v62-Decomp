/* FUN_007b251a - 0x007b251a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007b251a(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uVar3;
  
  FUN_00879bb8();
  uVar3 = extraout_ECX;
  puVar2 = (undefined4 *)FUN_0045cdbc(unaff_EBP + -0x10);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  FUN_00470891(uVar1,0xffffffff);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00414ebb(uVar3);
  FUN_007d4970(*(undefined4 *)(unaff_EBP + 8),100);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


