/* FUN_0043c46c - 0x0043c46c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0043c46c(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = *(int *)(extraout_ECX + 0x1c);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_00434d73(0);
    *(undefined4 *)(extraout_ECX + 0x1c) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00426311();
  piVar2 = *(int **)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


