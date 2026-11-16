/* FUN_100040e0 - 0x100040e0 in ZLZ.dll (image base 0x10000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "zlz_decls.h"


void FUN_100040e0(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_10012544)();
  if (iVar1 != 0) {
    iVar1 = (*(code *)PTR_FUN_10012544)();
    while (iVar1 != 0) {
      (*DAT_10016c44)(0);
      iVar1 = (*(code *)PTR_FUN_10012544)();
    }
  }
  return;
}


