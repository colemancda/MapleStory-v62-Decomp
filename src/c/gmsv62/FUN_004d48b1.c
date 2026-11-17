/* FUN_004d48b1 - 0x004d48b1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d48b1(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  int local_8;
  
  param_1 = FUN_0042459a();
  local_c = param_1;
  iVar1 = FUN_004371d2(&param_1,&local_8);
  if (((iVar1 != 0) && (local_8 != 0)) &&
     (*(byte *)(local_8 + 0x18) = *(byte *)(local_8 + 0x18) & 0xfe,
     *(char *)(local_8 + 0x18) == '\0')) {
    FUN_004d4c84(*(undefined4 *)(local_8 + 0x14));
    FUN_004d4b97(&local_c);
  }
  return;
}


