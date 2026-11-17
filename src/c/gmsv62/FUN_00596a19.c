/* FUN_00596a19 - 0x00596a19 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00596a19(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar2 = extraout_ECX;
  iVar1 = FUN_004029b9(0x1dc);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00563706(uVar2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0065ce47(uVar2,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


