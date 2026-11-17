/* FUN_0071080a - 0x0071080a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0071080a(int param_1)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  if (600000 < DVar1 - *(int *)(param_1 + 0x80)) {
    FUN_0071082b(0);
  }
  return;
}


