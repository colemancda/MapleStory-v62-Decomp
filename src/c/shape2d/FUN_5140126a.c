/* FUN_5140126a - 0x5140126a in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_5140126a(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_514113f0)();
  if (iVar1 != 0) {
    while( true ) {
      iVar1 = (*(code *)PTR_FUN_514113f0)();
      if (iVar1 == 0) break;
      (*DAT_51411634)(0);
    }
  }
  return;
}


