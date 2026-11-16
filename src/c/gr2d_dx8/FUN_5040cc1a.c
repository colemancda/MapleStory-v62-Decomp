/* FUN_5040cc1a - 0x5040cc1a in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_5040cc1a(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_5042a430();
  puVar1 = (undefined4 *)*extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    iVar4 = (**(code **)*puVar1)(puVar1,&DAT_50434110,unaff_EBP + -0x10);
    if (iVar4 < 0) {
      FUN_5042a358(iVar4);
    }
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))(*(int **)(unaff_EBP + -0x10));
  }
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    iVar4 = (**(code **)*piVar2)(piVar2,&DAT_50434110,unaff_EBP + -0x14);
    if (iVar4 < 0) {
      FUN_5042a358(iVar4);
    }
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))(*(int **)(unaff_EBP + -0x14));
  }
  iVar4 = *(int *)(unaff_EBP + -0x10);
  iVar3 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4 - iVar3 >> 2;
}


