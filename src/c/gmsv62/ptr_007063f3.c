/* ptr_007063f3 - 0x007063f3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_007063f3(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  bVar3 = true;
  piVar1 = (int *)(param_1 + 0xc);
  do {
    if (!bVar3) {
      return;
    }
    bVar3 = *piVar1 != 0;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 2);
  return;
}


