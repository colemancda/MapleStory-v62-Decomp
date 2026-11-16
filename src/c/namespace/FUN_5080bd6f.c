/* FUN_5080bd6f - 0x5080bd6f in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080bd6f(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_5080e090();
  iVar3 = **(int **)(*(int *)(unaff_EBP + 8) + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar1 = *(int **)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  iVar3 = (**(code **)(iVar3 + 0xc))
                    (*piVar1,*(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18));
  piVar2 = *(int **)(unaff_EBP + 0x1c);
  *piVar1 = *piVar1 + iVar3;
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar3;
  }
  FUN_5080bdcb();
  return;
}


