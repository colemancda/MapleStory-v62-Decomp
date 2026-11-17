/* ptr_0087dfc5 - 0x0087dfc5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0087dfc5(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(*(int *)(unaff_EBP + 0xc) + -4) = *(undefined4 *)(unaff_EBP + -0x28);
  iVar2 = FUN_0087e371();
  *(undefined4 *)(iVar2 + 0x6c) = *(undefined4 *)(unaff_EBP + -0x1c);
  iVar2 = FUN_0087e371();
  *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(unaff_EBP + -0x20);
  if ((((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (*(int *)(unaff_EBP + -0x2c) != 0)))) {
    iVar2 = __abnormal_termination();
    FUN_0087e207(piVar1,iVar2);
  }
  return;
}


