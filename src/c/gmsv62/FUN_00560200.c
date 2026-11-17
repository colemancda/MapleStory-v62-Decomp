/* FUN_00560200 - 0x00560200 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00560200(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_LAB_008ebbdc;
  extraout_ECX[-1] = &PTR_LAB_008ebbb8;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ebbe0;
  piVar1 = (int *)extraout_ECX[0x1b];
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)extraout_ECX[0x1a];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0046ab9c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(extraout_ECX != (undefined4 *)&DAT_00000008) & (uint)extraout_ECX) =
       &PTR_LAB_008e84a0;
  return;
}


