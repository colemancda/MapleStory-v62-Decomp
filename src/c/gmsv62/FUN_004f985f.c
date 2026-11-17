/* FUN_004f985f - 0x004f985f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_004f985f(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  *extraout_ECX = 0;
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00414f8b(iVar1);
  uVar2 = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  extraout_ECX[1] = uVar2;
  piVar3 = *(int **)(iVar1 + 8);
  extraout_ECX[2] = piVar3;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}


