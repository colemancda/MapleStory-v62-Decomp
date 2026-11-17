/* FUN_004522da - 0x004522da in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004522da(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar1 = (undefined4 *)**(undefined4 **)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iVar3 = (*(code *)*puVar1)(*(undefined4 **)(unaff_EBP + 8),&LAB_008f3c44,unaff_EBP + -0x14);
  if (-1 < iVar3) {
    iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x10))
                      (*(int **)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + 0x10),
                       unaff_EBP + -0x10);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x14))
                        (*(int **)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + 0xc),
                         *(undefined4 *)(unaff_EBP + 0x14));
    }
  }
  piVar2 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}


