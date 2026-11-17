/* FUN_007a657e - 0x007a657e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007a657e(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00817e25(unaff_EBP + -0x18,1);
  iVar1 = FUN_0046f7d9(*(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
  if (iVar1 != 0) {
    FUN_0060142b(0x2f,0,0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_004751b2(unaff_EBP + -0x28);
    uVar2 = FUN_00679d22(unaff_EBP + -0x10,0x572);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00471102(uVar2,0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


