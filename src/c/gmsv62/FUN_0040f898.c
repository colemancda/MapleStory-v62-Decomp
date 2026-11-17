/* FUN_0040f898 - 0x0040f898 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0040f898(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  
  FUN_00879bb8();
  if (**(int **)(unaff_EBP + 0xc) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(**(int **)(unaff_EBP + 0xc) + -4);
  }
  if ((&DAT_0097867c)[*(int *)(*(int *)(unaff_EBP + 8) + 0xc4) * 6] == 0) {
    *(int *)(unaff_EBP + -0x10) = iVar5;
  }
  else {
    *(int *)(unaff_EBP + -0x10) = iVar5 * 2 + -2;
  }
  piVar1 = *(int **)(unaff_EBP + 0x10);
  FUN_004170dc(*(undefined4 *)(unaff_EBP + -0x10),1,unaff_EBP + 0xb);
  iVar4 = 0;
  if (0 < iVar5) {
    *(undefined4 *)(unaff_EBP + 8) = 0;
    do {
      iVar2 = FUN_004029b9(0x2c);
      *(int *)(unaff_EBP + 0x10) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_0040f9c2();
      }
      *(int *)(unaff_EBP + -0x14) = iVar2;
      iVar3 = 0;
      if (iVar2 != 0) {
        InterlockedIncrement((LONG *)(iVar2 + 4));
        iVar3 = *(int *)(unaff_EBP + -0x14);
      }
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_00401def(iVar3 + 0xc,iVar3 + 0x10,iVar3 + 0x1c,iVar3 + 0x14,iVar3 + 0x24,0);
      FUN_00411d2f(unaff_EBP + -0x18);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_0041330b(0);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 100;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  if (iVar5 < *(int *)(unaff_EBP + -0x10)) {
    iVar4 = (*(int *)(unaff_EBP + -0x10) - iVar5) * 8;
    do {
      FUN_00411d2f(iVar4 + *piVar1);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -8;
    } while (iVar5 < *(int *)(unaff_EBP + -0x10));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


