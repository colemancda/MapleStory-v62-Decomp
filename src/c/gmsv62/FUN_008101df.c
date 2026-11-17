/* FUN_008101df - 0x008101df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008101df(void)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  uVar1 = FUN_0042452b();
  FUN_0045f10c();
  for (uVar1 = uVar1 & 0xff; uVar1 != 0; uVar1 = uVar1 - 1) {
    uVar2 = FUN_0045cdbc(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004655d4(0xffffffff);
    FUN_00414f8b(uVar2);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


