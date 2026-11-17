/* ptr_0088b089 - 0x0088b089 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0088b089(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  int iVar3;
  
  DAT_00980ec4 = DAT_00980ec0;
  iVar2 = *(int *)(*(int *)(unaff_EBP + 0xc) + 0x18);
  if (iVar2 == 0) {
    iVar2 = 6;
  }
  else {
    iVar2 = iVar2 + -1;
  }
  iVar1 = *(int *)(*(int *)(unaff_EBP + 0xc) + 0x1c);
  if (iVar1 < iVar2) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1 / 7;
    if (iVar2 <= iVar1 % 7) {
      iVar3 = iVar3 + 1;
    }
  }
  FUN_0088b337(iVar3,2,*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
  return;
}


