/* FUN_50002ed8 - 0x50002ed8 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


int FUN_50002ed8(void)

{
  uint *this;
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  FUN_50012d80();
  iVar1 = -0x7ff8fff2;
  this = FUN_500023f6();
  *(uint **)(unaff_EBP + -0x10) = this;
  puVar2 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this != (uint *)0x0) {
    puVar2 = FUN_50003776(this,*(undefined4 *)(unaff_EBP + 8));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = (**(code **)*puVar2)
                      (puVar2,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar1 != 0) {
      FUN_500037bb(puVar2);
      FUN_5000257e(&DAT_50081f98,puVar2);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


