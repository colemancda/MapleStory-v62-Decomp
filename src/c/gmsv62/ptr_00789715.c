/* ptr_00789715 - 0x00789715 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00789715(void)

{
  int iVar1;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  do {
    FUN_00776a8e();
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x14);
    if (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0x14)) break;
    iVar1 = *(int *)(unaff_EBP + 0xc) * 2;
    *(int *)(unaff_EBP + 0x14) = iVar1;
    if (iVar1 < *(int *)(unaff_EBP + 0x10)) {
      iVar1 = *(int *)(*unaff_EBX + (iVar1 + unaff_EDI) * 0x44 + -0x40);
      if (iVar1 == 0) {
        iVar1 = DAT_00980dfc;
      }
      iVar1 = FUN_008858f0(iVar1);
      if (iVar1 < 0) {
        *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 1;
      }
    }
    iVar1 = DAT_00980dfc;
    if (*(int *)(unaff_EBP + -0x4c) != 0) {
      iVar1 = *(int *)(unaff_EBP + -0x4c);
    }
    iVar1 = FUN_008858f0(iVar1);
  } while (iVar1 < 0);
  FUN_00776a8e();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00773f2e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


