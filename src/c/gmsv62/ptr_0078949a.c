/* ptr_0078949a - 0x0078949a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0078949a(void)

{
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  int unaff_EBP;
  int iVar3;
  
  iVar3 = *(int *)(unaff_EBP + 0xc);
  iVar1 = *(int *)(unaff_EBP + 0x14);
  FUN_00787521((iVar3 + iVar1) * 0x40 + -0x40 + *unaff_EBX);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar2 = *(int *)(unaff_EBP + 0x10) / 2;
  *(int *)(unaff_EBP + 8) = iVar2;
  if (iVar3 <= iVar2) {
    while( true ) {
      iVar3 = iVar3 * 2;
      *(int *)(unaff_EBP + 0x14) = iVar3;
      if ((iVar3 < *(int *)(unaff_EBP + 0x10)) &&
         (iVar2 = (iVar3 + iVar1) * 0x40 + *unaff_EBX, iVar2 = FUN_007732af(iVar2 + -0x40,iVar2),
         iVar2 != 0)) {
        iVar3 = iVar3 + 1;
        *(int *)(unaff_EBP + 0x14) = iVar3;
      }
      iVar2 = (iVar3 + iVar1) * 0x40;
      iVar3 = FUN_007732af(unaff_EBP + -0x4c,*unaff_EBX + -0x40 + iVar2);
      if (iVar3 == 0) break;
      FUN_00772d62(iVar2 + -0x40 + *unaff_EBX);
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0x14);
      if (*(int *)(unaff_EBP + 8) < *(int *)(unaff_EBP + 0x14)) break;
      iVar3 = *(int *)(unaff_EBP + 0xc);
    }
  }
  FUN_00772d62(unaff_EBP + -0x4c);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00770582();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


