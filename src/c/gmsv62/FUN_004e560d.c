/* FUN_004e560d - 0x004e560d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e560d(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-3] = &PTR_FUN_008ea8cc;
  extraout_ECX[-2] = &PTR_FUN_008ea880;
  extraout_ECX[-1] = &PTR_FUN_008ea87c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ea878;
  piVar1 = (int *)extraout_ECX[0x296];
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x295];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  extraout_ECX[0x1c7] = &PTR_FUN_008ea8f0;
  FUN_004f1ef0();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004e5db7();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


