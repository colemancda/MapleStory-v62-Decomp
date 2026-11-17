/* FUN_004de7ba - 0x004de7ba in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004de7ba(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xa4) = 0;
  iVar1 = FUN_007d1e08();
  *(int *)(param_1 + 0xac) = iVar1 + *(int *)(param_1 + 0x84);
  return;
}


