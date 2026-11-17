/* FUN_006e5465 - 0x006e5465 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e5465(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_LAB_008f02c4;
  extraout_ECX[-1] = &PTR_ptr_00456316_008f0278;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f0274;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_006eaf73();
  piVar1 = (int *)extraout_ECX[0xe];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0xd];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b383d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


