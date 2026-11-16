/* FUN_50801d1a - 0x50801d1a in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


undefined4 FUN_50801d1a(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  
  FUN_5080e090();
  Ordinal_8(unaff_EBP + -0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = FUN_50803865((ushort *)(unaff_EBP + -0x1c),(ushort *)(unaff_EBP + 0xc),0,8);
  if (iVar1 < 0) {
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_508037a7((short *)(unaff_EBP + -0x1c));
    if (iVar1 < 0) {
      FUN_5080dfed(iVar1);
    }
    uVar2 = 0x80070057;
  }
  else {
    uVar2 = (**(code **)(*(int *)(*(int *)(unaff_EBP + 8) + -0x20) + 0x10))
                      (*(int *)(unaff_EBP + 8) + -0x20,*(undefined4 *)(unaff_EBP + 0x14),
                       *(undefined4 *)(unaff_EBP + 0x1c));
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar1 = FUN_508037a7((short *)(unaff_EBP + -0x1c));
    if (iVar1 < 0) {
      FUN_5080dfed(iVar1);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


