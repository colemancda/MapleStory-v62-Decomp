/* ptr_0078999f - 0x0078999f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0078999f(void)

{
  int iVar1;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int iVar2;
  int unaff_EDI;
  
  do {
    iVar1 = (unaff_ESI + unaff_EDI) * 0x44 + *unaff_EBX;
    iVar1 = FUN_00776fd8(iVar1 + -0x44,iVar1);
    if (iVar1 != 0) {
      unaff_ESI = unaff_ESI + 1;
      *(int *)(unaff_EBP + 0x14) = unaff_ESI;
    }
    do {
      iVar2 = (unaff_ESI + unaff_EDI) * 0x44;
      iVar1 = FUN_00776fd8(unaff_EBP + -0x50,*unaff_EBX + -0x44 + iVar2);
      if (iVar1 == 0) {
LAB_007899fd:
        FUN_00776a8e(unaff_EBP + -0x50);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00773f2e();
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      FUN_00776a8e(iVar2 + -0x44 + *unaff_EBX);
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x14);
      if (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0x14)) goto LAB_007899fd;
      unaff_ESI = *(int *)(unaff_EBP + 0xc) * 2;
      *(int *)(unaff_EBP + 0x14) = unaff_ESI;
    } while (*(int *)(unaff_EBP + 0x10) <= unaff_ESI);
  } while( true );
}


