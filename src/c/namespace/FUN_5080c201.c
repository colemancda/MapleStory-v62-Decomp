/* FUN_5080c201 - 0x5080c201 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_5080c201(void)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  int unaff_EBP;
  uint uVar3;
  
  FUN_5080e090();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = 0x10000;
  puVar1 = FUN_5080fc68((int *)(unaff_EBP + -0x10));
  iVar2 = FUN_5080c251(this,*(int **)(unaff_EBP + 8),*(uint *)(unaff_EBP + 0xc),puVar1,uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_5080fbb9((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


