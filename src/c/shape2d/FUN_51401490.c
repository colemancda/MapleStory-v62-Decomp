/* FUN_51401490 - 0x51401490 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int FUN_51401490(void)

{
  uint *this;
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  FUN_5140ad20();
  iVar1 = -0x7ff8fff2;
  this = FUN_51402409();
  *(uint **)(unaff_EBP + -0x10) = this;
  puVar2 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this != (uint *)0x0) {
    puVar2 = FUN_51401b79(this,*(undefined4 *)(unaff_EBP + 8));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = (**(code **)*puVar2)
                      (puVar2,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar1 != 0) {
      FUN_51401bc5(puVar2);
      FUN_5140256c(&DAT_51411a90,puVar2);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


