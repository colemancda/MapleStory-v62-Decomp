/* FUN_004b3ee0 - 0x004b3ee0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_004b3ee0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b3fb8();
  FUN_004b3f35();
  FUN_004b3f52();
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 4);
  return iVar1;
}


