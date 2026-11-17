/* FUN_00616b0d - 0x00616b0d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00616b0d(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar4;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  piVar4 = (int *)(extraout_ECX + 0xc4);
  *(undefined4 *)(unaff_EBP + -0x10) = 2;
  do {
    if ((*piVar4 != 0) && (piVar4[-2] == 0)) {
      piVar1 = (int *)FUN_0043f93c(unaff_EBP + -0x18);
      iVar3 = *piVar1;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar3 == 0) {
        FUN_00878dfb(0x80004003);
      }
      if (*piVar4 == 0) {
        FUN_00878dfb(0x80004003);
      }
      piVar1 = (int *)*piVar4;
      uVar2 = FUN_0043210d();
      iVar3 = (**(code **)(*piVar1 + 0xd8))(piVar1,uVar2);
      if (iVar3 < 0) {
        FUN_00878e09(iVar3,piVar1,&DAT_00963df8);
      }
      piVar1 = *(int **)(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
    }
    piVar4 = piVar4 + 6;
    piVar1 = (int *)(unaff_EBP + -0x10);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


