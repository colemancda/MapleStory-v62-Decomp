/* FUN_00704cb6 - 0x00704cb6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00704cb6(void)

{
  undefined4 *puVar1;
  int iVar2;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_c = FUN_0070634b();
  while (local_c != 0) {
    puVar1 = (undefined4 *)FUN_0070636c(&local_c,&local_10);
    local_8 = *puVar1;
    iVar2 = (*DAT_0097b704)();
    if ((600000 < (uint)(iVar2 - local_10)) && (iVar2 = FUN_00702658(local_8), iVar2 == 0)) {
      FUN_007062dd(&local_8);
      FUN_0070328a(local_8);
    }
  }
  return 1;
}


