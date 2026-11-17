/* FUN_004e9e3e - 0x004e9e3e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e9e3e(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(DAT_00978368 + 0x2b40) == 0) {
    uVar1 = FUN_00679d22(unaff_EBP + -0x10,0x14f);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00471102(uVar1,0xc);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  else {
    FUN_0060142b(0x70,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 1;
    FUN_00457cda(2);
    FUN_00457cda(0);
    FUN_004751b2(unaff_EBP + -0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


