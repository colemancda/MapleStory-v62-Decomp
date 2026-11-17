/* ptr_00786ee8 - 0x00786ee8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00786ee8(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  do {
    unaff_EDI = unaff_EDI + 0x44;
    *(int *)(unaff_EBP + -0x14) = unaff_EDI;
    if (*(int *)(unaff_EBP + 0x10) < *(int *)(unaff_EBP + -0x10)) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00773f2e();
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return;
    }
    iVar2 = *(int *)(unaff_EBP + -0x10);
    FUN_00776a8e(*unaff_ESI + unaff_EDI);
    if (*(int *)(unaff_EBP + 0xc) < iVar2) {
      do {
        iVar1 = FUN_00776fd8(unaff_EBP + -0x58,*unaff_ESI + -0x44 + unaff_EDI);
        if (iVar1 == 0) break;
        FUN_00776a8e(*unaff_ESI + unaff_EDI + -0x44);
        iVar2 = iVar2 + -1;
        unaff_EDI = unaff_EDI + -0x44;
      } while (*(int *)(unaff_EBP + 0xc) < iVar2);
      unaff_EDI = *(int *)(unaff_EBP + -0x14);
    }
    FUN_00776a8e(unaff_EBP + -0x58);
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while( true );
}


