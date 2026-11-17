/* FUN_0086f1e0 - 0x0086f1e0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 FUN_0086f1e0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_0097fc99 == '\0') {
    return 2;
  }
  iVar2 = 0;
  if (DAT_0097fc90 != WSASend_exref) {
    if (DAT_0097fc64 != 0) {
      uVar1 = FUN_00875080(&DAT_0096e97c,WSASend_exref);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar1);
    }
    iVar2 = 1;
  }
  if (DAT_0097fc94 != send_exref) {
    if (DAT_0097fc64 != 0) {
      uVar1 = FUN_00875080(&DAT_0096e968,send_exref);
      FUN_0086cff0(DAT_0097fc64 + 0x24,uVar1);
    }
    iVar2 = iVar2 + 1;
  }
  return iVar2 == 0;
}


