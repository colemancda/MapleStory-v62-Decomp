/* FUN_500118ab - 0x500118ab in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_500118ab(void)

{
  int *piVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_50012d80();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (extraout_ECX[3] != 0) {
    if (*extraout_ECX == 0) {
      FUN_50012c97(0x80004003);
    }
    (**(code **)(*(int *)*extraout_ECX + 0x20))
              ((int *)*extraout_ECX,-(uint)(extraout_ECX[3] != 1) & (uint)(extraout_ECX + 4));
  }
  piVar1 = (int *)*extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


