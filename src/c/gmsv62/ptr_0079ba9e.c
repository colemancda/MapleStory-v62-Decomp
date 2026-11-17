/* ptr_0079ba9e - 0x0079ba9e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_0079ba9e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  
  iVar2 = *(int *)(unaff_EBP + 8);
  iVar1 = *(int *)(unaff_EBP + 8);
  for (iVar3 = iVar1; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    FUN_0079bb28();
    if (iVar3 == 1) {
      *(undefined4 *)(*(int *)(unaff_EBP + -4) + 0x1824) = 0;
    }
  }
  return *(int *)(unaff_EBP + -4) + 0x1804 + iVar1 * 0x18;
}


