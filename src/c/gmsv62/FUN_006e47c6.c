/* FUN_006e47c6 - 0x006e47c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e47c6(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  *(undefined ***)(extraout_ECX + 0x20) = &PTR_FUN_008e862c;
  FUN_0041389d();
  piVar1 = *(int **)(extraout_ECX + 0x1c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_006eb1d3();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_006eb109();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_006eb03f();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


