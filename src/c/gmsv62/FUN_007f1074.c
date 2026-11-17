/* FUN_007f1074 - 0x007f1074 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007f1074(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f20e8;
  extraout_ECX[3] = &PTR_FUN_008f2038;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_005e3f10();
  iVar1 = extraout_ECX[0x66];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar1 != 0) {
    FUN_004d2023(0);
    extraout_ECX[0x66] = 0;
  }
  piVar2 = (int *)extraout_ECX[7];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_008e84a0;
  return;
}


