/* FUN_51002c60 - 0x51002c60 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


void FUN_51002c60(void)

{
  undefined1 local_28 [20];
  uint local_14;
  
  (*DAT_51009550)(local_28);
  PTR_FUN_510090e8 = FUN_51002d21;
  if (local_14 < 2) {
    PTR_FUN_510090e8 = FUN_51002c98;
  }
  (*(code *)PTR_FUN_510090e8)();
  return;
}


