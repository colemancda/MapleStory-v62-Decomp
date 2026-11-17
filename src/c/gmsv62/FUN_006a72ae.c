/* FUN_006a72ae - 0x006a72ae in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006a72ae(void)

{
  int *piVar1;
  int *extraout_ECX;
  int unaff_EBP;
  int *piVar2;
  
  FUN_00879bb8();
  piVar2 = extraout_ECX;
  if (extraout_ECX[0x2d] == 0) {
    if (*(int *)(extraout_ECX[0x1f] + 0x48) == 0) {
      (**(code **)(*(int *)(extraout_ECX[0x2a] + 4) + 0x1c))(0);
      FUN_004a2fef(&DAT_00978474);
    }
    else {
      (**(code **)(*(int *)(extraout_ECX[0x2a] + 4) + 0x1c))(1);
    }
  }
  FUN_00448dc6(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 100) {
    (**(code **)(*extraout_ECX + 0x20))(*(undefined4 *)(unaff_EBP + 8));
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


