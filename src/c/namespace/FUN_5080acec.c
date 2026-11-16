/* FUN_5080acec - 0x5080acec in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080acec(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5080e090();
  piVar1 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  if (piVar1 == (int *)0x0) {
    FUN_5080ad64();
    return;
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  if ((*(byte *)(*(int *)(iVar2 + 0x1c) + 8) & 0x20) == 0) {
    FUN_5080ad64();
    return;
  }
  if ((*(byte *)(*(int *)(iVar2 + 0x1c) + 8) & 0x40) == 0) {
    iVar2 = **(int **)(*(int *)(iVar2 + 0x1c) + 0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar2 = (**(code **)(iVar2 + 0x2c))();
    *piVar1 = iVar2;
  }
  else {
    *piVar1 = *(int *)(iVar2 + 0x48) - *(int *)(iVar2 + 0x44);
  }
  FUN_5080ad64();
  return;
}


