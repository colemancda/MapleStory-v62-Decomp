/* FUN_004d4759 - 0x004d4759 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d4759(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int local_c;
  undefined4 local_8;
  
  local_8 = param_1;
  iVar2 = FUN_004371d2(&local_8,&local_c);
  if ((iVar2 != 0) && (local_c != 0)) {
    bVar1 = *(byte *)(local_c + 0x18);
    if (((bVar1 & 2) != 0) && (bVar1 = bVar1 & 0xfd, *(byte *)(local_c + 0x18) = bVar1, bVar1 == 0))
    {
      FUN_004d4c84(*(undefined4 *)(local_c + 0x14));
      FUN_004d4b97(&param_1);
    }
  }
  return;
}


