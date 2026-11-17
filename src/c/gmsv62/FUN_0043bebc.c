/* FUN_0043bebc - 0x0043bebc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0043bebc(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  piVar1 = (int *)extraout_ECX[5];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined ***)(-(uint)(extraout_ECX != (undefined4 *)0x0) & (uint)(extraout_ECX + 3)) =
       &PTR_LAB_008e8bcc;
  *extraout_ECX = &PTR_LAB_008e84a0;
  return;
}


