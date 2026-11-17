/* ptr_007893b6 - 0x007893b6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007893b6(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  
  piVar1 = *(int **)(unaff_EBP + 8);
  iVar4 = *(int *)(unaff_EBP + 0xc);
  iVar2 = *(int *)(unaff_EBP + 0x14);
  FUN_00787521((iVar4 + iVar2) * 0x40 + -0x40 + *piVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar3 = *(int *)(unaff_EBP + 0x10) / 2;
  *(int *)(unaff_EBP + 8) = iVar3;
  if (iVar4 <= iVar3) {
    while( true ) {
      iVar4 = iVar4 * 2;
      *(int *)(unaff_EBP + 0x14) = iVar4;
      if ((iVar4 < *(int *)(unaff_EBP + 0x10)) &&
         (iVar3 = (iVar4 + iVar2) * 0x40 + *piVar1, iVar3 = FUN_00773347(iVar3 + -0x40,iVar3),
         iVar3 != 0)) {
        iVar4 = iVar4 + 1;
        *(int *)(unaff_EBP + 0x14) = iVar4;
      }
      iVar3 = (iVar4 + iVar2) * 0x40;
      iVar4 = FUN_00773347(unaff_EBP + -0x4c,*piVar1 + -0x40 + iVar3);
      if (iVar4 == 0) break;
      FUN_00772d62(iVar3 + -0x40 + *piVar1);
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x14);
      if (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0x14)) break;
      iVar4 = *(int *)(unaff_EBP + 0xc);
    }
  }
  FUN_00772d62(unaff_EBP + -0x4c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00770582();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


