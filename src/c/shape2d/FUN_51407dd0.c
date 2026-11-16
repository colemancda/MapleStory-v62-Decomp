/* FUN_51407dd0 - 0x51407dd0 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51407dd0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
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
  }
  if (*(undefined4 **)(unaff_EBP + 8) != (undefined4 *)0x0) {
    **(undefined4 **)(unaff_EBP + 8) = *(undefined4 *)(extraout_ECX + 0x5c);
  }
  piVar2 = (int *)(extraout_ECX + 0x18);
  *piVar2 = *piVar2 + -1;
  if (*piVar2 == 0) {
    *puVar1 = 0;
  }
  FUN_51407e53();
  return;
}


