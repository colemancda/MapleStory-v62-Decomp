/* FUN_00673aa5 - 0x00673aa5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00673aa5(void)

{
  undefined1 local_28 [20];
  uint local_14;
  
  (*DAT_0097b4d8)(local_28);
  PTR_FUN_00969e94 = FUN_00673afd;
  if (local_14 < 2) {
    PTR_FUN_00969e94 = FUN_00673add;
  }
  (*(code *)PTR_FUN_00969e94)();
  return;
}


