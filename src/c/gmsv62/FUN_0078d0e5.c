/* FUN_0078d0e5 - 0x0078d0e5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0078d0e5(int param_1)

{
  uint uVar1;
  
  uVar1 = -(uint)(*(int *)(param_1 + 0xd74) != 0) & *(int *)(param_1 + 0xd74) - 0xcU;
  FUN_0043fc89((-(uint)(*(int *)(uVar1 + 0x18) != 0) & 5) + 0xc0007528 +
               (*(int *)(uVar1 + 0x128) * 3000 - *(int *)(uVar1 + 300)) * 10);
  return;
}


