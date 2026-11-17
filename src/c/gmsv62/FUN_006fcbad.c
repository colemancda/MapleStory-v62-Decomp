/* FUN_006fcbad - 0x006fcbad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006fcbad(int param_1)

{
  DWORD DVar1;
  
  DVar1 = timeGetTime();
  if (*(int *)(param_1 + 0xb8) + 500 < (int)DVar1) {
    FUN_006fd13a();
    *(DWORD *)(param_1 + 0xb8) = DVar1;
  }
  return;
}


