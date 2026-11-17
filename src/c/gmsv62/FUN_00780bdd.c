/* FUN_00780bdd - 0x00780bdd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00780bdd(void)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008f1710;
  extraout_ECX[-1] = &PTR_FUN_008f16c4;
  *extraout_ECX = &PTR_FUN_008f16c0;
  extraout_ECX[0x15c] = &PTR_FUN_008f169c;
  extraout_ECX[0x15d] = &PTR_LAB_008f1660;
  extraout_ECX[0x15e] = &PTR_LAB_008f1618;
  extraout_ECX[0x15f] = &PTR_LAB_008f1604;
  extraout_ECX[0x160] = &PTR_LAB_008f15e8;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[0x161] = &PTR_LAB_008f15e0;
  piVar1 = (int *)extraout_ECX[0x18b];
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00450463();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00450463();
  DAT_0097befc = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0080b8a1();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


