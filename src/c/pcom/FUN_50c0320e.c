/* FUN_50c0320e - 0x50c0320e in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int FUN_50c0320e(void)

{
  uint *this;
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  FUN_50c10270();
  iVar1 = -0x7ff8fff2;
  this = FUN_50c025fb();
  *(uint **)(unaff_EBP + -0x10) = this;
  puVar2 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this != (uint *)0x0) {
    puVar2 = FUN_50c03b36(this,*(undefined4 *)(unaff_EBP + 8));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = (**(code **)*puVar2)
                      (puVar2,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar1 != 0) {
      FUN_50c03b7b(puVar2);
      FUN_50c02783(&DAT_50c21310,puVar2);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


