/* ptr_007898f1 - 0x007898f1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_007898f1(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  
  while (iVar2 = FUN_00776ef4(), iVar2 != 0) {
    FUN_00776a8e();
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x14);
    if (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0x14)) break;
    iVar2 = *(int *)(unaff_EBP + 0xc) * 2;
    *(int *)(unaff_EBP + 0x14) = iVar2;
    if ((iVar2 < *(int *)(unaff_EBP + 0x10)) && (iVar1 = FUN_00776ef4(), iVar1 != 0)) {
      *(int *)(unaff_EBP + 0x14) = iVar2 + 1;
    }
  }
  FUN_00776a8e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00773f2e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


