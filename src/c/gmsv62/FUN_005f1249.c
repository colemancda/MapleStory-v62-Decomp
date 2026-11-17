/* FUN_005f1249 - 0x005f1249 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005f1249(undefined4 param_1)

{
  int iVar1;
  int local_c;
  undefined4 local_8;
  
  local_8 = param_1;
  iVar1 = FUN_004371d2(&local_8,&local_c);
  if ((iVar1 != 0) && (local_c != 0)) {
    if ((*(byte *)(local_c + 0x18) & 2) != 0) {
      *(byte *)(local_c + 0x18) = *(byte *)(local_c + 0x18) & 0xfd;
      FUN_005ea669(0);
      if (*(byte *)(local_c + 0x18) == 0) {
        FUN_005f17cf(*(undefined4 *)(local_c + 0x14));
        FUN_004d4b97(&param_1);
      }
    }
  }
  return;
}


