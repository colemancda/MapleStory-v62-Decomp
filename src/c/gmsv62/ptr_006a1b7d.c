/* ptr_006a1b7d - 0x006a1b7d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006a1b7d(void)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  
  iVar1 = FUN_0040e53d();
  uVar2 = 600U - iVar1 >> 1;
  iVar1 = FUN_0040e48b(uVar2);
  FUN_0081420c(800U - iVar1 >> 1,uVar2);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


