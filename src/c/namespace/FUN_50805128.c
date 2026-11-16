/* FUN_50805128 - 0x50805128 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int * FUN_50805128(void)

{
  undefined4 uVar1;
  uint *this;
  int *piVar2;
  int *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5080e090();
  this = FUN_50803b07();
  *(uint **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this == (uint *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_508051fc(this,extraout_ECX,*(int **)(unaff_EBP + 8));
  }
  if ((int *)*extraout_ECX != (int *)0x0) {
    FUN_508040b6((int *)*extraout_ECX);
    *extraout_ECX = 0;
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0xc);
  *extraout_ECX = (int)piVar2;
  *unaff_FS_OFFSET = uVar1;
  return extraout_ECX;
}


