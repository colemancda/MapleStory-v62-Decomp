/* FUN_004ae0bf - 0x004ae0bf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004ae0bf(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_LAB_008e9e38;
  extraout_ECX[-1] = &PTR_ptr_00456316_008e9dec;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008e9de8;
  piVar1 = (int *)extraout_ECX[0x17];
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x16];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004aee99();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045f10c();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004b383d();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


