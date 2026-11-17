/* FUN_00452413 - 0x00452413 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00452413(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e8f60;
  extraout_ECX[1] = &PTR_LAB_008e8f24;
  extraout_ECX[2] = &PTR_LAB_008e8f08;
  extraout_ECX[3] = &PTR_LAB_008e8ec0;
  extraout_ECX[4] = &PTR_LAB_008e8eac;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045246d();
  piVar1 = (int *)extraout_ECX[7];
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


