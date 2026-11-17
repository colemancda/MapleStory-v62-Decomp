/* ptr_0045f2f4 - 0x0045f2f4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int ptr_0045f2f4(void)

{
  int iVar1;
  int *in_EAX;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  uint uVar2;
  undefined4 uStack00000004;
  uint uStack00000008;
  
  iVar1 = *in_EAX;
  for (uVar2 = unaff_EBX + iVar1; uVar2 < (uint)(unaff_EDI + iVar1); uVar2 = uVar2 + 8) {
    uStack00000004 = 0x45f30e;
    uStack00000008 = uVar2;
    FUN_0046095d();
  }
  return unaff_EBX + **(int **)(unaff_EBP + -8);
}


