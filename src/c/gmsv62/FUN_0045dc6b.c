/* FUN_0045dc6b - 0x0045dc6b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0045dc6b(int param_1)

{
  int iVar1;
  
  if (DAT_00978364 != 0) {
    iVar1 = FUN_0045dc32();
    FUN_00817f6e(~-(uint)(iVar1 != 0) & -(uint)(param_1 != 0) & param_1 + 4U);
  }
  return;
}


