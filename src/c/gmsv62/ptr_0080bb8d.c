/* ptr_0080bb8d - 0x0080bb8d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0080bb8d(void)

{
  uint uVar1;
  int unaff_ESI;
  int unaff_EDI;
  int iVar2;
  
  FUN_008161f1(unaff_EDI);
  *(int *)(unaff_ESI + 0x5f8) = unaff_EDI;
  if (DAT_0097c1ac == unaff_EDI) {
    FUN_00878dfb(0x80004003);
  }
  uVar1 = FUN_0080ce6a();
  if (uVar1 < 0xdad) {
    *(int *)(unaff_ESI + 0x5f4) = *(int *)(unaff_ESI + 0x5f4) + 1;
    iVar2 = *(int *)(unaff_ESI + 0x5f4);
    if (0xf < iVar2) {
      iVar2 = 0x10;
    }
  }
  else {
    *(int *)(unaff_ESI + 0x5f4) = *(int *)(unaff_ESI + 0x5f4) + -1;
    iVar2 = *(int *)(unaff_ESI + 0x5f4);
    if (iVar2 < 2) {
      iVar2 = 1;
    }
  }
  *(int *)(unaff_ESI + 0x5f4) = iVar2;
  return;
}


