/* ptr_00789b1c - 0x00789b1c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00789b1c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar4 = *(int *)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + 0x14);
  FUN_007875b5((iVar4 + iVar2) * 0x44 + -0x44 + *piVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = *(int *)(unaff_EBP + 0x10) / 2;
  *(int *)(unaff_EBP + 8) = iVar3;
  if (iVar4 <= iVar3) {
    while( true ) {
      iVar4 = iVar4 * 2;
      *(int *)(unaff_EBP + 0x14) = iVar4;
      if ((iVar4 < *(int *)(unaff_EBP + 0x10)) &&
         (iVar3 = (iVar4 + iVar2) * 0x44 + *piVar1, iVar3 = FUN_00777024(iVar3 + -0x44,iVar3),
         iVar3 != 0)) {
        iVar4 = iVar4 + 1;
        *(int *)(unaff_EBP + 0x14) = iVar4;
      }
      iVar3 = (iVar4 + iVar2) * 0x44;
      iVar4 = FUN_00777024(unaff_EBP + -0x50,*piVar1 + -0x44 + iVar3);
      if (iVar4 == 0) break;
      FUN_00776a8e(iVar3 + -0x44 + *piVar1);
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x14);
      if (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0x14)) break;
      iVar4 = *(int *)(unaff_EBP + 0xc);
    }
  }
  FUN_00776a8e(unaff_EBP + -0x50);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00773f2e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


