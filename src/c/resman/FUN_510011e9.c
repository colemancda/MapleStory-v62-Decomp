/* FUN_510011e9 - 0x510011e9 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void FUN_510011e9(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_510090e8)();
  if (iVar1 != 0) {
    while( true ) {
      iVar1 = (*(code *)PTR_FUN_510090e8)();
      if (iVar1 == 0) break;
      (*DAT_51009464)(0);
    }
  }
  return;
}


