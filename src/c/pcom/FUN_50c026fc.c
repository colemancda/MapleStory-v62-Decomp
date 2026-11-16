/* FUN_50c026fc - 0x50c026fc in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c026fc(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_50c1850c)();
  if (iVar1 != 0) {
    while( true ) {
      iVar1 = (*(code *)PTR_FUN_50c1850c)();
      if (iVar1 == 0) break;
      (*DAT_50c20f84)(0);
    }
  }
  return;
}


