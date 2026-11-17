/* FUN_00408451 - 0x00408451 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00408451(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  iVar1 = extraout_ECX[0xe];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_004030b1();
    extraout_ECX[0xe] = 0;
  }
  if (extraout_ECX[7] != 0) {
    FUN_004030b1();
    extraout_ECX[7] = 0;
  }
  if (extraout_ECX[5] != 0) {
    FUN_004030b1();
    extraout_ECX[5] = 0;
  }
  if (extraout_ECX[4] != 0) {
    FUN_004030b1();
    extraout_ECX[4] = 0;
  }
  piVar2 = (int *)extraout_ECX[3];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_008e84a0;
  return;
}


