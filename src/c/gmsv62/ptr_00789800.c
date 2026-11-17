/* ptr_00789800 - 0x00789800 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00789800(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar2;
  int unaff_EDI;
  
  while( true ) {
    iVar2 = (unaff_ESI + unaff_EDI) * 0x44;
    iVar1 = FUN_00786bd4(unaff_EBP + -0x50,in_EAX + -0x44 + iVar2);
    if (iVar1 == 0) break;
    FUN_00776a8e(iVar2 + -0x44 + *unaff_EBX);
    *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x14);
    if (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0x14)) break;
    unaff_ESI = *(int *)(unaff_EBP + 0xc) * 2;
    *(int *)(unaff_EBP + 0x14) = unaff_ESI;
    if (unaff_ESI < *(int *)(unaff_EBP + 0x10)) {
      iVar1 = (unaff_ESI + unaff_EDI) * 0x44 + *unaff_EBX;
      iVar1 = FUN_00786bd4(iVar1 + -0x44,iVar1);
      if (iVar1 != 0) {
        unaff_ESI = unaff_ESI + 1;
        *(int *)(unaff_EBP + 0x14) = unaff_ESI;
      }
    }
    in_EAX = *unaff_EBX;
  }
  FUN_00776a8e(unaff_EBP + -0x50);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00773f2e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


