/* FUN_508012a1 - 0x508012a1 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_508012a1(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_5081e378)();
  if (iVar1 != 0) {
    while( true ) {
      iVar1 = (*(code *)PTR_FUN_5081e378)();
      if (iVar1 == 0) break;
      (*DAT_5081e654)(0);
    }
  }
  return;
}


