/* ptr_00789ce6 - 0x00789ce6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_00789ce6(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_EBP + 0x14);
  FUN_007875b5((unaff_ESI + iVar1) * 0x44 + -0x44 + param_1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = *(int *)(unaff_EBP + 0x10) / 2;
  *(int *)(unaff_EBP + 8) = iVar2;
  if (unaff_ESI <= iVar2) {
    while( true ) {
      iVar2 = unaff_ESI * 2;
      *(int *)(unaff_EBP + 0x14) = iVar2;
      if ((iVar2 < *(int *)(unaff_EBP + 0x10)) &&
         (iVar3 = (iVar2 + iVar1) * 0x44 + *unaff_EBX, iVar3 = FUN_00777070(iVar3 + -0x44,iVar3),
         iVar3 != 0)) {
        iVar2 = iVar2 + 1;
        *(int *)(unaff_EBP + 0x14) = iVar2;
      }
      iVar3 = (iVar2 + iVar1) * 0x44;
      iVar2 = FUN_00777070(unaff_EBP + -0x50,*unaff_EBX + -0x44 + iVar3);
      if (iVar2 == 0) break;
      FUN_00776a8e(iVar3 + -0x44 + *unaff_EBX);
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


