/* FUN_500024f7 - 0x500024f7 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_500024f7(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_50019408)();
  if (iVar1 != 0) {
    while( true ) {
      iVar1 = (*(code *)PTR_FUN_50019408)();
      if (iVar1 == 0) break;
      (*DAT_50081b44)(0);
    }
  }
  return;
}


