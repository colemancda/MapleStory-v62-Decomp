/* FUN_0057fbf6 - 0x0057fbf6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0057fbf6(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ec288;
  extraout_ECX[-1] = &PTR_FUN_008ec23c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ec238;
  *(undefined4 *)(unaff_EBP + -4) = 6;
  FUN_0087a0b8(extraout_ECX + 0x6c,4,0x12,FUN_004115cc);
  piVar1 = (int *)extraout_ECX[0x6b];
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0087a0b8(extraout_ECX + 0x62,4,9,thunk_FUN_0056ad97);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0087a0b8(extraout_ECX + 0x59,4,9,thunk_FUN_0056ad97);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0087a0b8(extraout_ECX + 0x47,8,9,thunk_FUN_00450463);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_0087a0b8(extraout_ECX + 0x35,8,9,thunk_FUN_00450463);
  DAT_0097940c = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004de580();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


