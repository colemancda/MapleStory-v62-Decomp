/* FUN_508013c7 - 0x508013c7 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_508013c7(void)

{
  uint *this;
  int iVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  FUN_5080e090();
  iVar1 = -0x7ff8fff2;
  this = FUN_50803b07();
  *(uint **)(unaff_EBP + -0x10) = this;
  puVar2 = (undefined4 *)0x0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (this != (uint *)0x0) {
    puVar2 = FUN_508025a0(this,*(undefined4 *)(unaff_EBP + 8));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    iVar1 = (**(code **)*puVar2)
                      (puVar2,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar1 != 0) {
      FUN_508025ca();
      FUN_50803c7e(&DAT_5081e9e0,puVar2);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar1;
}


