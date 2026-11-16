/* FUN_5080ae1e - 0x5080ae1e in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080ae1e(void)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_5080e090();
  iVar3 = *(int *)(unaff_EBP + 8);
  iVar4 = *(int *)(iVar3 + 0x1c);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  if (((*(byte *)(iVar4 + 8) & 2) != 0) && ((*(byte *)(iVar4 + 8) & 0x20) != 0)) {
    if ((*(byte *)(iVar4 + 8) & 0x40) == 0) {
      iVar4 = **(int **)(*(int *)(iVar3 + 0x1c) + 0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      (**(code **)(iVar4 + 0x28))(0,0);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x40) = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar3 + 0x44);
    }
    puVar1 = (uint *)(*(int *)(iVar3 + 0x1c) + 8);
    *puVar1 = *puVar1 & 0xfffffffd;
    puVar1 = (uint *)(*(int *)(iVar3 + 0x1c) + 8);
    *puVar1 = *puVar1 | 4;
    *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar3 + 0x20);
    FUN_508012a1();
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_508037a7((short *)(iVar3 + 0x28));
    piVar2 = (int *)(iVar3 + 0x24);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      *(undefined4 *)(iVar3 + 0x20) = 0;
    }
    FUN_5080aec6();
    return;
  }
  FUN_5080aec6();
  return;
}


