/* FUN_510015e0 - 0x510015e0 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


int FUN_510015e0(void)

{
  uint *this;
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  FUN_51005950();
  iVar1 = -0x7ff8fff2;
  this = FUN_51001acd();
  *(uint **)(unaff_EBP + -0x10) = this;
  puVar2 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this != (uint *)0x0) {
    puVar2 = FUN_5100181b(this,*(undefined4 *)(unaff_EBP + 8));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = (**(code **)*puVar2)
                      (puVar2,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar1 != 0) {
      FUN_51001852();
      FUN_51001bce(&DAT_510097f0,puVar2);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


