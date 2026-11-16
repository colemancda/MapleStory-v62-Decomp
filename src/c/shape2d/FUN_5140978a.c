/* FUN_5140978a - 0x5140978a in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_5140978a(void)

{
  int *piVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_5140ad20();
  Ordinal_8(unaff_EBP + -0x24);
  iVar3 = FUN_51409c5c((short *)(unaff_EBP + -0x24),(short *)&DAT_51411b08);
  if (iVar3 < 0) {
    FUN_5140ac47(iVar3);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*extraout_ECX == 0) {
    FUN_5140ac47(0x80004003);
  }
  piVar1 = (int *)*extraout_ECX;
  iVar3 = (**(code **)(*piVar1 + 0x8c))
                    (piVar1,unaff_EBP + -0x14,unaff_EBP + -0x10,0,0,0,0,0,0,
                     *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                     *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x18));
  if (iVar3 < 0) {
    FUN_5140ac55(iVar3,piVar1,&DAT_514101c0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iVar4 = FUN_51405818((short *)(unaff_EBP + -0x24));
  if (iVar4 < 0) {
    FUN_5140ac47(iVar4);
  }
  if (iVar3 < 0) {
    FUN_51405a7c((void *)(unaff_EBP + -0x34),iVar3,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x34),(ThrowInfo *)&DAT_5140e068);
  }
  pdVar2 = *(double **)(unaff_EBP + 8);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *pdVar2 = (double)*(int *)(unaff_EBP + -0x14);
  pdVar2[1] = (double)*(int *)(unaff_EBP + -0x10);
  return;
}


