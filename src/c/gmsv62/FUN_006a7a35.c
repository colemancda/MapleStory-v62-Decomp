/* FUN_006a7a35 - 0x006a7a35 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a7a35(void)

{
  int *piVar1;
  int *extraout_ECX;
  int unaff_EBP;
  int *piVar2;
  
  FUN_00879bb8();
  piVar2 = extraout_ECX;
  FUN_00448dc6(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 100) {
    (**(code **)(*extraout_ECX + 0x20))(*(undefined4 *)(unaff_EBP + 8));
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


