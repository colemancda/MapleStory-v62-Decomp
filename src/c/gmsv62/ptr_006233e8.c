/* ptr_006233e8 - 0x006233e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_006233e8(void)

{
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  uint uVar1;
  uint uVar2;
  int unaff_EDI;
  
  uVar2 = *unaff_EBX + unaff_ESI * 8;
  uVar1 = *unaff_EBX + unaff_EDI * 8;
  *(uint *)(unaff_EBP + 0xc) = uVar2;
  if (uVar1 < uVar2) {
    do {
      uVar2 = uVar1 + 8;
      FUN_006234d9(uVar1);
      uVar1 = uVar2;
    } while (uVar2 < *(uint *)(unaff_EBP + 0xc));
  }
  if (*unaff_EBX != 0) {
    *(undefined4 *)(*unaff_EBX + -4) = *(undefined4 *)(unaff_EBP + 8);
  }
  return *unaff_EBX;
}


