/* FUN_50401895 - 0x50401895 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


void FUN_50401895(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_50435130)();
  if (iVar1 != 0) {
    while( true ) {
      iVar1 = (*(code *)PTR_FUN_50435130)();
      if (iVar1 == 0) break;
      (*DAT_50438af4)(0);
    }
  }
  return;
}


