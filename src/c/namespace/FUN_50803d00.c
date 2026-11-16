/* FUN_50803d00 - 0x50803d00 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * FUN_50803d00(void)

{
  uint *this;
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  undefined4 *unaff_FS_OFFSET;
  
  FUN_5080e090();
  this = FUN_50803b07();
  *(uint **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this == (uint *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_50803f3d(this,*(int *)(unaff_EBP + 8),(char)*(undefined4 *)(unaff_EBP + 0xc));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *extraout_ECX = piVar1;
  if (piVar1 == (int *)0x0) {
    FUN_5080dfed(0x8007000e);
  }
  *unaff_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0xc);
  return extraout_ECX;
}


