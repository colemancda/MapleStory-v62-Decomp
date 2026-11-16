/* FUN_50c08ef6 - 0x50c08ef6 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


int FUN_50c08ef6(void)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  int unaff_EBP;
  uint uVar3;
  
  FUN_50c10270();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = 0x10000;
  puVar1 = FUN_50c08f53((int *)(unaff_EBP + -0x10));
  iVar2 = FUN_50c08fc6(this,*(int **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),puVar1,uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_50c08f46((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


