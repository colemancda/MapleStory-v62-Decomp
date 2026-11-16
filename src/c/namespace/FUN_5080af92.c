/* FUN_5080af92 - 0x5080af92 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080af92(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *this;
  int unaff_EBP;
  
  FUN_5080e090();
  puVar1 = *(undefined4 **)(unaff_EBP + 0x14);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_5080b047();
    return;
  }
  piVar2 = *(int **)(unaff_EBP + 8);
  iVar3 = piVar2[7];
  if ((*(byte *)(iVar3 + 8) & 4) != 0) {
    if ((*(byte *)(iVar3 + 8) & 0x10) == 0) {
      FUN_5080b047();
      return;
    }
    if (((*(byte *)(iVar3 + 8) & 0x40) == 0) ||
       ((uint)(piVar2[0x10] + *(int *)(unaff_EBP + 0x10)) <= (uint)piVar2[0x12])) {
      *(undefined4 *)(unaff_EBP + -4) = 0;
      this = (int *)FUN_5080b1a9();
      FUN_50803d00();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_5080a8dd(this,(int *)(unaff_EBP + 0x14),piVar2,*(int *)(unaff_EBP + 0x10));
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int **)(unaff_EBP + 0x14) != (int *)0x0) {
        FUN_508040b6(*(int **)(unaff_EBP + 0x14));
      }
      piVar2[0x10] = piVar2[0x10] + *(int *)(unaff_EBP + 0x10);
      *puVar1 = this;
      (**(code **)(*this + 4))(this);
      FUN_5080b047();
      return;
    }
  }
  FUN_5080b047();
  return;
}


