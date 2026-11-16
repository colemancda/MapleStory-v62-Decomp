/* FUN_50804f7a - 0x50804f7a in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 * FUN_50804f7a(void)

{
  uint *this;
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  this = FUN_50803b07();
  *(uint **)(unaff_EBP + -0x10) = this;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this == (uint *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50804fd2(this,*(int *)(unaff_EBP + 8));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *extraout_ECX = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_5080dfed(0x8007000e);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


