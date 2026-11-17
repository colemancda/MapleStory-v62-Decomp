/* FUN_00766652 - 0x00766652 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00766652(int param_1)

{
  if ((DAT_00978358 != 0) && (*(int *)(DAT_00978358 + 0xd78) == *(int *)(param_1 + 0x61c))) {
    FUN_00765c73(DAT_00978358 + 0x7c);
  }
  return;
}


