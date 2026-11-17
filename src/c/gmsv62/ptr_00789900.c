/* ptr_00789900 - 0x00789900 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_00789900(int param_1)

{
  int iVar1;
  int *unaff_EBX;
  int unaff_EBP;
  int iVar2;
  int unaff_EDI;
  
  while( true ) {
    FUN_00776a8e(param_1);
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x14);
    if (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0x14)) break;
    iVar2 = *(int *)(unaff_EBP + 0xc) * 2;
    *(int *)(unaff_EBP + 0x14) = iVar2;
    if (iVar2 < *(int *)(unaff_EBP + 0x10)) {
      iVar1 = (iVar2 + unaff_EDI) * 0x44 + *unaff_EBX;
      iVar1 = FUN_00776ef4(iVar1 + -0x44,iVar1);
      if (iVar1 != 0) {
        iVar2 = iVar2 + 1;
        *(int *)(unaff_EBP + 0x14) = iVar2;
      }
    }
    iVar1 = (iVar2 + unaff_EDI) * 0x44;
    iVar2 = FUN_00776ef4(unaff_EBP + -0x50,*unaff_EBX + -0x44 + iVar1);
    if (iVar2 == 0) break;
    param_1 = iVar1 + -0x44 + *unaff_EBX;
  }
  FUN_00776a8e(unaff_EBP + -0x50);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00773f2e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


