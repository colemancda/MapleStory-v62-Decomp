/* FUN_0056d4d5 - 0x0056d4d5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0056d4d5(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ebd70;
  extraout_ECX[-1] = &PTR_LAB_008ebd24;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ebd20;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_0087a0b8(extraout_ECX + 0x1a,8,3,thunk_FUN_00450463);
  piVar1 = (int *)extraout_ECX[0x17];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  DAT_00979424 = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00814194();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


