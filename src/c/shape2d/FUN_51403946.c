/* FUN_51403946 - 0x51403946 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


int FUN_51403946(void)

{
  int *piVar1;
  int iVar2;
  int unaff_EBP;
  
  FUN_5140ad20();
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    iVar2 = -0x7fffbffd;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iVar2 = FUN_51404938();
    if (-1 < iVar2) {
      iVar2 = *(int *)(unaff_EBP + 8);
      *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar2 + 8);
      FUN_5140126a();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_514041a4(*(void **)(unaff_EBP + -0x10),iVar2 + 0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      piVar1 = (int *)(iVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *(undefined4 *)(iVar2 + 8) = 0;
      }
      piVar1 = *(int **)(unaff_EBP + -0x10);
      **(undefined4 **)(unaff_EBP + 0xc) = piVar1;
      (**(code **)(*piVar1 + 4))(piVar1);
      iVar2 = 0;
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


