/* FUN_004713c4 - 0x004713c4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_004713c4(char param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0087b5a5((int)param_1);
  iVar2 = FUN_0087b5a5((int)param_2);
  return iVar1 == iVar2;
}


