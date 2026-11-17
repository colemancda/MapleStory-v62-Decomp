/* FUN_0045be88 - 0x0045be88 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045be88(void)

{
  int *piVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if ((*(int *)(unaff_EBP + 8) == 1000) && (*(int *)(unaff_EBP + 0xc) == 200)) {
    FUN_00448dc6(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_008161f1(0);
    piVar1 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar1 == (int *)0x0) goto LAB_0045bedf;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (*(int *)(unaff_EBP + 0xc) == 100) {
    (**(code **)(*extraout_ECX + 0x20))(*(undefined4 *)(unaff_EBP + 8));
  }
LAB_0045bedf:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


