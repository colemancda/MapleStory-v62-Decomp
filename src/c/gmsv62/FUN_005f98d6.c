/* FUN_005f98d6 - 0x005f98d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f98d6(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBP;
  int iVar3;
  
  FUN_00879bb8();
  iVar3 = extraout_ECX;
  FUN_00448dc6(unaff_EBP + -0x10);
  iVar1 = *(int *)(extraout_ECX + 0xc0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x194) + 4) + 0x1c))(1);
  }
  *(undefined4 *)(extraout_ECX + 0xaa8) = 1;
  FUN_005fcb28();
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2,iVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


