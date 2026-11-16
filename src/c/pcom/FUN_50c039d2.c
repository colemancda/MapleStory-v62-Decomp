/* FUN_50c039d2 - 0x50c039d2 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c039d2(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  puVar1 = *(undefined4 **)(extraout_ECX + 0x24);
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  piVar2 = *(int **)(extraout_ECX + 0x20);
  if (piVar2 != (int *)0x0) {
    FUN_50c040d2(piVar2);
    FUN_50c02783(&DAT_50c21310,piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50c03843();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


