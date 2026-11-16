/* FUN_50c03ba0 - 0x50c03ba0 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c03ba0(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_50c10270();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  piVar1 = *(int **)(extraout_ECX + 0x3c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    FUN_50c02a85(piVar1);
    *(undefined4 *)(extraout_ECX + 0x3c) = 0;
  }
  if (*(int **)(extraout_ECX + 0x34) != (int *)0x0) {
    FUN_50c02a85(*(int **)(extraout_ECX + 0x34));
    *(undefined4 *)(extraout_ECX + 0x34) = 0;
  }
  if (*(int **)(extraout_ECX + 0x30) != (int *)0x0) {
    FUN_50c02a85(*(int **)(extraout_ECX + 0x30));
    *(undefined4 *)(extraout_ECX + 0x30) = 0;
  }
  if (*(int **)(extraout_ECX + 0x2c) != (int *)0x0) {
    FUN_50c02a85(*(int **)(extraout_ECX + 0x2c));
    *(undefined4 *)(extraout_ECX + 0x2c) = 0;
  }
  if (*(int **)(extraout_ECX + 0x28) != (int *)0x0) {
    FUN_50c02a85(*(int **)(extraout_ECX + 0x28));
    *(undefined4 *)(extraout_ECX + 0x28) = 0;
  }
  if (*(int **)(extraout_ECX + 0x24) != (int *)0x0) {
    FUN_50c02a85(*(int **)(extraout_ECX + 0x24));
    *(undefined4 *)(extraout_ECX + 0x24) = 0;
  }
  if (*(int **)(extraout_ECX + 0x20) != (int *)0x0) {
    FUN_50c02a85(*(int **)(extraout_ECX + 0x20));
    *(undefined4 *)(extraout_ECX + 0x20) = 0;
  }
  if (*(int **)(extraout_ECX + 0x1c) != (int *)0x0) {
    FUN_50c02a85(*(int **)(extraout_ECX + 0x1c));
    *(undefined4 *)(extraout_ECX + 0x1c) = 0;
  }
  FUN_50c03192();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


