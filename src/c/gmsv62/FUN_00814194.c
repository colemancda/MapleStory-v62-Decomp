/* FUN_00814194 - 0x00814194 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00814194(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f2d58;
  extraout_ECX[-1] = &PTR_LAB_008f2d0c;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008f2d08;
  piVar1 = (int *)extraout_ECX[0x16];
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[0x10] = &PTR_FUN_008f2d8c;
  FUN_008167ec();
  piVar1 = (int *)extraout_ECX[4];
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(extraout_ECX != (undefined4 *)&DAT_00000008) & (uint)extraout_ECX) =
       &PTR_LAB_008e84a0;
  return;
}


