/* FUN_004efada - 0x004efada in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_004efada(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = FUN_004f162d();
  uVar2 = FUN_004f162d();
  bVar3 = (int)(((ulonglong)uVar1 / 1000000) % 100) == 9;
  if ((param_1 != 0) && ((int)(((ulonglong)uVar2 / 10000) % 100) == 5)) {
    bVar3 = false;
  }
  return bVar3;
}


