/* FUN_51406adc - 0x51406adc in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_51406adc(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  double *pdVar4;
  int extraout_ECX;
  int unaff_EBP;
  float10 fVar5;
  
  FUN_5140ad20();
  puVar1 = (undefined4 *)(extraout_ECX + 0x14);
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffe4;
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  *(undefined4 **)(unaff_EBP + -0x18) = puVar1;
  FUN_5140126a();
  iVar3 = *(int *)(extraout_ECX + 0x54);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((iVar3 == 0) || (DAT_51411afc != *(int *)(extraout_ECX + 0x58))) {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_51406cf7();
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  if (*(undefined4 **)(unaff_EBP + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 8) = *(undefined4 *)(extraout_ECX + 0x70);
  }
  if (*(undefined4 **)(unaff_EBP + 0xc) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0xc) = *(undefined4 *)(extraout_ECX + 0x74);
  }
  if (*(undefined4 **)(unaff_EBP + 0x10) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x10) = *(undefined4 *)(extraout_ECX + 0x68);
  }
  if (*(undefined4 **)(unaff_EBP + 0x14) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x14) = *(undefined4 *)(extraout_ECX + 0x6c);
  }
  if (*(undefined4 **)(unaff_EBP + 0x18) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x18) = *(undefined4 *)(extraout_ECX + 0x60);
  }
  if (*(undefined4 **)(unaff_EBP + 0x1c) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 0x1c) = *(undefined4 *)(extraout_ECX + 100);
  }
  pdVar4 = *(double **)(unaff_EBP + 0x20);
  if (pdVar4 != (double *)0x0) {
    fVar5 = FUN_51406c15(*(double *)(extraout_ECX + 0x80),_DAT_5140d8c0);
    *pdVar4 = (double)fVar5;
  }
  pdVar4 = *(double **)(unaff_EBP + 0x24);
  if (pdVar4 != (double *)0x0) {
    fVar5 = FUN_51406c15(*(double *)(extraout_ECX + 0x88),_DAT_5140d8c0);
    *pdVar4 = (double)fVar5;
  }
  piVar2 = (int *)(extraout_ECX + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar1 = 0;
  }
  FUN_51406c04();
  return;
}


