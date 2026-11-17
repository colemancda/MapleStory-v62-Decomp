/* FUN_00624895 - 0x00624895 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00624895(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ed188;
  *(undefined4 *)(unaff_EBP + -4) = 4;
  FUN_00627dda();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00627d48();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00627d48();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00627d48();
  piVar1 = (int *)extraout_ECX[6];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_008e84a0;
  return;
}


