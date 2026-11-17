/* FUN_004d167d - 0x004d167d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d167d(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ea3d8;
  extraout_ECX[-1] = &PTR_ptr_004d15ee_008ea3b4;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ea3b0;
  iVar1 = extraout_ECX[0x29];
  *(undefined4 *)(unaff_EBP + -4) = 4;
  if (iVar1 != 0) {
    FUN_004d2023(0);
    extraout_ECX[0x29] = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004d20a5();
  piVar2 = (int *)extraout_ECX[0x22];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)extraout_ECX[0x21];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00560200();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


