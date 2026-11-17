/* FUN_0084bf95 - 0x0084bf95 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0084bf95(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0042452b();
  *(uint *)(param_1 + 0x2d04) = (uint)(cVar1 != '\0');
  return;
}


