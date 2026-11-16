/* FUN_5040a2b0 - 0x5040a2b0 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_5040a2b0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_5042a430();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = *(int *)(unaff_EBP + 8);
  iVar1 = *(int *)(iVar3 + 0x40);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (iVar1 == 0) {
    FUN_5042a358(0x80004003);
  }
  piVar2 = *(int **)(iVar3 + 0x40);
  iVar3 = (**(code **)(*piVar2 + 0x74))(piVar2,*(undefined4 *)(unaff_EBP + 0xc));
  if (iVar3 < 0) {
    FUN_5042a366(iVar3,piVar2,&DAT_50435298);
  }
  FUN_5040a30e();
  return;
}


