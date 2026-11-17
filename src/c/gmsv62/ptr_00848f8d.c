/* ptr_00848f8d - 0x00848f8d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00848f8d(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  int unaff_ESI;
  
  iVar1 = FUN_004becbc();
  if (iVar1 != 0) {
    FUN_0060142b(0x56);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_007d1e08();
    FUN_00457d37();
    FUN_00457d37();
    FUN_004751b2();
    *(undefined4 *)(unaff_ESI + 0x208c) = 1;
    uVar2 = FUN_007d1e08();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_ESI + 0x2090) = uVar2;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


