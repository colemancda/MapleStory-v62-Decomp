/* FUN_0069b0d9 - 0x0069b0d9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0069b0d9(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_00879bb8();
  piVar1 = (int *)FUN_00448dc6(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*piVar1 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = (int *)*piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x8c))(piVar1,0,0,800,600,0x80000000);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963cc8);
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


