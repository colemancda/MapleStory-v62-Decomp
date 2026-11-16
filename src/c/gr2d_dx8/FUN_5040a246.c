/* FUN_5040a246 - 0x5040a246 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040a246(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  
  FUN_5042a430();
  puVar1 = *(undefined4 **)(unaff_EBP + 0xc);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffff0;
  if (puVar1 == (undefined4 *)0x0) {
    FUN_5040a29f();
    return;
  }
  iVar2 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(iVar2 + 0x40) == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar3 = FUN_5040d20e(*(int **)(iVar2 + 0x40));
  *puVar1 = piVar3;
  FUN_5040a29f();
  return;
}


