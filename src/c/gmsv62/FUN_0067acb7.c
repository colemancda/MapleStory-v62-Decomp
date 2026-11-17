/* FUN_0067acb7 - 0x0067acb7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0067acb7(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  extraout_ECX[-2] = &PTR_FUN_008ee974;
  extraout_ECX[-1] = &PTR_ptr_0067ac18_008ee950;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_008ee94c;
  iVar1 = extraout_ECX[0x4d];
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if (iVar1 != 0) {
    FUN_004d2023(0);
    extraout_ECX[0x4d] = 0;
  }
  piVar2 = (int *)extraout_ECX[0x4b];
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_0067f856();
  piVar2 = (int *)extraout_ECX[0x2e];
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  extraout_ECX[0x1f] = &PTR_FUN_008ee978;
  FUN_0067f81c();
  if (extraout_ECX[0x1e] != 0) {
    FUN_004030b1();
    extraout_ECX[0x1e] = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00560200();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


