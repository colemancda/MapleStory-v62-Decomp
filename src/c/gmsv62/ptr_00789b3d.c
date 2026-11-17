/* ptr_00789b3d - 0x00789b3d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00789b3d(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = *(int *)(unaff_EBP + 0x10) / 2;
  *(int *)(unaff_EBP + 8) = iVar1;
  if (unaff_ESI <= iVar1) {
    while( true ) {
      iVar1 = unaff_ESI * 2;
      *(int *)(unaff_EBP + 0x14) = iVar1;
      if ((iVar1 < *(int *)(unaff_EBP + 0x10)) &&
         (iVar2 = (iVar1 + unaff_EDI) * 0x44 + *unaff_EBX, iVar2 = FUN_00777024(iVar2 + -0x44,iVar2)
         , iVar2 != 0)) {
        iVar1 = iVar1 + 1;
        *(int *)(unaff_EBP + 0x14) = iVar1;
      }
      iVar2 = (iVar1 + unaff_EDI) * 0x44;
      iVar1 = FUN_00777024(unaff_EBP + -0x50,*unaff_EBX + -0x44 + iVar2);
      if (iVar1 == 0) break;
      FUN_00776a8e(iVar2 + -0x44 + *unaff_EBX);
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x14);
      if (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0x14)) break;
      unaff_ESI = *(int *)(unaff_EBP + 0xc);
    }
  }
  FUN_00776a8e(unaff_EBP + -0x50);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00773f2e();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


