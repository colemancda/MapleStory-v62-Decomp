/* FUN_5080a419 - 0x5080a419 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_5080a419(void)

{
  undefined1 local_28 [20];
  uint local_14;
  
  (*DAT_5081e740)(local_28);
  PTR_FUN_5081e378 = FUN_5080a471;
  if (local_14 < 2) {
    PTR_FUN_5081e378 = FUN_5080a451;
  }
  (*(code *)PTR_FUN_5081e378)();
  return;
}


