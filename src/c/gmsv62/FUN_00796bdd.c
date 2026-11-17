/* FUN_00796bdd - 0x00796bdd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00796bdd(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042459a();
  FUN_00796bff(uVar1);
  *(undefined4 *)(param_1 + 0x17bc) = uVar1;
  return;
}


