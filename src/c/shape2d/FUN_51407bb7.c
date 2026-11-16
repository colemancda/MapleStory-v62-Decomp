/* FUN_51407bb7 - 0x51407bb7 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_51407bb7(void)

{
  undefined4 *puVar1;
  int *piVar2;
  double *pdVar3;
  int extraout_ECX;
  int unaff_EBP;
  float10 fVar4;
  
  FUN_5140ad20();
  puVar1 = (undefined4 *)(extraout_ECX + 0x14);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe4;
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  *(undefined4 **)(unaff_EBP + -0x18) = puVar1;
  FUN_5140126a();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(int *)(extraout_ECX + 0x54) == 0) || (DAT_51411afc != *(int *)(extraout_ECX + 0x58))) {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_51406cf7();
  }
  pdVar3 = *(double **)(unaff_EBP + 8);
  if (pdVar3 != (double *)0x0) {
    fVar4 = FUN_51406c15(*(double *)(extraout_ECX + 0x78),_DAT_5140d8c0);
    *pdVar3 = (double)fVar4;
  }
  pdVar3 = *(double **)(unaff_EBP + 0xc);
  if (pdVar3 != (double *)0x0) {
    fVar4 = FUN_51406c15(*(double *)(extraout_ECX + 0x80),_DAT_5140d8c0);
    *pdVar3 = (double)fVar4;
  }
  pdVar3 = *(double **)(unaff_EBP + 0x10);
  if (pdVar3 != (double *)0x0) {
    fVar4 = FUN_51406c15(*(double *)(extraout_ECX + 0x88),_DAT_5140d8c0);
    *pdVar3 = (double)fVar4;
  }
  piVar2 = (int *)(extraout_ECX + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar1 = 0;
  }
  FUN_51407ca1();
  return;
}


