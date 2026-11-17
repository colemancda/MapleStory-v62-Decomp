/* ptr_0085c2ae - 0x0085c2ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0085c2ae(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x2098);
  uVar2 = FUN_0042452b();
  *(uint *)(iVar1 + 0x473) = uVar2 & 0xff;
  if (DAT_0097bef4 != 0) {
    FUN_0077e45e();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


