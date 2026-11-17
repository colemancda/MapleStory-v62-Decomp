/* FUN_00464e98 - 0x00464e98 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00464e98(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_0060142b(0x23,0,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004751b2(unaff_EBP + -0x20);
  iVar1 = FUN_004029b9(0x18);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0052899a();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0065ce47(uVar2,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0045ebca();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


