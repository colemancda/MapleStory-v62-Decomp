/* FUN_5080be4e - 0x5080be4e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080be4e(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_5080e090();
  iVar1 = **(int **)(*(int *)(unaff_EBP + 8) + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  iVar1 = (**(code **)(iVar1 + 8))
                    (*(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18));
  **(int **)(unaff_EBP + 0xc) = **(int **)(unaff_EBP + 0xc) + iVar1;
  if (*(int **)(unaff_EBP + 0x1c) != (int *)0x0) {
    **(int **)(unaff_EBP + 0x1c) = iVar1;
  }
  FUN_5080bea8();
  return;
}


