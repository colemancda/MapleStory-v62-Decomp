/* FUN_005add2c - 0x005add2c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_005add2c(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *extraout_ECX = *puVar1;
  iVar2 = puVar1[1];
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  extraout_ECX[1] = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 8));
  }
  piVar3 = (int *)puVar1[2];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


