/* FUN_0060805c - 0x0060805c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0060805c(void)

{
  int *piVar1;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  FUN_00414ebb();
  piVar1 = *(int **)(extraout_ECX + 0x514);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(extraout_ECX + 0x510);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(extraout_ECX + 0x50c);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(extraout_ECX + 0x508);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0074d4c3();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(extraout_ECX + 4) != 0) {
    FUN_00449913(0);
    *(undefined4 *)(extraout_ECX + 4) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


